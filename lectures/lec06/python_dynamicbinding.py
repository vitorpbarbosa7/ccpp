# OOP Concepts: Data Abstraction and Dynamic Binding in Python
from abc import ABC, abstractmethod

# Data Abstraction Example
class Shape(ABC):
    @abstractmethod
    def draw(self):
        pass

class Circle(Shape):
    def draw(self):
        print("Drawing a Circle")

class Rectangle(Shape):
    def draw(self):
        print("Drawing a Rectangle")

# Dynamic Binding Example
def display(shape):
    shape.draw()  # Dynamic binding happens here

# Usage
c = Circle()
r = Rectangle()

display(c)  # Output: Drawing a Circle
display(r)  # Output: Drawing a Rectangle

"""
Explanation:
- Data Abstraction: Abstract base class (Shape) hides the details and enforces the structure.
- Dynamic Binding: At runtime, Python decides which 'draw' method to call based on the actual object.
"""

