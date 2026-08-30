def pairwise_div(Lnum, Ldenom):
    """ Lnum and Ldenom are non-empty lists of equal lengths
        containing numbers
    Returns a new list whose elements are the pairwise 
    division of an element in Lnum by an element in Ldenom. 
    Raise a ValueError if L2 contains 0 or if the code can't 
    perform the division for some reason. """
    # your code here
    assert len(Lnum) == len(Ldenom) and len(Lnum) != 0
    L = []
    for i in range(len(Lnum)):
        try:
            L.append(Lnum[i]/Ldenom[i])
        except:
            raise ValueError
    return L
