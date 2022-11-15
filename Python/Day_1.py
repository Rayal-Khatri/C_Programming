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




#List Operation

list1=['pokemon','apple','string','daraz']              #accepts int, float, str, complex and another list as element 
list2=[3,4,12,45,123,65,21,0]                           
print(list1[3][1])
print(list1[2:])                                        #prints from given index to last
print(list1.index('string'))                            #returns incex of the string
list1.append("Hello world")                             #appeands string to list
list1.pop(3)                                            # pops the value in the index
list1.insert(3,'Powerup')                               #insters the string in given index location     
list1.remove('string')                                  #removes the string from list
del(list1[3])                                           #deletes the element in the list of given index                         
print("The sum of the contents of 2nd list is ",sum(list2))
print("The max and min of the contents of 2nd list is ",max(list2),min(list2))
print("The contents of list 1 after all modifications is ",list1)
list2=list1.copy()                                      #copies content from list 1 to list 2
list1.extend(list2)                                     #adds content of list 2 to list 1
list1=sorted(list1,key=len)                             #sorts the contents of list ,,,here sorted by length 
print('list1 sorted lis',list1)

print(list(range(0,21,2)))                              # range( starting, ending , step)

#Tuple And Set (Similar to list)
tuple1=('string',1,3.5)                 #Cant modity content of tuple but can append
set1={'member', 123,'Pokemon'}          #Doesnt take multiple same data
set2={'member', 23,'oke'}          #Doesnt take multiple same data
set1.add('java')
set1.remove(123)
print("Set 1 after operaions is ", set1)
print("Set 1 and 2 after intersection is",set1.intersection(set2))
print("Set 1 and 2 after Union is",set1.union(set2))

#Conversion of list to other elements

list1=[3,2,'sdajd','Hello']
tuple1=(989,8.98,'apple')
set1={'Member', "aanand"}
tuple2=tuple(list1)
set2=set(tuple1)
list2=list(set1)
print("The list touple and set is ", list2,tuple2,set2)

#Dictionary
dic1={'Name':'code','Member':2000}
dic2={'Event':['Aws','Java','Python']}
print(dic1)
print(dic1.get('Name'))
print(dic1.get('Member'))
dic1['Place'] = 'CG'
dic1['Name'] = "CFC"
print(dic1.keys())                                      #returns keys present in Dictionary
print(dic1.values())                                    #returns values of key present in DIctionary
print(dic1.items())                                     #returns all the items in Dictonary
print('Name' in dic1)                                   #checks if the string is in given Dictionary
dic1.pop('Member')                                      #removes the element from Dictionary



#Base conversion (decimal from binary oct aoe hex)

str1='123'
int1=int(str1)
x=int('a',base=16)
y=int('101101',base=2)
print("The value of a and 101101 in decomal is", x,y)