# Assume you are given an integer 0<=N<=1000.
# Write a piece of Python code that uses bisection search to guess N. 
# The code prints two lines: count: with how many guesses it took to find N, and answer: with the value of N.
# Hints: If the halfway value is exactly in between two integers, choose the smaller one.
N=int(input('give me an integer: '))
high=1000
low=0
guess=(high+low)//2
count=1
while guess != N:
    if guess < N:
        low = guess
    elif guess > N:
        high = guess
    guess = (high+low)//2
    count += 1
print("count:",count)
print("answer:",guess)