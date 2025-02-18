#include <iostream>
using namespace std;

class Goofball {
public:
    int x;
};

class Stupid : public virtual Goofball { };
class Dumb : public virtual Goofball { };

class Oops : public Stupid, public Dumb {
public:
    int fail() {
        Stupid::x = 1;  // Both Stupid and Dumb share the same x
        Dumb::x = 2;  // Modifies the same x again
        return Stupid::x + Stupid::x;  // 2 + 2 = 4
    }
};

int main() {
    Oops obj;
    cout << "Sum: " << obj.fail() << endl;
    return 0;
}

/* Explanation:
 * Virtual inheritance ensures that Stupid and Dumb share the same Goofball instance.
 * Only one x exists in Oops, avoiding duplication and ambiguity.
 */

