people = [
    {"name": "harry", "house": "gryffindor"},
    {"name": "meron", "house": "ravenclaw"},
    {"name": "honey", "house": "slytherin"}
]


# def f(person):
#    return person["house"]
# people.sort(key=f)

people.sort(key=lambda person: person["name"])

print(people)
