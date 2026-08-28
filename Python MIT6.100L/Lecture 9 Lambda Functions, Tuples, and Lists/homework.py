# # Trace this code:
# # Figure out what it returns and then run it to check yourself.
# def always_sunny(t1, t2):
#     """ t1, t2 are non-empty """
#     sun = ("sunny", "sun")
#     first = t1[0] + t2[0]
#     return (sun[0], first)

# always_sunny(('cloudy' ), ('cold',))  # returns what?
# ('sunny','ccold')

# def max_of_both(n, f1, f2):
#     """ n is an int
#         f1 and f2 are functions that take in an int and return a float
#     Applies f1 and f2 on all numbers between 0 and n (inclusive). 
#     Returns the maximum value of all these results.
#     """
#     # your code here
#     max=f1(0)
#     for i in range(0,n+1):
#         if f1(i)>max:
#             max=f1(i)
#         if f2(i)>max:
#             max=f2(i)
#     return max
# print(max_of_both(2, lambda x:x-1, lambda x:x+1))  # prints 3
# print(max_of_both(10, lambda x:x*2, lambda x:x/2))  # prints 20


def sublist_sum(L):
    """ L is a list whose elements are lists with int elements
    Returns the sum of all int elements. """
    # your code here
    tot=0
    for i in L:
        tot+=sum(i)
    return tot
print(sublist_sum([[1,2], [4,5,6]])) # prints 18