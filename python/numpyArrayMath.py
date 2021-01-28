# Basic mathmathical function are avialable as operators and
# also as function in NumPy. It operates element-wise on an array
import numpy as np

x = np.array([[1,2],[3,4],[5,6]])
y = np.array([[7,8],[9,10],[11,12]])

# Elementwise sum; both produce the array
print("************Addition *****************")
print(x + y)
print(np.add(x, y))
print("************substract*****************")
# Element-wise difference; both produce the array
print(x - y)
print(np.subtract(x, y))

print("************Product*****************")
print(x * y)
print(np.multiply(x, y))

print("************Division*****************")
print(x / y)
print(np.divide(x, y))

print("************Module % *****************")
print(x % y)
print(np.fmod(x, y))


print("************Square root*****************")
print(np.sqrt(x))
      
