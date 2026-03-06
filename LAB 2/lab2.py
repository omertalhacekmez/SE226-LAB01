'''
TASK 1
'''
while True:
    num = int(input("Please enter a positive integer greater than 9: "))
    if num > 9:
        break
    print("Number must be greater than 9!")

steps = 0
current = num
print(f"{current}", end="")

while current > 9:
    total = 0
    temp = current
    while temp > 0:
        total += temp % 10
        temp //= 10
    print(f" → {total}", end="")
    current = total
    steps += 1

print(f"\nFinal value: {current}")
print(f"Total steps: {steps}")



'''
TASK 2
'''





number = 0
fizzCounter = 0
buzzCounter = 0
fizzBuzzCounter = 0
while True:
    number = int(input("Please enter a number between 10 and 100: "))
    if number > 100 or number < 10:
        print("Invalid input.", end=" ")
    else: break;

for i in range(1, number + 1):
    if i % 3 == 0 and i % 5 == 0:
        print("FizzBuzz")
        fizzBuzzCounter = fizzBuzzCounter + 1
    elif i % 3 == 0:
        print("Fizz")
        fizzCounter = fizzCounter + 1
    elif i % 5 == 0:
        print("Buzz")
        buzzCounter = buzzCounter + 1
    elif i % 7 == 0:
        print(f"({i} is skipped)")
    else: print(i)

print("---Summary---")
print(f"Fizz count: {fizzCounter}")
print(f"Buzz count: {buzzCounter}")
print(f"FizzBuzz count: {fizzBuzzCounter}")


'''
TASK 3
'''

while True:
    try:
        n = int(input("Please enter a number between 3 and 9: "))
        if 3 <= n <= 9:
            break
        else:
            print("Invalid input! Number must be between 3 and 9.")
    except ValueError:
        print("Invalid input! Please enter an integer.")

for i in range(1, 2*n):
    k = n - abs(n - i)
    for j in range(1, k+1):
        print(j, end="")
    print()



