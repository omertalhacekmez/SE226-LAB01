import data_package

numbers = input("Enter a comma-separated list of numbers (e.g., 12, 5, 12, 8 , 21): ")
list = numbers.split(",")

new_list = []
data_package.strip_whitespaces(new_list)

for item in list:
    if item != "":
        new_list.append(float(item))

data_package.remove_duplicates(new_list)

print("Cleaned and unique data: ", new_list)
print("----------------------------")
print("Mean: ", float(data_package.calculate_mean(new_list)))
print("Maximum: ", float(data_package.find_maximum(new_list)))
print("Minimum: ", float(data_package.find_minimum(new_list)))
