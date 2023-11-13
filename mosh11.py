numbers = [5,2,5,2,2]
for string in numbers:
    print('x' * string)
print()
for x_count in numbers:
    output = ''
    for count in range(x_count):
        output = output + 'x'
    print(output)