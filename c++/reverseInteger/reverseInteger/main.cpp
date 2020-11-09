//
//  main.cpp
//  reverseInteger
//
//  Created by Mahamed Hassan on 9/17/20.
//  Copyright © 2020 Mahamed Hassan. All rights reserved.
//

// reverse algorithm example
#include <iostream> //std::cout
#include <algorithm> //std::revverse
#include <vector>   // std::vector

int main() {
    std::vector<int>myVector;
    
    //set some values:
    for(int i=1; i<10; i++)
        myVector.push_back(i); //123456789
    std::reverse(myVector.begin(), myVector.end()); //987654321
    
    //print out content
    std::cout<<"myVector contains:";
    for(std::vector<int>::iterator it=myVector.begin(); it!=myVector.end(); ++it) std::cout<<' ' << *it;
    std::cout<<'\n';
   
   
    return 0;
}
