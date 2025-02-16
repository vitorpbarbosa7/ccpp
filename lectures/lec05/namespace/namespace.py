class MathLib:
    @staticmethod
    def add(a, b):
        return a + b

    class Advanced:
        @staticmethod
        def power(base, exp):
            result = 1.0
            for _ in range(exp):
                result *= base
            return result

print("Add:", MathLib.add(5, 3))
print("Power:", MathLib.Advanced.power(2.0, 4))

