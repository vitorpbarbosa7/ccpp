int main() {
    int a = 10;
    int b = 20;

    // Reference example
    int &refA = a;    // refA is a reference (alias) to a
    refA = 15;         // Modifies 'a' through refA

    // Pointer example
    int *ptrA = &a;    // ptrA is a pointer to a
    *ptrA = 30;        // Modifies 'a' through pointer

    ptrA = &b;         // Pointer reassigned to point to b
    *ptrA = 25;        // Modifies 'b'

    // Trying to create an uninitialized reference (uncomment to see error)
    // int &refB;       // ERROR: Reference must be initialized

    // Pointer arithmetic example
    int arr[3] = {1, 2, 3};
    int *ptrArr = arr;  // Points to the first element of arr
    ptrArr++;           // Moves the pointer to the next element in memory

    return 0;
}

