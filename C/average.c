#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double average;
    int largest = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number of elements.\n");
        return 1;
    }

    int numbers[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);

        // Find the largest number
        if (numbers[i] > largest) {
            largest = numbers[i];
        }

        sum += numbers[i];
    }

    average = sum / n;

    printf("Largest number: %d\n", largest);
    printf("Average: %.2lf\n", average);

    return 0;
}
