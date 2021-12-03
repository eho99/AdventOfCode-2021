import os

cwd = os.getcwd()  # Get the current working directory (cwd)
files = os.listdir(cwd)  # Get all the files in that directory
print("Files in %r: %s" % (cwd, files))


horizontal = 0
vertical = 0
aim = 0
depth = 0

with open("Day2/problem_input.txt") as file:
    for line in file:
        direction, quantity = line.split(" ")
        quantity = int(quantity)
        if direction == "forward":
            horizontal += quantity
            depth += quantity * aim
        elif direction == "up":
            aim -= quantity
        elif direction == "down":
            aim += quantity

product = depth * horizontal
print(product) # 1580000 for part 1
# 1251263225 for part 2
