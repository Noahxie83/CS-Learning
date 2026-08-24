# x = 0.5
# epsilon = 0.01
# num_guesses = 0
# low = 0.0
# high = x
# guess = (high + low)/2
# while abs(guess**2 - x) >= epsilon:
#     # uncomment to see each step's guess, high, and low 
#     print(f'low = {low} high = {high} guess = {guess}')
#     if guess**2 < x:
#         low = guess
#     else:
#         high = guess
#     guess = (high + low)/2.0
#     num_guesses += 1
#     if num_guesses>=10:
#         break
# print(f'num_guesses = {str(num_guesses)}')
# print(f'{str(guess)} is close to square root of {str(x)}')

# x = 0.5
# epsilon = 0.01
# # choose the low endpoint
# low = x
# # choose the high endpopint
# high = 1

# guess = (high + low)/2

# while abs(guess**2 - x) >= epsilon:
#     #print(f'low = {str(low)} high = {str(high)} guess = {str(guess)}')
#     if guess**2 < x:
#         low = guess
#     else:
#         high = guess
#     guess = (high + low)/2.0
# print(f'{str(guess)} is close to square root of {str(x)}')

cube = 27
epsilon = 0.01
low = 0
high = cube
if cube<=1:
    low = cube
    high = 1
guess = (low+high)/2.0
while (abs(guess**3-cube)>epsilon):
    if guess**3>cube:
        high=guess
    else:
        low=guess
    guess = (low+high)/2.0
print(guess)