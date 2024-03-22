#include <stdio.h>

// Function to implement the AND gate
int custom_AND(int a, int b) {
    return a && b;
}

// Function to implement the OR gate
int custom_OR(int a, int b) {
    return a || b;
}

// Function to implement the NOT gate
int custom_NOT(int a) {
    return !a;
}

int main() {
    int input1, input2;

    // Obtaining inputs from the user
    printf("Enter input A (0 or 1): ");
    scanf("%d", &input1);
    printf("Enter input B (0 or 1): ");
    scanf("%d", &input2);

    // Calculating and displaying the output of the gates
    printf("\nOutput of custom AND gate: %d\n", custom_AND(input1, input2));
    printf("Output of custom OR gate: %d\n", custom_OR(input1, input2));
    printf("Output of custom NOT gate for input A: %d\n", custom_NOT(input1));
    printf("Output of custom NOT gate for input B: %d\n", custom_NOT(input2));

    return 0;
}

/*------------------end of file---------------------*/