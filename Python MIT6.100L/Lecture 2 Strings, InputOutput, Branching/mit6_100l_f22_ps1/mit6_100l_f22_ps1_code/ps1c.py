## 6.100A PSet 1: Part C
## Name:
## Time Spent:
## Collaborators:

##############################################
## Get user input for initial_deposit below ##
##############################################
initial_deposit=float(input("Enter the initial deposit: "))
#########################################################################
## Initialize other variables you need (if any) for your program below ##
#########################################################################
down_payment=200000
low=0
high=1
steps=0
##################################################################################################
## Determine the lowest rate of return needed to get the down payment for your dream home below ##
##################################################################################################
if (initial_deposit>=200000-100):
    r=0.0
elif abs(initial_deposit*(1+high/12)**36-200000<=100):
    r=None
else:
    steps=1
    r=(low+high)/2
    while abs(initial_deposit*(1+r/12)**36-200000)>100:
        if initial_deposit*(1+r/12)**36>200000:
            high=r
        else:
            low=r
        r=(low+high)/2
        steps+=1
print(f"Best savings rate:{r}")
print(f"Steps in bisection search:{steps}")