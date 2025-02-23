// tail call optimization (like)
// no need to store the result of n
// each function call already has the necessary result
int factorial_helper(int n, int acc) {
  if (n == 0)
    return acc;
  return factorial_helper(n - 1, n * acc); // No pending operations!
}
int factorial(int n) { return factorial_helper(n, 1); }

int main() {
  int result = factorial(5);
  return 0;
}
