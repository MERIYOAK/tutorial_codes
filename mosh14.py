numbers = [3,5,2,6,9,2]
for num in numbers:
    x = int(numbers.count(num))
    if x > 1:
        numbers.remove(num)
print(numbers)
print()
uniques = []
for number in numbers:
    if number not in uniques:
        uniques.append(number)
print(uniques)
