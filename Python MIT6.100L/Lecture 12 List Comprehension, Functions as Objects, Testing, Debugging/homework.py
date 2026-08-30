## Write a list comprehension expression that uses a list named L.
# It makes a new list whose elements are the middle 
# character of strings whose length is 3. 

# If L = ['abc', 'm', 'p', 'xyz', '123', 57]
# It makes ['b', 'y', '2']
L = ['abc', 'm', 'p', 'xyz', '123', 57]
print([e[1] for e in L if type(e)==str and len(e)==3])