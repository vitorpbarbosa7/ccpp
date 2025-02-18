/* Explanation of Slicing in C++ Subclassing:

**Object Slicing:**
When an object of a derived class is assigned to an object of its base class, the extra data and overridden methods from the derived class are "sliced off," meaning only the base class part remains.

Example:
*/

#include <iostream>
using namespace std;

struct Cow {
    void speak() {
        cout << "Moo." << endl;
    }
};

struct Werecow : public Cow {
    bool transformed;
    void speak() {
        if (transformed)
            cout << "Aaooooh!" << endl;
        else
            cout << "Moo." << endl;
    }
};

int main() {
    Werecow wcow;
    wcow.transformed = true;
	
	// ###############################################
	// only Cow objects are kept here
    Cow cows[2];
    cows[0] = Cow();
    cows[1] = wcow;  // Slicing occurs here

    for (int i = 0; i < 2; i++)
        cows[i].speak();  // Outputs: Moo. Moo.

    wcow.speak();  // Outputs: Aaooooh!

    return 0;
}

/* Explanation:
 * The array `cows` stores `Cow` objects, so when `wcow` is assigned to `cows[1]`,
 * only the `Cow` part is kept (slicing), losing `transformed` and `Werecow::speak`.
 */

