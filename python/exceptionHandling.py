#Below code will open a file and try to convert the content to integer

try:
    f = open("vehicles.txt","r")
    print(f.readline())
    i = int(str.strip(f.readline()))

except IOError as e:
        print ("I/O error({0}): {1}".format(e.errno, e.strerror))
except ValueError:
       print ("Couldn't convert data to an integer.")
except:
       print ("Unexpected error occured ", '\n', "Error Type: ",sys.exc_info() [0],
       '\n', "Error Msg: ", sys.exc_info()[1])
finally:
    f.close()
    print ("file has been closed")
           
