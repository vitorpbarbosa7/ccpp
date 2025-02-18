#include <iostream>
using namespace std;

class Goofball {
public:
    int x;
};

class Stupid : public Goofball { };
class Dumb : public Goofball { };

class Oops : public Stupid, public Dumb {
public:
    int fail() {
        Stupid::x = 1;  // Refers to Stupid's Goofball::x
        Dumb::x = 2;    // Refers to Dumb's Goofball::x
        return Stupid::x + Dumb::x;  // 1 + 2 = 3 (two separate copies)
    }
};

int main() {
    Oops obj;
    cout << "Sum: " << obj.fail() << endl;
    return 0;
}

/* Explanation:
 * Here, Oops inherits from both Stupid and Dumb, each having its own Goofball instance.
 * This creates two separate copies of x, causing ambiguity and the diamond problem.
 */

