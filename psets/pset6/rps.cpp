#include <iostream>

using namespace std;

class Tool {
    public:
        void setStrength(int s) {
            this->strength = s;
        };

        void displayStrength() {
            cout << "Strength: " << this->strength << endl;
        }

        void displayType() {
            cout << "Type: " << this->type << endl;
        }

    protected:
        int strength;
        char type;

        Tool(int s) {
            this->setStrength(s);
        }

        virtual void setType() = 0;
};

class Scissors: public Tool {

    public:
        Scissors(int s) : Tool(s) {
            this->setType();
        }


    protected:
        void setType() {
            this->type = 's';
        }
};

class Paper: public Tool {

    public:
        Paper(int s) : Tool(s) {
            this->setType();
        }


    protected:
        void setType() {
            this->type = 'p';
        }
};


/*
	Implement class Rock
*/

int main() {
	// Example main function
	// You may add your own testing code if you like
    
    Scissors s = Scissors(4);
    s.displayStrength();
    s.displayType();

    Paper p = Paper(2);
    p.displayStrength();
    p.displayType();

    /*
	Scissors s1(5);
	Paper p1(7);
	Rock r1(15);
	cout << s1.fight(p1) << p1.fight(s1) << endl;
	cout << p1.fight(r1) << r1.fight(p1) << endl;
	cout << r1.fight(s1) << s1.fight(r1) << endl;
    */

	return 0;
}
