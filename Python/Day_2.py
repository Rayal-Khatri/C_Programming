#-----------DAY 2 -----------#

#Operators
# + - / * are arthematic aparators  % gives remainder and ** is power
# == != >= <= are coomparasion opeator
# AND OR NOT are logical operator
# << >> are Shifting OPerator

# Taking a input from user
a=input("Enter a string")
b=int(input('Enter a number'))
print("The string and the number entered is ", a,b)

#  """ are used for commenting

# Print
print(a,b,'JaVa',sep='-')
int1=13
print(f'The sum if {b} and {int1} is {b+int1}')

#If else statement
import random
rand_num=random.randint(1,100)
user_inp=int(input('Enter your guess from 1 to 100'))
if user_inp==rand_num :
    print('You guessed Right')
else : 
    print('Wrong, The correct number was', rand_num)
# Loop Statements

for itr in range(1,10):
    print(2*itr,end=',')
print("hello Word")

user_list = ['AWS', 'Pyhton','Mutton', 'Git']
for item in user_list:
    if item.endswith('on'):
        print(f'{item} ends with "on"')
    else :
        print(f'{item}')

#program to make a new list with the elements squared 
sqlist=['Alone']
list1=[2,5,3,2,5,6,1,4,]
for item in list1:
    sqlist.append(item**2)
print(sqlist)

user_list = ['AWS', 'Pyhton','Mutton', 'Git','Apple']
alist=[item for item in user_list if item.startswith('A') ]
print(alist)


import random

ran_num = random.randint(1,100)
lif=5
while lif != 0:
        user_inp=int(input("Enter your guess"))
        print("You entered ", user_inp)
        if ran_num == user_inp :
            print(f"Correct guess. Your score is {lif*100}")
        if ran_num < user_inp :
            print(f"Guess a lower number then {user_inp}. No of life left = {lif}")
            lif-=1
        else :
            print(f"Guess a Higher number then {user_inp}. No of life left = {lif}")
            lif-=1

print("Sorry you lost the correct ans was ",ran_num)


#Functions
def function(a,b):
    return(a+b)

user_sum=function(3,6)
print("The sum is ", user_sum)


# Recirsive Function
def factorial(x):

    if x == 1:
        return 1
    else:
        return (x * factorial(x-1))


num = int(input("enter a number"))
print(f"The factorial of {num} is", factorial(num))