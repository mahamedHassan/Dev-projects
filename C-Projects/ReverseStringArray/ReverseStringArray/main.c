//
//  main.c
//  ReverseStringArray
//
//  Created by Mahamed Hassan on 9/18/20.
//  Copyright © 2020 Mahamed Hassan. All rights reserved.
//

#include <stdio.h>
#include <string.h>
void ReverseStringArray(char* strarr[], int n) {
   char* temp;
   int end = n - 1;
   for (int start = 0; start < end; start++) {
      temp = strarr[start];
      strarr[start] = strarr[end];
      strarr[end] = temp;
      end--;
   }
}
int main() {
    char* strarr[] = {"learn"};
   int n = sizeof(strarr) / sizeof(strarr[0]);
   for (int i = 0; i < n; i++)
   printf("%s ", strarr[i]);
   printf("\n");
   ReverseStringArray(strarr, n);
   for (int i = 0; i < n; i++)
   printf("%s ", strarr[i]);
   return 0;
}
