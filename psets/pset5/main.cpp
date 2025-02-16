#include <iostream>


template <class T>


class Grade {
    public:
        // Constructor
        Grade() : letter('F'), percent(0) {};
        

        void setByPercent(int& percent) {
            this->percent = percent;
            this->grade = this->GRADE_MAP[this->percent/10];
        }

        // public functions
        void print() const {
            std::cout << "Grade: " << this->grade << ": " << this->letter << std::endl;


        }




    private:
        char letter;
        int percent;
        static const char GRADE_MAP[11];

};

const char Grade::GRADE_MAP[11] = { 'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};


int main() {
	Grade g;
	int percent;
    printf("Enter two grades separated by a space. Use a percentage for the first and letter for the second: ");
	scanf("%d", &percent);
	//scanf("\n");
	
	g.setByPercent(percent);
	g.print();
	
	//g.setByLetter(getchar());
	//g.print();

	return 0;
}
