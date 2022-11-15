print('Hello World')
# variables
a=2
b,c=4,5
str='I am a test Program'
str2= "I am also a string"
str3='''I am also a string but 
        I can 
        Do This'''
print(a,b,c,str,str,str2,str3,sep='-')  #prints all the contend seperated by a -

# Data Types
a = 4            # This is a integer
str_1 = '3'       # This is a string
c = 1.4           # This is a float
b = a + int(str_1) + c
print(f"The sum oof {a} and {int(str_1)} and {c} is", b)
print(f"The boolean for condition {a}>{c} is", a>c)      #This is a Bool ie Returns True or False  
comp_numb_1 = 3+4j
comp_numb_2 = 5+8j    
print("The sum of two complex number is ",comp_numb_1+comp_numb_2)

# String Operations
str=input("Enter a word: ")
print("Given string in uppercase is",str.upper())               #Upper & lower case
print("Given string in lowercase is",str.lower())
print("Given string after swaping case is",str.swapcase())      #Swaps case


#Simple Program to change Temperature from C to F
TempC=int(input("Enter Temperature in degree Celcius"))  # Asks user for input value and stores it in TempC. Stores string as default 
print(f'{TempC} degrees in Celcius is',(TempC*9/5)+32,' degrees in Farenheight')



