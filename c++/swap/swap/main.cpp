//-----------------------------------------
//  main.cpp
//  Definition and call of the functionswap()
// 1. version: parameters with pointer type,
// 2.  version: parameters with reference type.
//  Created by Mahamed Hassan on 1/27/21.
//-------------------------------------------

#include <iostream>
using namespace std;

// prototyype of swapa()
void swap( float*, float*); //version:  parameter with pointer type
void swap(float&, float&);  //version:  parameter with reference type

int main()
{
    float x = 11.1F;
    float y = 22.2F;
    
    cout << "x and y before swapping: "
        <<x << "   " <<y <<endl;
    
    swap(&x, &y);   //call pointer version
    cout << "x and y after 1. swapping: "
        <<x << "   " <<y <<endl;
    
    swap(x, y);   //call reference version
    cout << "x and y  after 2. swapping: "
        <<x << "   " <<y  <<endl;
    return 0;
}

void swap(float *p1, float *p2)  //ponter version
{
    float temp;   //temporary variable
    temp = *p1;  // Above call points p1
    *p1 = *p2;   // to x and p2 to y
    *p2 = temp;
    
}

void swap(float& a, float& b)  //reference version
{
    float temp;   //temporary variable
    temp = a;  // For Above call
    a = b;   // a equals x and b equals y
    b = temp;
}
