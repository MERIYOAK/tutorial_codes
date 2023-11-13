for item in 'python':
    print(item)
for item in ['mosh', 'jhon', 'sarah']:
    print(item)
for item in range(10):
    print(item)
for item in range(5, 10, 2):
    print(item)

prices = [10, 20, 30]
total = 0
for item in prices:
    total = total + item
print(f"total:  {total}")

for x in range(3):
    for y in range(2):
        print(f'({x},{y})')