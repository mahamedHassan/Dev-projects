###
##n = 1
##while n <= 10:
##    print(n)
##    n += 1

#definite2.py
##n = 1
##while n <= 10:
##    stop = int(input())
##    while n <= stop:
##        print(n)
##        n += 1


#indefinite.py
##done = false  #Enter the loop at least one
##while not done:
##    entry = int(input())  #Get value from user
##    if entry == 999: # Did user provide the magic number?
##        done = True   #if so, get out
##    else:
##        print(entry) #if not, print it and continue
##        
##        
##    
##    #example for loop
##for n in range(21, 0, -3):
##    print(n, end = ' ')

#powers10loop.py

##for i in range(16):
##    print('{0:3} {1:16}'.format(i, 10**i))

            #*countup.py*#
##Counts up from zero. the user continues the count by entering 'Y'
##the user discontinues the count by entering 'N'

##count = 0       #the current count is zero
##entry = 'Y'     #Count to begin with
##
### we are gonna use whike loop statemen
##
##while entry != 'N' and entry != 'n':
##    #Print the current vvalue of count
##    print(count)
##    entry = input(' Please enter "Y" to continue or "N" to quit: ')
##
##    #here we use the if statement to compare the condition
##    if entry == 'Y' or entry == 'y':
##      count += 1  # Keep counting
##
##        #check for bad entry
##    elif entry != 'N' and entry != 'n':
##        print('"' + entry + ' " is not valid choice ')
##    
##    #lese must be 'N' or 'n'
##    

    

        ## addnonnegative.py###
## Allow the user to enter a sequence of nonnegative integers.
## the user ends the list with a negative
## at the end the some of nonnegative numbers entered  is displayed
## the program prints zero if the user provides no nonnegartive numbers

##Ensure the loop is entered
##inititilze sum
##
##Request input from the user
##Anegative number exits the loop
##
##Get the value
## Is number nonnegative?
##  Only Add it if, it is nonnegative
##Display the sum
## 
##


entry = 0     # Ensure the loop is entered
sum = 0       # inititilze sum

#Request input from the user
##print(" Enter numbers to sum, negative numbers  ends list:")
##
##while entry >= 0:               #A negative number exits the loop
##    entry = int(input())        #Get the value
##    if entry >= 0:              # Is number nonnegative?
##        sum += entry            # Only Add it if, it is nonnegative
##    print("Sum = ", sum)        # Display the sum
##


                    ## countvowelsnox.py ###

word = input('Enter text(no X\s, please): ')
vowel_count = 0
for c in word:
    if c == 'A' or c == 'a' or c == 'E' or c == 'e'\
       or c == 'I' or c == 'i' or c == 'O' or c =='o':
        print(c, ', ', sep='', end='') ##print the vowel
        vowel_count += 1              #count the vowel
    elif c == 'X' or c == 'x':
            break
    print('(', vowel_count, ' vowels)', sep='')
    
    

    
