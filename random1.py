import random

for i in range(3):
    print(random.random())


for i in range(3):
    print(random.randint(1, 6))



members =['jhon', 'mary', 'bob', 'mosh']
leader = random.choice(members)
print(leader)