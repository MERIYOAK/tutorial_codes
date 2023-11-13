def find_max(numbers):
    max = numbers[0]
    for item in numbers:
        if max < item:
            max = item
    return max