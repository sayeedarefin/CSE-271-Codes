#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>

#define MAX_USERS 5 // Limit to 5 users for this demo
#define MAX_SCORES 100
#define LOG_FILE "program_log.txt" // Log file name
#define DATA_FILE "scores_data.txt" // Data file for saving/loading

// User structure to handle multiple users
typedef struct {
    char name[50];
    int scores[MAX_SCORES];
    int score_count;
} User;

// Function prototypes
char getGrade(int score);
bool validateScore(int score);
float calculateAverage(int scores[], int count);
void calculateStatistics(int scores[], int count);
void saveScoresToFile(User users[], int user_count);
void loadScoresFromFile(User users[], int *user_count);
void logAction(const char *message);

int main(int argc, char *argv[]) {
    int score, user_count = 0, retry_count, current_user_index;
    User users[MAX_USERS]; // Array to store users
    char choice = 'y', continue_program = 'y';
    float average;

    logAction("Program started."); // Logging the start

    // Load existing scores from file
    loadScoresFromFile(users, &user_count);

    while (continue_program == 'y' || continue_program == 'Y') {
        // Multi-user support: Ask for user name and search or create a new user
        printf("Enter your name: ");
        char username[50];
        scanf("%s", username);

        // Check if the user already exists
        bool user_exists = false;
        for (current_user_index = 0; current_user_index < user_count; current_user_index++) {
            if (strcmp(users[current_user_index].name, username) == 0) {
                user_exists = true;
                break;
            }
        }

        if (!user_exists) {
            if (user_count < MAX_USERS) {
                strcpy(users[user_count].name, username);
                users[user_count].score_count = 0;
                current_user_index = user_count;
                user_count++;
            } else {
                printf("Maximum number of users reached.\n");
                break;
            }
        }

        // Input loop for score entry
        while (choice == 'y' || choice == 'Y') {
            retry_count = 0;

            // Input validation with retries
            do {
                printf("Enter your result score (0 to 100): ");
                scanf("%d", &score);

                if (!validateScore(score)) {
                    retry_count++;
                    printf("Invalid score! Please enter a number between 0 and 100. Retry %d/3\n", retry_count);
                    logAction("Invalid score entered.");
                }
            } while (!validateScore(score) && retry_count < 3);

            // If max retries exceeded
            if (retry_count == 3) {
                printf("Max retries exceeded. Exiting the score entry.\n");
                logAction("Max retries exceeded.");
                break;
            }

            // Store valid score for the user
            users[current_user_index].scores[users[current_user_index].score_count] = score;
            users[current_user_index].score_count++;

            // Display the grade
            printf("Your grade is '%c'\n", getGrade(score));
            logAction("Grade calculated.");

            // Ask to enter another score
            printf("Do you want to enter another score? (y/n): ");
            scanf(" %c", &choice);
        }

        // Final statistics for the user
        if (users[current_user_index].score_count > 0) {
            average = calculateAverage(users[current_user_index].scores, users[current_user_index].score_count);
            printf("\nReport for %s:\n", users[current_user_index].name);
            printf("You entered %d scores. Average score: %.2f\n", users[current_user_index].score_count, average);
            calculateStatistics(users[current_user_index].scores, users[current_user_index].score_count);
            logAction("Statistics calculated.");
        }

        // Ask if the user wants to continue or exit
        printf("\nDo you want to continue with another user? (y/n): ");
        scanf(" %c", &continue_program);
    }

    // Save all users' scores to file
    saveScoresToFile(users, user_count);
    logAction("Scores saved to file.");

    return 0;
}

// Function to get the grade based on score
char getGrade(int score) {
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 70) return 'C';
    if (score >= 60) return 'D';
    return 'F'; // F for scores below 60
}

// Function to validate the score
bool validateScore(int score) {
    return score >= 0 && score <= 100;
}

// Function to calculate average score
float calculateAverage(int scores[], int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += scores[i];
    }
    return (float)sum / count;
}

// Function to calculate and display statistics (median and mode)
void calculateStatistics(int scores[], int count) {
    int i, j, temp;
    int mode = scores[0], maxCount = 1, currentCount = 1;
    float median;

    // Sort the scores to calculate median
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (scores[j] > scores[j + 1]) {
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }

    // Calculate median
    if (count % 2 == 0) {
        median = (scores[count / 2 - 1] + scores[count / 2]) / 2.0;
    } else {
        median = scores[count / 2];
    }
    printf("Median score: %.2f\n", median);

    // Calculate mode
    for (i = 1; i < count; i++) {
        if (scores[i] == scores[i - 1]) {
            currentCount++;
        } else {
            currentCount = 1;
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            mode = scores[i];
        }
    }

    if (maxCount > 1) {
        printf("Mode score: %d (appeared %d times)\n", mode, maxCount);
    } else {
        printf("No mode (all scores appear only once)\n");
    }
}

// Function to save scores to file
void saveScoresToFile(User users[], int user_count) {
    FILE *file = fopen(DATA_FILE, "w");
    if (file == NULL) {
        printf("Failed to open file for writing!\n");
        return;
    }

    for (int i = 0; i < user_count; i++) {
        fprintf(file, "User: %s\n", users[i].name);
        for (int j = 0; j < users[i].score_count; j++) {
            fprintf(file, "%d\n", users[i].scores[j]);
        }
    }

    fclose(file);
}

// Function to load scores from file
void loadScoresFromFile(User users[], int *user_count) {
    FILE *file = fopen(DATA_FILE, "r");
    if (file == NULL) {
        printf("No previous scores found.\n");
        return;
    }

    while (fscanf(file, "User: %s\n", users[*user_count].name) != EOF) {
        int score;
        users[*user_count].score_count = 0;
        while (fscanf(file, "%d\n", &score) != EOF) {
            users[*user_count].scores[users[*user_count].score_count] = score;
            users[*user_count].score_count++;
        }
        (*user_count)++;
    }

    fclose(file);
}

// Function to log actions to a file
void logAction(const char *message) {
    FILE *logFile = fopen(LOG_FILE, "a");
    if (logFile != NULL) {
        fprintf(logFile, "%s\n", message);
        fclose(logFile);
    } else {
        printf("Failed to write to log file!\n");
    }
}
