# L1=[1,3]
# L1=L1.append(6)
# print(L1)

# def square_list(L):
#     for i,y in enumerate(L): 
#         L[i]=y**2
# print(square_list([2,3,4]))  # prints None

# Lin = [2,3,4]
# print("before fcn call:",Lin)
# square_list(Lin)
# print("after fcn call:",Lin)   # mutated L

L=[1,2,3,4]
# for i in range(len(L)):
#     L.append(i)
#     print(L) 
i=0
for e in L:
    L.append(i)
    i+=1
print(L)