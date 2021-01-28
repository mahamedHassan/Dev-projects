      # computing Square Root

##Suppose you must write a Python program that computes the square root of a number supplied by the user.
##We can compute the square root of a number by using the following simple strategy:
##1. Guess the square root.
##2. Square the guess and see how close it is to the original number; if it is close enough to the correct
##answer, stop.
##3. Make a new guess that will produce a better result and proceed with step 2.   

        
        # File computesquareroot.py
##
### Get value from the user
##val = float(input('Enter number: '))
### Compute a provisional square root
##root = 1.0
### How far off is our provisional root?
##diff = root*root - val
### Loop until the provisional root
### is close enough to the actual root
##while diff > 0.00000001 or diff < -0.00000001:
##print(root, 'squared is', root*root) # Report how we are doing
##root = (root + val/root) / 2 # Compute new provisional root
### How bad is our current approximation?
##diff = root*root - val
### Report approximate square root
##print('Square root of', val, '=', root)

    #Definte loops VS. Indefinite loops -
        # definite1.py
        # this kind of loop is known as a definte loop, since we can predict exactly
        #how many times the loop repeats.
##n = 1
##while n <= 10:
##    print(n)
##    n += 1

    #definite2.py
    # we cannot predict how many times the loop will repeat. the number
    #of iterations depends on the input provided by the user.
##n = 1
##stop = int(input())
##while n <= stop:
##    print(n)
##    n += 1
    
    
    #indefinite.py
    # We cannot predict at anyy point during the loop's execution how manyy iterations
    #the loop will perform. the user could choose to enter 0 exculusively or enter 999
##    #immediatly and be done with it.
##done = False     # Enter the loop at least once
##while not done:
##    entry = int(input())  # Get value from the user
##    if entry == 999:     # Did user provide the magic number
##        done = True     # If so, get out
##    else:
##        print(entry)     # If not, print it and continue

        #the while statement is ideal for indefinite loops. Although we have used
        #the while statement to implement definite loops, python provides a better alternative
        # for definte loops: the For statement.


                # The for statement
        #pyython provides a more convenient way to express a definte loop.
        # the for statement iterates over a sequence of values. one wayy to express
        #a sequence is via a tuple, as shown here:

 #python provides a convenient way to express a sequence of integers that follow a regular
    #pattern, the following code uses a range expression to print the integers I through 10:

##for n in range(1, 11): #the expression range(1, 11) creates a range object that allows
##    #the for loop to assign to the variable n the valuee 1,2, ....10.  conceptually,
##    #the expression range(1, 11) represents the sequence of integers 1,2,3,4,5,6,7,8,9,10.
##    print(n)


        #The range expression is vvery flexibale. Consider the following loop
        # that counts down from 21 to 3 by threes
##for n in range(21, 0, -3):
##    print(n, end=' ')# it prints 21 18n15 12 9 6 3

    # the following code computes and prints the sum of all
    #the positive integers less than 100:

##sum = 0         #Initialize sum
##for i in range(1, 100):
##    sum += 1
##    print(sum)

#the following examples show how to use range to produce a variety of sequences:

##sum = 0
##for i in range(10):
##    sum =+ 1
##    print(i)

##sum = 0
##for i in range(1, 10):
##    sum =+ 1
##    print(i)

##sum = 0
##for i in range(1, 10, 2):
##    sum =+ 1
##    print(i)

##sum = 0
##for i in range(10, 0, -1):
##    sum =+ 1
##    print(i)

##sum = 0
##for i in range(10, 0, -2):
##    sum =+ 1
##    print(i)

##sum = 0
##for i in range(-5, 5):
##    sum =+ 1
##    print(i)
    
##sum = 0
##for i in range(1, 2):
##    sum =+ 1
##    print(i)  # it prints 1


##sum = 0
##for i in range(1, -1, -1):
##    sum =+ 1
##    print(i)    #it prints 1,0
    

##sum = 0
##for i in range(0):
##    sum =+ 1
##    print(i) # it is empty


    ## power10loop.py##

##for i in range(16):
##    print('{0:3} {1:16}'.format(i, 10**i))
    
        

            #abuse the for statement
##for i in range(10):
##    print(i, end=' ') #ptints i as served by the range object
##    if i == 5:
##        i = 30 # change i inside the loop
##        print('({})'.format(i), end=' ')
##        print()
##        
    

        ## stringletters.py###
##word = input('Enter a word: ')
##for letter in word:
##    print(letter)

    ##stringliteralletters.py##
##for c in 'ABCDEF':
##    print('[', c, ']', end=' ', sep='')
##    print()
    

    ##countvowels.py##

word = input('Enter text: ')
vowel_count = 0
for c in word:
    if c == 'A' or c == 'a' or c == 'E' or c == 'e' \
       or c == 'I' or c == 'i' or c == 'O' or c == 'o':
        print(c, ' , ', sep='', end=' ') #print the vowel
        vowel_count += 1   #count the vowel
print(' (', vowel_count, ' vowels)' , sep='')
        

    
