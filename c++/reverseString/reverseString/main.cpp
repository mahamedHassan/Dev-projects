//
//  main.cpp
//  reverseString
//
//  Created by Mahamed Hassan on 9/17/20.
//  Copyright © 2020 Mahamed Hassan. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

void reverse(char s[]){
int len = strlen(s); // get the length of string
    
    int i, j;
    for(i = 0, j = len - 1; i < j; i++, j--){
        swap(s[i], s[j]);
    }
}
int main() {
    char s[20] = "apple";
    cout<<"Original string : " <<s<<endl;
    reverse(s);
     cout<<"Reversed string : " <<s<<endl;
    
    return 0;
}
