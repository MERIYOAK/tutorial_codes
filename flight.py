class Flight():
    def __init__(self, capacity):
        self.capacity = capacity
        self.passengers = []

    def add_passengers(self, name):
        if not self.open_seats():
            return False
        self.passengers.append(name)
        return True

    def open_seats(self):
        return self.capacity - len(self.passengers)

flight = Flight(3)

people = ["harry", "meron", "tom", "brady"]
for person in people:
    if flight.add_passengers(person):
        print(f"added {person} to flight successfully.")
    else:
        print(f"no available seats for {person}")
