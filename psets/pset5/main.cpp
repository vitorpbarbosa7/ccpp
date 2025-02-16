#include <iostream>


class Grade {
    public:
        // Constructor




int main() {
    Grade g;
    int percent;
    char letter;

    printf("Enter percentage grade: ");
    scanf("%d", &percent);
    g.setGradeByPercent(&g, percent);
    g.printGrade(&g);

    printf("Enter letter grade: ");
    scanf(" %c", &letter);
    g.setGradeByLetter(&g, letter);
    g.printGrade(&g);

    return 0;
}


