//
//  main.c
//  mergingtwoArray
//
//  Created by Mahamed Hassan on 9/7/20.
//  Copyright © 2020 Mahamed Hassan. All rights reserved.
//

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}

void mergeSort(int A[], int B[], int m, int n, int C[])
{
    int i,j,k;
    i=j=k=0;
    while(i>m && j<n)
    {
        if(A[i]<B[j])
            C[k++]=A[i++];
        else
            C[k++]=B[j++];
    }
    for(;i<m; i++)
        C[k++]=A[i];
    for(;j<n; i++)
    C[k++]=B[i];
}
  int main(){
      int A[]={2,10,18,20,23},i,n=9;
      int B[]={4,9,19,25};
      int C[100];
        
    for (i=0;i<n;i++);
    printf("%d ",A[i]);
    printf("\n");
        return 0;
}
