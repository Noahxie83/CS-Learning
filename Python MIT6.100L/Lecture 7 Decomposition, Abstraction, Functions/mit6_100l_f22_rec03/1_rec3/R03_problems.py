# Problem 1 - Bisection Search Practise
# Write a program using bisection search to find the forth root of a number inputted by the 
# user. Print the forth root calculated with max error of 0.01. 

x = float(input("Using bisection search calculate the forth root of: " ))
epsilon = 0.01
low = 0 # FILL IN
high = x# FILL IN
if (x<1):
    low = x
    high = 1
ans = (low+high)/2.0
while abs(ans**4-x)>epsilon:
    if ans**4>x:
        high=ans
    else:
        low=ans
    ans = (low+high)/2.0
print(ans)

# Problem 2 - Functions 
# Write a Python function to check whether a number falls in a given range. 
def is_range(x,low,high):
    return x>=low and x<=high

# Problem 3 - Functions 
# Write a Python function to check whether a number is perfect or not.
# (In number theory, a perfect number is a positive integer that is equal 
# to the sum of its proper positive divisors, excluding the number itself).
def perfect_number(n):
    my_sum = 0
    for x in range(1, n//2+1):
        if n % x == 0:
            my_sum += x
    return my_sum == n

# Problem 4 - Approximation Algorithm (see Lecture 5 slides for similar problem)
# Write an approximation algorithm to calculate the forth root of some 
# number inputted by the user. 
# Print the result and the number of iterations required to reach that result. 
# The program should not accept negative numbers. Initial parameters epsilon 
# (i.e. accuracy), initial guess, increment and num_guesses are defined below.

# example initial parameters
epsilon = 0.01
ans = 0.0
increment = 0.001
num_guesses = 0
number = float(input("Calculate the forth root of: "))
if number < 0:
    print("Don't accept negative numbers")
else:
    while abs(number-(ans**4)) >= epsilon and ans**4 <= number:
        ans += increment
        num_guesses += 1
    
    if abs(number-(ans**4)) < epsilon:
        print("ans", ans)
        print("number guesses", num_guesses)
    else:
        print("number guesses", num_guesses)
        print("Failed to calculate approximate square root within " + str(epsilon))



