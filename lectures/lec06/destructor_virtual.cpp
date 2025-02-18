#include <iostream>
using namespace std;

class Gill {
public:
    Gill() { cout << "Gill created\n"; }
    ~Gill() { cout << "Gill destroyed\n"; }
};

class Fish {
public:
    Fish() {
        gills[0] = new Gill;
        gills[1] = new Gill;
    }
    virtual ~Fish() {
        delete gills[0];
        delete gills[1];
        cout << "Fish destroyed\n";
    }
private:
    Gill* gills[2];
};

class Shark : public Fish {
public:
    Shark() { cout << "Shark created\n"; }
    ~Shark() { cout << "Shark destroyed\n"; }
};

int main() {
    Fish* fish = new Shark;
    delete fish;  // Calls Shark destructor, then Fish destructor due to virtual
    return 0;
}

/* Explanation:
 * Virtual destructors ensure proper cleanup in inheritance hierarchies.
 * Without `virtual ~Fish()`, only `Fish` destructor would run, causing a memory leak.
 */

