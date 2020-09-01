//
//  main.c
//  selectionSort
//
//  Created by Mahamed Hassan on 8/27/20.
//  Copyright © 2020 Mahamed Hassan. All rights reserved.
//

#include <stdio.h>

//Swap method
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    
}

//selectiom sort method
void selectionSort(int A[], int n){
    int i, j, k;
    for (i=0; i<n-1; i++) {
        for (j=k=i; j<n; j++) {
            if(A[j]<A[k])
                k=j;
        }
        swap(&A[i], &A[k]);
    }
    
}

int main() {
    int A[]={14,33,27,10,35,19,42,44}, n=8,i;
    
    selectionSort(A, n);
    for (i=0;i<8; i++)
        printf("%d",A[i]);
    printf("\n");
    return 0;
}
