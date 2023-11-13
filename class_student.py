class student:
    def __init__(self, name, major, gpa):  #this method called constructor.
        self.name = name
        self.major = major
        self.gpa = gpa
    def on_honor_roll(self):
        if self.gpa >= 3.5:
            return True
        else:
            return False