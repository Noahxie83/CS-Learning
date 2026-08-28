# seq=(2,'a',4,(1,2))
# print(seq[:-1])

# # Write a function that meets these specifications:
# def char_counts(s):
#     """ s is a string of lowercase chars 
#     Returns a tuple where the first value is the 
#     number of vowels in s and the second value 
#     is the number of consonants in s 
#     """
#     # your code here
#     vowels_number=0
#     for char in s:
#         if char in 'aeiou':
#             vowels_number+=1
#     return (vowels_number,len(s)-vowels_number)
            

# print(char_counts("abcd"))  # prints (1,3)
# print(char_counts("zcght"))  # prints (0,5)

# def sum_and_prod(L):
#     """ L is a list of numbers 
#     Return a tuple where the first value is the 
#     sum of all elements in L and the second value 
#     is the product of all elements in L 
#     """
#     # your code here
#     sum=0
#     product=1
#     for i in L:
#         sum+=i
#         product*=i
#     return(sum,product)
 

# print(sum_and_prod([4,6,2,5]))   # prints (17, 240)