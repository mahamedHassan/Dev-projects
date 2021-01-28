# Below code will create a file named vehicles and add the items. \n is a
#newline character
vehicles = ['scooter\n', 'bike\n', 'car\n']
f = open('vehicles.txt', 'w')
f.writelines(vehicles)

#Reading from file
f = open('vehicles.txt')
line = f.readlines()
print(line)
f.close()
