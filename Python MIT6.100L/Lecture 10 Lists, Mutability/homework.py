## Question 1
# L1 = ['re']
# L2 = ['mi']
# L3 = ['do']
# L4 = L1 + L2 
# L3.extend(L4)
# L3.sort()
# del(L3[0])
# L3.append(['fa', 'la'])
# print(L3)
# What's the value of L3 here?
['mi', 're', ['fa', 'la']]

## Question 2
# L1 = ['bacon', 'eggs']
# L2 = ['toast', 'jam']
# brunch = L1
# L1.append('juice')
# brunch.extend(L2)
# # What's the value of brunch here?
['bacon', 'eggs', 'juice', 'toast', 'jam']

## Question 3. 
def apply_to_each(L, f):
    """ L is a list of numbers 
        f is a list that takes in a number and returns a number
    Mutate L such that you apply function f to every element in L """
    # your code here
    for i in range(len(L)):
        L[i]=f(L[i])
    
test = [1,-2,3]
apply_to_each(test, lambda x: x**2)
print(test)   # prints [1,4,9]

test = [-7, 8, 5, -8, -3]
apply_to_each(test, abs)
print(test)   # prints [7, 8, 5, 8, 3]