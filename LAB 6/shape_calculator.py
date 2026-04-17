import geometry_utils

print("Available shapes: circle, rectangle, triangle")
print("Available calculations: _area, _perimeter(e.g. circle_area)")

operationDict = {"circle_area" : geometry_utils.circle_area, "rectangle_area" : geometry_utils.rectangle_area, "triangle_area" : geometry_utils.triangle_area,
                 "circle_perimeter" : geometry_utils.circle_parameter, "rectangle_perimeter" : geometry_utils.rectangle_parameter}

operation = input("Enter the operation you want to perform: ")

if operation == "circle_area":
    radius = float(input("Enter radius: "))
    print(operationDict.get(operation)(radius))

elif operation == "rectangle_area":
    width = float(input("Enter width"))
    height = float(input("Enter height"))
    print(operationDict.get(operation)(width, height))

elif operation == "triangle_area":
    base = float(input("Enter base"))
    width = float(input("Enter width"))
    print(operationDict.get(operation)(base, width))

elif operation == "circle_perimeter":
    radius = float(input("Enter radius: "))
    print(operationDict.get(operation)(radius))

elif operation == "rectangle_perimeter":
    width = float(input("Enter width"))
    height = float(input("Enter height"))
    print(operationDict.get(operation)(width, height))

else:
    print("Invalid input....")