#include <iostream>


template <class T>


class Grade {
    public:
        // Constructor
        Grade() = default;


        // public functions
        void print() {

        }




    private:
        char letter;
        int percent;
        char GRADE_MAP[] = { 'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};

        void setByPercent(int& percent) {
            this->percent = percent;
            this->grade = this->GRADE_MAP[this->percent/10];
        }



int main() {
	Grade g;
	int percent;
    printf("Enter two grades separated by a space. Use a percentage for the first and letter for the second: ");
	scanf("%d", &percent);
	scanf("\n");
	
	g.setByPercent(percent);
	g.print();
	
	//g.setByLetter(getchar());
	//g.print();

	return 0;
}
