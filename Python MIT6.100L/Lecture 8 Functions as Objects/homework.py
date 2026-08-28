def is_palindrome(s):
    """ s is a string
    Returns True if s is a palindrome and False otherwise. 
    A palindrome is a string that contains the same 
    sequence of characters forward and backward """
    # your code here
    for i in range(len(s)):
            if s[i] != s[len(s)-i-1]:
                 return False
    return True

# For example:
# print(is_palindrome("222"))   # prints True
# print(is_palindrome("2222"))   # prints True
# print(is_palindrome("abc"))   # prints False


def f_yields_palindrome(n, f):
    """ n is a positive int
        f is a function that takes in an int and returns an int
    Returns True if applying f on n returns a number that is a
    palindrome and False otherwise.  """
    # your code here
    m=f(n)
    return is_palindrome(str(m))

# For example:
def f(x):
    return x+1

def g(x):
    return x*2

def h(x):
    return x//2

print(f_yields_palindrome(2, f))   # prints True
print(f_yields_palindrome(76, f))   # prints True
print(f_yields_palindrome(11, g))   # prints True
print(f_yields_palindrome(123, h))   # prints False