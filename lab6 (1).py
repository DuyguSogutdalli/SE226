# Q1
def factorial(x):

    if x == 0 or x == 1:
        return 1
    else:
        return x * factorial(x - 1)


print(factorial(5))

# Q2
import math

def sine_x(x, n):

    x_radians = math.radians(x)

    sine_result = 0
    for i in range(n):
        term = lambda i: ((-1) ** i) * (x_radians ** (2 * i + 1)) / factorial(2 * i + 1)
        sine_result += term(i)

    return sine_result


print(sine_x(30, 10))

# Q3
result = 0

def recursive_sum(n):

    global result
    if n <= 0:
        return
    else:
        result += n
        recursive_sum(n - 1)
