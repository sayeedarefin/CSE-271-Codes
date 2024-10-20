
#include <stdio.h>
#include <math.h>  // For sqrt() function

// Function to calculate the distance between two points
float calculateDistance(float x1, float y1, float x2, float y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    float x1, y1, x2, y2, distance;

    // Input coordinates of the two points
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    // Call the function to calculate the distance
    distance = calculateDistance(x1, y1, x2, y2);

    // Output the result
    printf("The distance between the two points is: %.2f\n", distance);

    return 0;
}
