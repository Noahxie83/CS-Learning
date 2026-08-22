# Write code that counts how many unique common characters there are between 
# two strings. For example below, the common characters count is 8: 
# text1 = "may the fourth be with you"
# text2 = "revenge of the sixth"
# Hint, start to write your code with a smaller example, then test it on the above text.

# text1 = "abc"
# text2 = "cde"
# your code here
text1=str(input('Enter text 1: '))
text2=str(input('Enter text 2: '))
answer = ""
count = 0
for i in text1:
    if i in text2 and i not in answer:
        count += 1
        answer += i
print(count)