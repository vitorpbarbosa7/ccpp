#include <iostream>
#include <vector>

class Grade {
    public:
        // Constructor
        Grade() : letter('F'), percent(0) {};
        char GRADE_MAP[11] = { 'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};

        void setByPercent(int& percent) {
            this->percent = percent;
            this->letter = this->GRADE_MAP[this->percent/10];
        }

        void setByLetter(char letter) {
            this->letter = letter;
            this->percent = 100 - (this->letter - 'A') * 10 - 5;
        }

        // public functions
        // does not return anything (void)
        // and do not modify anything (const after the member function name)
        void print() const {
            std::cout << "Grade: " << this->percent << ": " << this->letter << std::endl;
        }



    private:
        char letter;
        int percent;

};


int main() {
	Grade g;
	int percent = 100;
    char myChar = 'F';
	
	g.setByPercent(percent);
	g.print();
	
	g.setByLetter(myChar);
	g.print();

	return 0;
}

