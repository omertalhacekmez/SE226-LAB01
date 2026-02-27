second = int(input("Enter second: "))
secondBackup = second

hour = second // 3600
second = second % 3600
minute = second // 60
second = second % 60

print(f"{secondBackup} seconds is {hour} hours, {minute} minutes, and {second} seconds.")