#include <stdio.h>

struct student {
    union grade {
        int percentage_grade;  // Represent grade as a percentage (e.g., 90)
        char letter_grade;     // Represent grade as a letter (e.g., 'A')
    } grade;
    
    int grade_format;  // Use 0 for percentage_grade, 1 for letter_grade
};

int main() {
    struct student frank;

    // Assigning an integer percentage grade
    frank.grade.percentage_grade = 90;
    frank.grade_format = 0;  // Indicates the grade is stored as a percentage

    // Print the student's grade as a percentage
    if (frank.grade_format == 0) {
        printf("Frank's grade: %d%% (percentage)\n", frank.grade.percentage_grade);
    }

    // Assigning a letter grade (overwrites the previous data in the union)
    frank.grade.letter_grade = 'A';
    frank.grade_format = 1;  // Indicates the grade is stored as a letter

    // Print the student's grade as a letter
    if (frank.grade_format == 1) {
        printf("Frank's grade: %c (letter)\n", frank.grade.letter_grade);
    }

    return 0;
}

