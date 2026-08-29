# Step through the code below without running it
# Write down what values each variable has
# Draw the memory diagram to help you keep track of aliases and clones

cool = ['blue', 'green']
warm = ['red', 'yellow', 'orange']
print(cool) #['blue', 'green']
print(warm) #['red', 'yellow', 'orange']

colors1 = [cool]
print(colors1) #[['blue', 'green']]
colors1.append(warm)
print('colors1 = ', colors1) #[['blue', 'green'], ['red', 'yellow', 'orange']]

colors2 = [['blue', 'green'],
          ['red', 'yellow', 'orange']]
print('colors2 =', colors2) #[['blue', 'green'], ['red', 'yellow', 'orange']]

warm.remove('red') #['yellow', 'orange']
print('colors1 = ', colors1)#[['blue', 'green'], ['yellow', 'orange']]
print('colors2 =', colors2)#[['blue', 'green'], ['red', 'yellow', 'orange']]

for e in colors1:
    print('e =', e)
['blue', 'green']
['yellow', 'orange']
for e in colors1:
    if type(e) == list:
        for e1 in e:
            print(e1)
    else:
        print(e)


flat = cool + warm
print('flat =', flat)
['blue', 'green', 'yellow', 'orange']

print(flat.sort())
None
print('flat =', flat)



new_flat = sorted(flat, reverse = True)
print('flat =', flat)
print('new_flat =', new_flat)

cool[1] = 'black'
print(cool)
print(colors1)