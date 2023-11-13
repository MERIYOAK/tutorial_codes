numbers = [3,5,6,7,8]
max = numbers[0]
for item in numbers:
    if max < item:
        max = item
print(max)       