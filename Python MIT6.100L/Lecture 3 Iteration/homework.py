# Practice 1: 
# Declare a variable x that stores an int > 0. Print all ints, one on each
# line, between 1 (inclusive) and x (inclusive) that are divisible by 5.
# For ex. if x = 15, it prints 5, 10, and 15. 
# For ex. if x = 14, it prints 5 and 10.
x=int(input('Enter an integer: '))
for i in range(5,x+1,5):
    print(i)

# Practice 2:
# Declare a variable n that stores an int. Print the sum of all digits 
# in n. Hint: you can get a digit at a time looking at the remainder 
# when you divide n by 10.
# For ex. If x = 1234, print 10
sum=0
x=int(input('Enter an integer: '))
while x>0:
    sum+=x%10
    x=x//10
print(sum)