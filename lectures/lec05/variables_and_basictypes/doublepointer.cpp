int main() {
    int ival = 1024;      // An integer variable
    int *pi = &ival;      // pi is a pointer to an int
    int **ppi = &pi;      // ppi is a pointer to a pointer to an int

    // Modifying values through pointers
    **ppi = 2048;         // Changes the value of ival

    // Pointer to pointer example
    int val = 42;
    int *p1 = &val;
    int **p2 = &p1;

    *p1 = 100;            // Changes val through p1
    **p2 = 200;           // Changes val through p2

    return 0;
}

