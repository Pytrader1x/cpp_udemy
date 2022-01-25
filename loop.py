from timeit import default_timer as timer

def addition(a, b):

    return a + b

def loop(num_iterations):
    
    for i in range(num_iterations):

        total = addition(i, 3)
        # print(total)

start = timer()
loop(10000)
print("{:.6f}".format(timer() - start))