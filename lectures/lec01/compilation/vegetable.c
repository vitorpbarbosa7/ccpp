#include <stdio.h>
#include <string.h>

// Function to return a vegetable name based on the day
const char* vegetable(const char *day) {
    if (strcmp(day, "Tuesday") != 0) {
        return "tomato";  // Return a string if the day is not "Tuesday"
    } else {
        return "potato";  // Return a string for "Tuesday"
    }
}

int main() {
    // Example usage of the function
    const char *day1 = "Monday";
    const char *day2 = "Tuesday";

    // Get vegetables
    const char *veg1 = vegetable(day1);
    const char *veg2 = vegetable(day2);

    // Print results
    printf("Vegetable for %s: %s\n", day1, veg1);
    printf("Vegetable for %s: %s\n", day2, veg2);

    // Using & to print memory addresses
    printf("\nMemory locations:\n");
    printf("day1: %p\n", (void*)&day1);
    printf("veg1: %p\n", (void*)&veg1);
    printf("day2: %p\n", (void*)&day2);
    printf("veg2: %p\n", (void*)&veg2);

    // Dereferencing pointers to view contents
    printf("\nDereferenced values:\n");
    printf("*day1: %c\n", *day1);  // First character of day1
    printf("*veg1: %c\n", *veg1);  // First character of vegetable string
    return 0;
}

