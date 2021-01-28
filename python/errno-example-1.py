#using the erno module

import errno
try:
    fp = open("vehicles.txt")
except IOError(error, message):
    if error== errno.ENOENT:
        print (" no such file")
    elif error == errno.EPERM:
        print (" permission denied")
    else:
        print(message)
        
        
