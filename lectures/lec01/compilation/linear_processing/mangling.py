class MyClass:
    
    def _kindof_private_method(self):
        print("fake private method")

    def __real_private_method(self):
        print("real private method")

obj = MyClass()
obj._kindof_private_method()
obj.__real_private_method()
