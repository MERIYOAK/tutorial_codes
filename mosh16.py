class person:
    def __init__(self,name):
        self.name = name

    def talk(self):
        print(f"hi, i am {self.name}")


jhon = person('jhon smith')
jhon.talk()

meron = person('meron michael')
meron.talk()