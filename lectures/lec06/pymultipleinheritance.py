# Multiple Inheritance in Python

class Color:
    def print(self):
        print("Color: Blue")

class Mood:
    def print(self):
        print("Mood: Calm")

class Blue(Color, Mood):
    def print(self):
        Color.print(self)  # Call print from Color
        Mood.print(self)   # Call print from Mood

if __name__ == "__main__":
    obj = Blue()
    obj.print()  # Outputs both Color and Mood

"""
Explanation:
- This Python example demonstrates multiple inheritance.
- The class `Blue` inherits from both `Color` and `Mood`.
- The overridden `print` method explicitly calls both base classes' print methods.
- Python handles multiple inheritance using the Method Resolution Order (MRO).
"""
