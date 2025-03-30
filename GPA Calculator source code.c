#include <stdio.h>

// Function to calculate GPA
float calculate_gpa(int a, int x[], int y[], float z[]) {
    float k = 0.0, j = 0.0;
    for (int i = 0; i < a; i++) {
        // Determine grade points based on the score
        if (x[i] >= 0 && x[i] <= 49) { z[i] = 0.0; }
        else if (x[i] <= 52) { z[i] = 3.0; }
        else if (x[i] <= 55) { z[i] = 4.0; }
        else if (x[i] <= 59) { z[i] = 5.0; }
        else if (x[i] <= 64) { z[i] = 6.0; }
        else if (x[i] <= 69) { z[i] = 7.0; }
        else if (x[i] <= 74) { z[i] = 8.0; }
        else if (x[i] <= 79) { z[i] = 9.0; }
        else if (x[i] <= 84) { z[i] = 10.0; }
        else if (x[i] <= 89) { z[i] = 11.0; }
        else if (x[i] <= 94) { z[i] = 11.5; }
        else { z[i] = 12.0; }

        // Calculate weighted grade points and credit hours
        k += y[i] * z[i];
        j += y[i];
    }

    return k / j / 3;
}

// Function to show the result
void show_result(float gpa, float j) {
    printf("\nYour GPA: %.2f", gpa);

    if (gpa > 0.0 && gpa <= 2.0) {
        printf(", Your letter Grade: F (Fail)");
    } else if (gpa <= 2.6) {
        printf(", Your letter Grade: D (Passed)");
    } else if (gpa <= 3.0) {
        printf(", Your letter Grade: C (Good)");
    } else if (gpa <= 3.6) {
        printf(", Your letter Grade: B (Well-done)");
    } else if (gpa <= 4.0) {
        printf(", Your letter Grade: A (Excellent)");
    }
    printf("\nTotal achieved Credit Hours: %.2f\n", j);
}

// Main function
int main() {
    printf("\t\t\tWelcome to GPA Calculator\n");

    int a;
    printf("Enter the number of courses in your semester: ");
    scanf("%d", &a);

    // Validate the number of courses
    if (a <= 0) {
        printf("Error: Number of courses must be positive.\n");
        return 1;
    }

    int x[a], y[a];
    float z[a];

    for (int i = 0; i < a; i++) {
        printf("Enter the grade for course %d: ", i + 1);
        scanf("%d", &x[i]);

        // Validate the grade input
        if (x[i] < 0 || x[i] > 100) {
            printf("\n\t\t\tError: The grade for each course must be between 0 and 100.\n");
            return 1;
        }

        printf("Enter the credit hours for course %d: ", i + 1);
        scanf("%d", &y[i]);

        // Validate the credit hour input
        if (y[i] <= 0 || y[i] > 5) {
            printf("\n\t\t\tError: The credit hours for each course must not exceed 5.\n");
            return 1;
        }
    }

    // Calculate GPA
    float gpa = calculate_gpa(a, x, y, z);

    // Calculate the total credit hours
    float total_credits = 0.0;
    for (int i = 0; i < a; i++) {
        total_credits += y[i];
    }

    // Show the GPA result
    show_result(gpa, total_credits);

    return 0;
}
