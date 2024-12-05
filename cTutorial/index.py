print("Hello World")

for i in range(5):
  print(i)


class Person:
  def __init__(self, fname, lname):
    self.fname = fname
    self.lname = lname
  
  def get_full_name(self):
    return self.name + " " + self.lname

  