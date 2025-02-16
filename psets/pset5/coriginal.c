#include <stdio.h>

char GRADE_MAP[] = { 'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};

typedef struct _Grade {
    char letter;
    int percent;
} Grade;


void setGradeByPercent(Grade* grade, int percent) {
    grade->percent = percent;
    grade->letter = GRADE_MAP[percent/10];
}

void setGradeByLetter(Grade* grade, char letter) {
    grade->letter = letter;
    grade->percent = 100 - (letter - 'A') * 10 - 5;
}

void printGrade(Grade* grade) {
    printf("Grade: %d: %c\n", grade->percent, grade->letter);
}

int main() {
    Grade g;
    int percent;
    char letter;

    printf("Enter percentage grade: ");
    scanf("%d", &percent);
    setGradeByPercent(&g, percent);
    printGrade(&g);

    printf("Enter letter grade: ");
    scanf(" %c", &letter);
    setGradeByLetter(&g, letter);
    printGrade(&g);

    return 0;
}

