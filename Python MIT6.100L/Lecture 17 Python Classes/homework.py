# Question 1:
# Write a class definition for a vehicle. A vehicle is defined by attributes:
# Number of wheels
# Number of occupants
# Color 
# Decide the type of each data attribute and document this
class Vehicle(object):
    def __init__(self,w,o,c):
        self.wheels=w
        self.occupants=o
        self.color=c
# Question 2:
# Create 2 vehicle instances using the class we wrote previously. 
# One red vehicle with 2 wheels, and 1 occupant
# One green vehicle with 18 wheels, and 3 occupants
# Print the first one's number of occupants
# Print the second one's color
car1=Vehicle(2,1,'red')
car2=Vehicle(18,3,'green')
print(car1.occupants)
print(car2.color)
# Question 3:
# Add on to the code from above for class Vehicle.
# Create another method for the vehicle class named add_n_occupants, 
# which takes in an int n. When called, self's number of occupants 
# increases by n. It returns the total occupants after the increase. 

class Vehicle(object):
    def __init__(self, w, o, c):
        self.wheels = w
        self.occ = o
        self.color= c
    # add method add_n_occupants here
    def add_n_occupants(self,n):
        self.occ+=n
        return self.occ
v1 = Vehicle(4,2,'blue')
print(v1.occ)   # prints 2
print(v1.add_n_occupants(3))   # prints 5
print(v1.occ)

# Question 4:
# Add another data attribute to the Vehicle class, called max_occupancy,
# which is always 5. This attribute is not passed in as a parameter, but 
# is defined in the init.
# Modify the add_n_occupants methods such that if adding the occupants 
# exceeds the max_occupancy allowed for that vehicle, 
#   * you do not perform the increase, and
#   * you raise a ValueError with an apprpriate message
class Vehicle(object):
    def __init__(self, w, o, c):
        self.wheels = w
        self.occ = o
        self.color= c
        self.max_occ=5
    # add method add_n_occupants here
    def add_n_occupants(self,n):
        self.occ+=n
        if self.occ<=self.max_occ:
            return self.occ
        else:
            raise ValueError("exceeded max occupancy")
v1 = Vehicle(4,2,'blue')
print(v1.occ)
print(v1.add_n_occupants(2))   # should print 4
# print(v1.add_n_occupants(2))   # should raise ValueError

#Question 5:
# Modify the Vehicle class __init__ such that if a vehicle is created
# without specifying a color then the color is set to "black".
# Hint: remember default parameters?
class Vehicle(object):
    def __init__(self, w, o, c='black'):
        self.wheels = w
        self.occ = o
        self.color= c
        self.max_occ=5
    # add method add_n_occupants here
    def add_n_occupants(self,n):
        self.occ+=n
        if self.occ<=self.max_occ:
            return self.occ
        else:
            raise ValueError("exceeded max occupancy")
v1 = Vehicle(4,3,'red')
print(v1.color)     # prints 'red'
v2 = Vehicle(2,1)
print(v2.color)     # prints 'black'