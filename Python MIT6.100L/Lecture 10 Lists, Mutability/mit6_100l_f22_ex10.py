def all_true(n, Lf):
    """ n is an int
        Lf is a list of functions that take in an int and return a Boolean
    Returns True if each and every function in Lf returns True when called 
    with n as a parameter. Otherwise returns False. 
    """
    # Your code here
    flag = True
    for f in Lf:
        if not f(n):
            flag = False
            break
    return flag
# Examples:    
f1=lambda x:x%2==0
f2=lambda y:y%2==1
L=[f1,f2]
n=3
print(all_true(n,L))
