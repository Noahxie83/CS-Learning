#############################################################################
# Problem 1:
# For each of the following expressions, what is the order of growth class 
# that best describes it?
# a) 8n   n 
# b) 3n**2 + 7n**3 + 4    n**3
# c) 5log(n) + 5n     n
# d) 3**n + n**2    3**n
# e) 20n + nlog(n)    nlog(n)
# f) 5 + 60           1
# g) log(n) + 4n        n




#############################################################################
# Problem 2:
# Rank the following functions by runtime complexity. Note some may have 
# the same runtime complexity.

# f(n) = n**2 + 4n + 2
# g(n) = log(n**2)
# h(n) = log2(n)  (i.e. read as log base 2 n)
# j(n) = 3n**3 + 2
# l(n) = n!
# k(n) = 2**n

g(n)=h(n)<f(n)<j(n)<k(n)<l(n)


#############################################################################
# Problem 3:
# What is the time complexity for the following programs? 

def program1():
    my_list = [1,2,3,4,5,6,7,8]
    my_list_even= []
    for i in range(len(my_list)):
        if i % 2 == 0:
            my_list_even.append(i)
    return my_list
n

def program2():
    my_list = [1,2,3,4,5,7]
    my_second_list = [1,2,3,4,5,7]
    
    output_list1 = [i for i in my_list]

    output_list2 = []
    for i in my_list:
        for j in my_second_list:
            output_list2 += [i,j]
    
    return (output_list1, output_list2)
n^2

def program3(n):
    epsilon = 0.01
    low = 0
    high = n
    ans = (high + low) / 2 
    
    while abs(ans**4 - n) >= epsilon:
        if ans**4 > n:
            high = ans 
        else: 
            low = ans
        ans = (high + low) / 2
    return ans

logn


#############################################################################
# Problem 4:
# Describe two ways to construct an algorithm to find the maximum number is a list. 
# One algorithm should have time complexity O(n), the other O(n**2). (Note the 
# O(n**2) algorithm is highly inefficient and we'd never actually use it 
# in practice).

1:loop through the list, comparing each element to the maximum element seen so far
2:compare each number to every other number on the list
