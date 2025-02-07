#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Sort an array A using insertion sort. Notice it is to be passed by reference.
// if we will sort the array itself, must use pass by reference


// initially the input is an array of integers
// we just need to point to the first integer of this array
void sort(int* A, int n){
	int key;
	int i;
	int j;
    int* after;
    int* before;
	
	// outer O(n) passes, starting from the beginning
	for(i=1; i<n; i++){
        // key is the key to be placed in the sorted subarray 
		key = *(A+i);
		j=i-1;
		//For each element in A, search for where it belong in the subarray preceeding it's current location
		// go for the inner O(n) passes
        // as per two conditions:
        //      - the A[i-1]>A[i]
        //      - and until the j is still bigger than or equal to 0 
        before = (A+j);
        after = (A+j+1);
		while(*(A+j)>key && j>=0){
            // shifting greater elements to the right
            // that is why the greater j+1 receives the j
            // shifting to the right
			*(A+j+1)=*(A+j);
			j-=1;
		}
        // put key in the right position after no more shifts were found
        // so key finally must stay here
		*(A+j+1)=key;
	}
}

int main(){
	//Allows use to generate random numbers
	srand(time(NULL));

	//Read a user input integer and store it in n
	int n = 10;

	//Array array. Change this to become a dynamic array through malloc.
	int* array = (int*) malloc(n*sizeof(int));

	//Assign each element in the array a random number between 0 and 10
	int i;
	for (i=0; i<n; i++){
		array[i]=rand()%10; //This line assigns random numbers
	}

	//Prints out the elements of the unsorted array
	int x;
	printf("The unsorted array is: ");
	for (x=0; x<n; x++){
		printf("%d ",array[x]);
	}
	printf("\n");
	
	//Calls the sort function to sort the array
	sort(array,n);
	
	//Print out the elements of the now (supposedly) sorted array.
	printf("The sorted array is: ");
	for (x=0; x<n; x++){
		printf("%d ",array[x]);
	}
	printf("\n");

    free(array);
    array = NULL;

	return 0;

}
