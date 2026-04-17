import math
def circle_area(radius):
    if radius <= 0:
        print("Radius can't be 0 or lesser than 0...")
        return
    return (math.pi) * (radius**2)

def circle_parameter(radius):
    if radius <= 0:
        print("Radius can't be 0 or lesser than 0...")
        return
    return 2 * (math.pi) * radius

def rectangle_area(width, height):
    if width <= 0 or height <= 0:
        print("Width or height can't be 0 or lesser than 0...")
        return
    return width * height

def rectangle_parameter(width, height):
    if width <= 0 or height <= 0:
        print("Width or height can't be 0 or lesser than 0...")
        return
    return 2 * (width + height)

def triangle_area(base, width):
    if width <= 0 or base <= 0:
        print("Width or base can't be 0 or lesser than 0...")
        return
    return (base * width) / 2