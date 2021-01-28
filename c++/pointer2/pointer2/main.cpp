//
//  main.cpp
//  pointer2
//  Defination and call of function swap()
// Demonstarates the use of pointers as parameters.
//  Created by Mahamed Hassan on 1/27/21.
//

#include <iostream>
using namespace std;

void swap(float *, float *); //prototype of swap()
int main()
{
    float x = 11.1F;
    float y = 22.2F;

    swap(&x, &y);
    
    //return 0;
}

//implimentaion of prototype
void swap(float *p1, float *p2)
{
    float temp;  //Temporary variable
    temp = *p1;  //At the above call p1 points tp x and p2 to y.
    *p1 = *p2;
    *p2 = temp;
}
