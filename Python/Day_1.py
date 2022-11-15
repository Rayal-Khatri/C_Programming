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
a= 4            # This is a integer
str_1='3'       # This is a string
c=1.4           # This is a float
b=a+ int(str_1)
print(b)
print(a>c)      #This is a Bool ie Returns True or False      


#Simple Program to change Temperature from C to F
TempC=int(input("Enter Temperature in degree Celcius"))
TempF = (TempC*9/5)+32
print(f'{TempC} degrees in Celcius is {TempF} degrees in Farenheight')
