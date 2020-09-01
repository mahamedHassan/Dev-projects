
//  main.c
//  insertionSort
//
//  Created by Mahamed Hassan on 8/25/20.
//  Copyright © 2020 Mahamed Hassan. All rights reserved.
//

#include <stdio.h>
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    
}

void Insertion(int A[], int n){
    int i,j,x;
    for(i=1;i<n;i++){
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
        
    }
    

}

int main() {
    int A[] = {14,33,27,10,35,19,42,44}, n=8,i;
    Insertion(A,n);
    for (i=0; i<8; i++)
        printf("%d",A[i]);
        printf("\n");
    return 0;
}
