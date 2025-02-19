#include <iostream>

using namespace std;

class Tool {
public:
    void setStrength(int s) {
        this->strength = s;
    }

    void displayStrength() {
        cout << "Strength: " << this->strength << endl;
    }

    void displayType() {
        cout << "Type: " << this->type << endl;
    }

    int getStrength() const {
        return this->strength;
    }

    bool fight(Tool& t) {
        float tmpStrength = static_cast<float>(this->getStrength());
        float otherStrength = static_cast<float>(t.getStrength());

        tmpStrength *= this->getMultiplier(t.type);

        return tmpStrength > otherStrength;
    }

protected:
    int strength;
    char type;

    Tool(int s) {
        this->setStrength(s);
    }

    virtual void setType() = 0;

    // Define the fight multiplier based on opponent's type
    virtual float getMultiplier(char opponentType) const = 0;
};

class Scissors : public Tool {
public:
    Scissors(int s) : Tool(s) {
        this->setType();
    }

protected:
    void setType() override {
        this->type = 's';
    }

    float getMultiplier(char opponentType) const override {
        if (opponentType == 'p') return 2.0f;  // Scissors beat Paper (×2)
        if (opponentType == 'r') return 0.5f;  // Scissors lose to Rock (×0.5)
        return 1.0f;
    }
};

class Paper : public Tool {
public:
    Paper(int s) : Tool(s) {
        this->setType();
    }

protected:
    void setType() override {
        this->type = 'p';
    }

    float getMultiplier(char opponentType) const override {
        if (opponentType == 's') return 0.5f;  // Paper loses to Scissors (×0.5)
        if (opponentType == 'r') return 2.0f;  // Paper beats Rock (×2)
        return 1.0f;
    }
};

class Rock : public Tool {
public:
    Rock(int s) : Tool(s) {
        this->setType();
    }

protected:
    void setType() override {
        this->type = 'r';
    }

    float getMultiplier(char opponentType) const override {
        if (opponentType == 's') return 2.0f;  // Rock beats Scissors (×2)
        if (opponentType == 'p') return 0.5f;  // Rock loses to Paper (×0.5)
        return 1.0f;
    }
};

int main() {
    Scissors s1(1);
    Paper p1(1);
    Rock r1(1);

    cout << "S to P: " << s1.fight(p1) << " <-> P to S: " << p1.fight(s1) << endl;
    cout << "P to R: " << p1.fight(r1) << " <-> R to P: " << r1.fight(p1) << endl;
    cout << "R to S: " << r1.fight(s1) << " <-> S to R: " << s1.fight(r1) << endl;

    return 0;
}

