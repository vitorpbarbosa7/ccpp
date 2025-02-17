#include <stdio.h>

template <typename T>

class List {

    // pointer to the list
    // so initial address is the first element
    // it is the array itself
    T* list;

    public:
        // internal variable to refernce by this
        int length;
        
        // Constructor
        List(const int &len) {
            // create array of size (len) of T (type) elements
            // when we see new, we see in fact malloc, that is is dynamic memory allocation
            list = new T[len];
            this->length = len;
        }

        // Destructor
        // since we used dynamic memory allocation, therefore we should destroy this
        ~List() {
            delete[] list;
        }
        
        // Observer
        T get(const int &index) {
            return list[index];
        }

        void set(const int &index, const T val) {
            list[index] = val;
        }
};




/*
    You shouldn't change the code below, unless you want to _temporarily_ change the main function while testing.
    Change it back when you're done.    
*/
typedef struct Point_ {
    int x;
    int y;
} Point;

int main(){
    // the variable we create is called integers
    List<int> integers(10);
    for(int i = 0; i < integers.length; i++){
        integers.set(i, i * 100);
        printf("%d ", integers.get(i));
    }
    printf("\n"); // this loop should print: 0 100 200 300 400 500 600 700 800 900 
    
    // the variable we create is called points
    List<Point*> points(5);
    for(int i = 0; i < points.length; i++){
        Point * p = new Point;
        p->x = i * 10;
        p->y = i * 100;
        points.set(i, p);
        printf("(%d, %d) ", points.get(i)->x, points.get(i)->y);
        delete p;
    }
    printf("\n"); // this loop should print: (0, 0) (10, 100) (20, 200) (30, 300) (40, 400) 
}
