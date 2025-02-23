#include <iostream>

struct vec2 {
  float x, y;

  // Constructor
  vec2(float x, float y) : x(x), y(y) {}

  // Operator overloading as a member function
  vec2 operator+(const vec2 &o) const { return vec2(x + o.x, y + o.y); }

  vec2 operator-(const vec2 &o) const { return vec2(x - o.x, y - o.y); }

  vec2 operator*(const vec2 &o) const { return vec2(x * o.x, y * o.y); }

  vec2 operator/(const vec2 &o) const { return vec2(x / o.x, y / o.y); }

  // Overloading comparison operators
  bool operator==(const vec2 &o) const { return (x == o.x && y == o.y); }

  bool operator!=(const vec2 &o) const { return !(*this == o); }

  bool operator<(const vec2 &o) const { return (x < o.x) && (y < o.y); }

  bool operator>(const vec2 &o) const { return (x > o.x) && (y > o.y); }

  // Overloading assignment operators
  vec2 &operator+=(const vec2 &o) {
    x += o.x;
    y += o.y;
    return *this;
  }

  vec2 &operator-=(const vec2 &o) {
    x -= o.x;
    y -= o.y;
    return *this;
  }

  // Unary operators
  vec2 operator-() const { return vec2(-x, -y); }

  vec2 operator+() const {
    return *this; // Identity
  }

  // Friend function to overload << for output
  friend std::ostream &operator<<(std::ostream &out, const vec2 &v) {
    out << "(" << v.x << ", " << v.y << ")";
    return out;
  }
};

// Non-member function operator overloading
vec2 operator*(float scalar, const vec2 &v) {
  return vec2(scalar * v.x, scalar * v.y);
}

int main() {
  // sum of two vectors
  vec2 a(1, 2);
  vec2 b(3, 4);

  vec2 c = a + b; // Calls operator+
  vec2 d = a - b; // Calls operator-
  vec2 e = a * b; // Calls operator*
  vec2 f = a / b; // Calls operator/

  std::cout << "a + b = " << c << std::endl;
  std::cout << "a - b = " << d << std::endl;
  std::cout << "a * b = " << e << std::endl;
  std::cout << "a / b = " << f << std::endl;

  std::cout << "a == b? " << (a == b) << std::endl;
  std::cout << "a != b? " << (a != b) << std::endl;
  std::cout << "a < b? " << (a < b) << std::endl;
  std::cout << "a > b? " << (a > b) << std::endl;

  a += b; // Calls operator+=
  std::cout << "After a += b: " << a << std::endl;

  vec2 neg = -a; // Calls unary operator-
  std::cout << "Negative a: " << neg << std::endl;

  return 0;
}
