# Q1. Rewrite this to calculate b+b+b... a times
def mult(a, b):
    # your code here
    if a==0:
        return 0
    else:
        return b+mult(a-1,b)
        
    
print(mult(5,4))

# Q2. If we evaluate mult_recur(3,4), how many times is the 
# procedure mult_recur called (including initial call)?
# Hint: add a print inside the function!

def mult_recur(a,b):
    print('inside')  # add this!
    if b == 0:
        return 0
    else:
        return a + mult_recur(a,b-1)

print(mult_recur(3,4))


# Q3. Calculate a+b recursively. Assume the only math operation
# you are allowed to do are adding and subtracting 1
def add(a, b):
    """ Uses recursion to calculate a+b as adding
    a to 1, b times. """
    # your code here
    if b==0:
        return a
    else:
        return add(a,b-1)+1
    
print(add(3,4))   # prints 7


# Q4. Calculate a+b recursively by 1's. Assume the only math operation
# you are allowed to do are adding and subtracting 1
def add_by_ones(a, b):
    """ Uses recursion to calculate a+b as adding
    1, a times then adding 1, b times. """
    # your code here
    if a>0:
        return add_by_ones(a-1,b)+1
    if b>0:
        return add_by_ones(a,b-1)+1
    return 0
print(add_by_ones(3,4))   # prints 7