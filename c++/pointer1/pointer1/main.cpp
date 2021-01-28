//
//  main.cpp
// prints the values and addresses of values
//
//  Created by Mahamed Hassan on 1/27/21.
//

#include <iostream>
using namespace std;

int var, *ptr;   //Definition of variables var and ptr

int main()     //outputs the values and addresses of the variables var and ptr.
{
    var = 100;
    ptr = &var;
    
    cout<< " Value of var:   "<< var
        << " Address of var: "<< &var
    <<endl;
    cout<< " Value of ptr:   "<< ptr
        << " Address of ptr: "<< &ptr
    <<endl;
    return 0;
    
}


//Sample screen out put
//Value of var:   100            Address of var: 0x1000080a8
//Value of ptr:   0x1000080a8    Address of ptr: 0x1000080b0

//A pointer is an expression that represents the address and tyype of another //pbject. using the address operator, &, for given object creates a pointerto //that object.
