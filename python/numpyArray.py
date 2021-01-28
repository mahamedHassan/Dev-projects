###create Numpy array
### Create a 3x3 array of all zeros
import numpy as np
##print("*****************Create 1 Array****************")
### Create a rank 1 array
##a = np.array([0, 1, 2])
##print(a)
##
##print("**********Print dimeension of array************")
##
### this will print the dimension of the array
##print(a.shape)
##print(a[0])
##print(a[1])
##print(a[2])
##
##print("***************Change element******************")
### Change an element of the array
##a[0] = 5
##print(a)
##
##print("****************NumPy datatype****************")
##
### let numpyy choose the datatype
##x = np.array([0, 1])
##y = np.array([2.0, 3.0])
##
### force a particular datatype
##z = np.array([5, 6], dtype=np.int64)
##
##print x.dtype, y.dtype, z.dtype

print("****************Field access****************")

x = np.zeros((3,3), dtype=[('a', np.int32),('b', np.float64, (3,3))])
print "x['a'].shape: ", x['a'].shape
print "x['a'].dtype: ", x['a'].dtype
print "x['b'].shape: ", x['b'].shape
print "x['b'].dtype: ", x['b'].dtype

print("****************Basic slicing****************")
x = np.array([5, 6, 7, 8, 9])
print("Slicing:", x[1:7:2])

print("****************Negative K ****************")

# Negative K makes stepping go toward smaller indices.
print x[-2:5]
print x[-1:1:-1]
print x[4:]


