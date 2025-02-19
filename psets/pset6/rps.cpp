#include <iostream>

using namespace std;

class Tool {
    public:

        char type;

        void setStrength(int s) {
            this->strength = s;
        };

        void displayStrength() {
            cout << "Strength: " << this->strength << endl;
        }

        void displayType() {
            cout << "Type: " << this->type << endl;
        }

        int getStrength() const {
            return this->strength;
        }

        virtual bool fight(Tool& t) = 0;

    protected:
        int strength;

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

        bool fight(Tool& t) {
            float tmpStrength = static_cast<float>(this->getStrength());
            float otherStrength = static_cast<float>(t.getStrength());

            if (t.type == 'p') {
                tmpStrength *= 2;
            }
            else if (t.type == 'r') {
                tmpStrength *= 0.5;
            }

            return tmpStrength > otherStrength;
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

        bool fight(Tool& t) {
            float tmpStrength = static_cast<float>(this->getStrength());
            float otherStrength = static_cast<float>(t.getStrength());

            if (t.type == 's') {
                tmpStrength *= 0.5;
            }
            else if (t.type == 'r') {
                tmpStrength *= 2;
            }

            return tmpStrength > otherStrength;
        }


    protected:
        void setType() {
            this->type = 'p';
        }
};

class Rock: public Tool {

    public:
        Rock(int s) : Tool(s) {
            this->setType();
        }

        bool fight(Tool& t) {
            float tmpStrength = static_cast<float>(this->getStrength());
            float otherStrength = static_cast<float>(t.getStrength());

            if (t.type == 's') {
                tmpStrength *= 2;
            }
            else if (t.type == 'p') {
                tmpStrength *= 0.5;
            }

            return tmpStrength > otherStrength;
        }


    protected:
        void setType() {
            this->type = 'r';
        }
};

/*
	Implement class Rock
*/

int main() {
	// Example main function
	// You may add your own testing code if you like
    
	Scissors s1(1);
	Paper p1(1);
	Rock r1(1);
	cout << "S to P: " << s1.fight(p1) << " <-> P to S: " << p1.fight(s1) << endl;
	cout << "P to R: " << p1.fight(r1) << " <-> R to P: " << r1.fight(p1) << endl;
	cout << "R to S: " << r1.fight(s1) << " <-> S to R: " << s1.fight(r1) << endl;

	return 0;
}
