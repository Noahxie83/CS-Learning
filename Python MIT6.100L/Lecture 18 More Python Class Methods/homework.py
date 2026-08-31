#Question 1.
# Add a method to the Circle class that allows you to print a Circle object
# (you decide how to best represent it!)
class Circle(object):
    def __init__(self, center, radius):
        self.center = center
        self.radius = radius
    def __str__(self):
        return "circle: "+str(self.center)+", "+str(self.radius)
#Question 2.
# Implement a method in Fraction class such that the operator ** works
#print(a**b) # works after you define it on two Fraction objects
class Fraction(object):
    def __init__(self, num, denom):
        self.num = num
        self.denom = denom
    def __float__(self):
        return self.num/self.denom
    def __str__(self):
        return str(self.num) + "/" + str(self.denom)
    def __pow__(self,other):
        return float(self)**float(other)
f1 = Fraction(4,1)
f2 = Fraction(1,2)
print(f1**f2)    # prints 2.0