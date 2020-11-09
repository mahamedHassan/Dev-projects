//
//  main.c
//  CompareTwoString
//
//  Created by Mahamed Hassan on 9/18/20.
//  Copyright © 2020 Mahamed Hassan. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    char string1[] = {"python"};
    char string2[] = {"javascript"};
    
    //using function strcmp() to compare the two strings
    if(strcmp(string1, string2) == 0)
        printf("yes, 2 strings are same \n");
    else
        printf("no, 2 strings are not same \n");
    return 0;
}
