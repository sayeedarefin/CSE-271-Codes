// take two numbers and a operator (+, -, *, /) as input. and the perform the operation. and perform the operation: sample input: 1,2,+ output: 3, sample input 2,2,-, output 0, same do for multiplication using conditionals, if else


// take input numbers(0-9) and print their spelling. sample input: 1, output: one input 2, output two













#include <stdio.h>
int main(){
    int a,b;
    int sum = a+b;
    int sub = a-b;
    int mult = a*b;
    int div = a/b;

    printf("Enter 2 valid numbers: ");
    scanf("%d%d", &a, &b);
    printf("Enter one of the following opratio")

}


# Take input for two numbers and the operator
num1, num2, operator = input("Enter two numbers and an operator (e.g., 1,2,+): ").split(',')

# Convert the numbers to integers
num1 = int(num1)
num2 = int(num2)

# Perform the operation based on the input operator
if operator == '+':
    result = num1 + num2
elif operator == '-':
    result = num1 - num2
elif operator == '*':
    result = num1 * num2
elif operator == '/':
    if num2 != 0:
        result = num1 / num2
    else:
        result = "Error: Division by zero"
else:
    result = "Invalid operator"

print("Result:", result)




# Take input for a number
num = int(input("Enter a number (0-9): "))

# Use conditionals to print the spelling
if num == 0:
    print("Zero")
elif num == 1:
    print("One")
elif num == 2:
    print("Two")
elif num == 3:
    print("Three")
elif num == 4:
    print("Four")
elif num == 5:
    print("Five")
elif num == 6:
    print("Six")
elif num == 7:
    print("Seven")
elif num == 8:
    print("Eight")
elif num == 9:
    print("Nine")
else:
    print("Invalid input")
