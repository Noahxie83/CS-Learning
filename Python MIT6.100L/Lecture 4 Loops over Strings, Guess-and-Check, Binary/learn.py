# s = "demo loops - fruit loops"
# for char in s:
#     if char in 'iu':
#         print("There is an i or u")

# an_letters = "aefhilmnorsxAEFHILMNORSX"
# word = input("I will cheer for you! Enter a word: ")
# times = int(input("Enthusiasm level (1-10): "))

# for w in word:
#     if w in an_letters:
#         #print(f'Give me an {c}: {c}') # with f-strings
#         print("Give me an " + w + ": " + w)
#     else:
#         #print(f'Give me a {c}: {c}') # with f-strings
#         print("Give me a " + w + ": " + w)
# print("What does that spell?")
# for i in range(times):
#     print(word, "!!!")

# Assume you are given a string of lowercase letters in variable s. 
# Count how many unique letters there are in s. For example, if 
# s = "abca" Then your code prints 3. 

# your code here
# s = 'abca'
# a=''
# for i in s:
#     if i not in a:
#         a+=i
# print(len(a))

# finding cube root with error message
# cube = int(input("Enter an integer: "))
# for guess in range(abs(cube)+1):
#     if guess**3 >= abs(cube):
#         break
# if guess**3 != abs(cube):
#     print(f'{cube} is not a perfect cube')
# else:
#     if cube < 0:
#         guess = -guess
#     print(f'Cube root of {cube} is {guess}')

# this code is very slow for large numbers!
# for alyssa in range(11):
#     for ben in range(11):
#         for cindy in range(11):
#             total = (alyssa + ben + cindy == 10)
#             two_less = (ben == alyssa-2)
#             twice = (cindy == 2*alyssa)
#             if total and two_less and twice:
#                 print(f"Alyssa sold {alyssa} tickets")
#                 print(f"Ben sold {ben} tickets")
#                 print(f"Cindy sold {cindy} tickets")

# this code is better -- only one loop!
for alyssa in range(1001):
    ben = max(alyssa-20,0)
    cindy = alyssa*2
    if ben + cindy + alyssa == 1000:
        print(f'Alyssa sold {alyssa} tickets')
        print(f'Ben sold {ben} tickets')
        print(f'Cindy sold {cindy} tickets')