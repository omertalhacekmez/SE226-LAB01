def factorial(x):
    if x == 0: return 1
    if x == 1: return 1
    return x * factorial(x - 1)

absoluteValue = lambda x, i: (x**(2*i)) / factorial(2*i)

def exp_x(x, n):
    sum = 0
    for i in range(n):
        sum = sum + ((-1)**i * absoluteValue(x,i))
    return sum

sum = 0

def Gn(n, r):
    """ This function recursively calculates sum of r^n + r^(n-1) + r^(n-2) ... + r^1 + 1, if n = 0 """
    global sum
    if n == 0: sum += 1
    else :
        sum += r ** n
        Gn(n - 1, r)

print(factorial(5))
print(exp_x(2, 3))

