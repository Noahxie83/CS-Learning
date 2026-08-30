def is_inverse(d1, d2):
    """ d1 and d2 are dicts 
    Assume values of d1 and d2 are unique and immutable
    Returns True if d1's keys are values in d2 and d1's 
    values are keys in d2 """
    for k,v in d1.items():
        if (k not in d2.values()) or (v not in d2.keys()):
            return False
    for k,v in d2.items():
        if (k not in d1.values()) or (v not in d1.keys()):
            return False
    return True
d1 = {1:2, 3:4}
d2 = {2:1, 4:3}
print(is_inverse(d1, d2))  # prints True

d1 = {1:2, 3:4}
d2 = {2:1, 4:3, 5:6}
print(is_inverse(d1, d2))  # prints False
 
d1 = {1:2, 3:4}
d2 = {1:2, 2:1}
print(is_inverse(d1, d2))  # prints False


def add_to_d(d, L):
    """ d is a dict
        L is a list of tuples
    Mutates d with new entries whose key is the first element of a 
    tuple in L and the associated value is the second element of a 
    tuple in L. If the key is already in d, do nothing to its value. 
    If the key cannot be added, raise a ValueError. Returns None. """
    for t in L:
        try:
            if t[0] not in d:
                d[t[0]] = t[1]
        except:
            raise ValueError
    
# d = {}
# L = [(1,2), (3,4)]
# add_to_d(d, L)
# print(d)   # d is mutated to be {1: 2, 3: 4}

# d = {1:1}
# L = [(1,2), (3,4)]
# add_to_d(d, L)
# print(d)   # d is mutated to be {1: 1, 3: 4}

# d = {1:1}
# L = [(3,4), ([1,2,3], 5)]
# add_to_d(d, L)   
# # raises a ValueError because its trying to add a list (mutable obj) as key