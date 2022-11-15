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

#Complex Numbers
comp_numb_1 = 3+4j
comp_numb_2 = 5+8j    
print("The sum of two complex number is ",comp_numb_1+comp_numb_2)

#Index in strings

str=input("Enter a word: ")
print('Indicate Index to print the specific character. Printing the index 3: ',str[3])
print('Indicate Index to print the specific character. Printing the index -1: ',str[-1])
print('Indicate Range of Index to print range of characters. Printing the index 0 to 3: ',str[0:3])
print('Blank indicates start and end and another parameter indicates step value: ',str[::-1])
print('Taking step value 2: ',str[::2])
print("The length of the given word is", len(str))
print(str.strip())  #Removes space from both ends (str.lstrip and str.rstrip for left and right only)
str.find(input("Enter string to check Case"))                                            
# String Operations
print("Given string in uppercase is",str.upper())               #Upper & lower case
print("Given string in lowercase is",str.lower())
print("Given string after swaping case is",str.swapcase())      #Swaps case

#Find and replace String
para='''I am a good programmer and a quick brown fox jumps over a lazy dog. The world is a place to live and we should live in oeace and harmoy'''
print("the location where the word dog is ",para.find('dog'))
para.replace('brown','hero',1)                                      #One indicates how many times to replace
print('after replacing fox with bear',para)
print("The number of 'a' in the para is ", para.count('a'))     #counts the no of given string in the word



#Simple Program to change Temperature from C to F
TempC=int(input("Enter Temperature in degree Celcius"))  # Asks user for input value and stores it in TempC. Stores string as default 
print(f'{TempC} degrees in Celcius is',(TempC*9/5)+32,' degrees in Farenheight')



#List and types of list
list1='item1, item2, item3'
print(list1.split(','))                         #splits the list based on the character in the bracket
print((' &').join(x))                           #joins the words in list to create a songle list joined by the string in bracket


string1='Myname.PHP'
print(string1.endswith('.php'))                 #Checks if the word ends with the string and returns boolean
print(string1.startswith('My'))                 #Checks if the word starts with the string and returns boolean
print(string1.lower().endswith("php"))          #Case Sensitive so need to check in either Upper or lowercase
