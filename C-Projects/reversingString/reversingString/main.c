//
//  main.c
//  reversingString
//
//  Created by Mahamed Hassan on 9/18/20.
//  Copyright © 2020 Mahamed Hassan. All rights reserved.
//

#include <stdio.h>

int main() {
    char A[] = "python";
    char t;
    
    int i, j;
    for(j=0; A[j]!='\0'; j++)
    {}
    j = j-1;
    for(i=0; i<j; i++, j--)
    {
        //exchanging the elements
        t=A[i];
        A[i] = A[j];
        A[j] = t;
    }
   
    //return 0;
}
