class Circle():
    def __init__(self, radius):
        """ Initializes self with radius """
        # your code here
        self.r=radius
    def get_radius(self):
        """ Returns the radius of self """
        # your code here
        return self.r
    def __add__(self, c):
        """ c is a Circle object 
        Returns a new Circle object whose radius is 
        the sum of self and c's radius """
        # your code here
        return Circle(self.r+c.r)
    def __str__(self):
        """ A Circle's string representation is the radius """
        # your code here
        return str(self.r)