from enum import Enum

# Define the Enum for time_of_day
class TimeOfDay(Enum):
    MORNING = 0
    NOON = 1
    AFTERNOON = 2
    NIGHT = 3

# Define the Enum for directions
class Direction(Enum):
    NORTH = 0
    EAST = 1
    SOUTH = 2
    WEST = 3

def main():
    # Enum variable for time of day
    time_of_day = TimeOfDay.MORNING

    # Compare the time of day
    if time_of_day == TimeOfDay.AFTERNOON:
        print("It's afternoon.")

    # Enum variable for direction
    direction = Direction.SOUTH

    # Compare the direction
    if direction == Direction.SOUTH:
        print("We are heading South.")

if __name__ == "__main__":
    main()

