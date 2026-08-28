# def add(x,y):
#     return x+y
# def mult(x,y):
#     print(x*y)

# add(1,2)
# print(add(2,3))
# mult(3,4)
# print(mult(4,5))

# def count_nums_with_sqrt_close_to(n, epsilon):
#     """ n is an int > 2
#         epsilon is a positive number < 1
#     Returns how many integers have a square root within epsilon of n """
#     # your code here
#     return int((n+epsilon)**2//1)-int((n-epsilon)**2//1)
# print(count_nums_with_sqrt_close_to(10, 0.1))

# def func_a():
#     print('inside func_a')
# def func_b(y):
#     print('inside func_b')
#     return y
# def func_c(f, z):
#     print('inside func_c')
#     return f(z)

# print(func_a())
# print(5 + func_b(2))
# print(func_c(func_b, 3))

# def apply(criteria,n):
#     """ criteria is a function that takes in a number and returns a Boolean
#         n is an int
#     Returns how many ints from 0 to n (inclusive) match the criteria 
#     (i.e. return True when criteria is applied to them)
#     """ 
#     # your code here
#     count=0
#     for i in range(n+1):
#         if criteria(i):
#             count+=1
#     return count


# def is_even(x):
#     return x%2==0

# how_many = apply(is_even,10)
# print(how_many)
