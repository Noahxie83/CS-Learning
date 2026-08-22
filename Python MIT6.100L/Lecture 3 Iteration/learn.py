# n = int(input('Please enter a non-negative integer: '))
# while n > 0:
#     print('x')
#     n = n-1  # the same as n -= 1

# cnt=0
# where = input("You are in the Lost Forest. Go left or right? ")
# while where == "right":
#     where = input("You are in the Lost Forest. Go left or right? ")
#     cnt+=1
#     if cnt>=2:
#         print(':)')
# print("You got out of the Lost Forest! \o/")

# for n in range(5):
#     print(n)
# for n in range(1,5,2):
#     print(n)

# Fix this code to use variables start and end in the 
# range, to get the total sum between and including those values. 

mysum = 0
start = 3
end = 5
for i in range(start, end+1):
    mysum += i
print(mysum)
