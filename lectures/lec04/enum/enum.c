#include <stdio.h>

// Define the enum for time_of_day
enum time_t { morning, noon, afternoon, night };

// Define the enum for directions with explicit values
enum dir_t { NORTH = 0, EAST = 1, SOUTH = 2, WEST = 3 };

// Typedef for easier reference
typedef enum dir_t dir_t;

int main() {
    // Enum variable for time of day
    enum time_t class = morning;

    // Compare the time of day
    if (class == afternoon) {
        printf("It's afternoon.\n");
    }

    // Enum variable for direction
    dir_t direction = SOUTH;

    // Compare the direction
    if (direction == SOUTH) {
        printf("We are heading South.\n");
    }

    return 0;
}

