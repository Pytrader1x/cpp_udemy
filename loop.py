from timeit import default_timer as timer
from numba import jit

@jit(nopython=True) # Set "nopython" mode for best performance, equivalent to @njit
def addition(a, b):

    return a + b

@jit(nopython=True) # Set "nopython" mode for best performance, equivalent to @njit
def loop(num_iterations):
    
    for i in range(num_iterations):

        total = addition(i, 3)
        # print(total)

start = timer()
loop(10000)
print("{:.6f}".format(timer() - start))
print('####')
########
start = timer()
loop(10000)
print("{:.6f}".format(timer() - start))
print('####')
#############
start = timer()
loop(10000)
print("{:.6f}".format(timer() - start))