def flatten(L):
    """ 
    L: a list 
    Returns a copy of L, which is a flattened version of L 
    """
    # Your code here  
    out=[]
    for i in L:
        if type(i)==list:
            out.extend(flatten(i))
        else:
            out.append(i)
    return out
# Examples:
L = [[1,4,[6],2],[[[3]],2],4,5]
print(flatten(L)) # prints the list [1,4,6,2,3,2,4,5]