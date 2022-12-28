
lines_array = []

with open('input.txt', 'r') as f:
    [lines_array.append(line.strinp()) for line in f.readlines()]

print(lines_array)

