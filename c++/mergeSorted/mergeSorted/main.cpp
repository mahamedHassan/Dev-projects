//
//  main.cpp
//  mergeSorted
//
//  Created by Mahamed Hassan on 9/8/20.
//  Copyright © 2020 Mahamed Hassan. All rights reserved.
//

#include <iostream>
using namespace std;

void mergeSorted( int A[], int B[], int C[], int n, int m)
{
    //concatenate two arrays
    int i = 0, j=0, k=0;
    
    while(i<m && j<n)
    {
        if(A[i] < B[j])
        {
            C[k++]=A[i++];
        }
        else{
            C[k++] = B[j++];
        }
    }
    //merging the remaining of elements A[] array(if any)
    while (i < m) {
        C[k++] = A[i++];
       // i+=1;
        //k+=1;
    }
    //merging the remaining of elements B[] array(if any)
    
    while(j < n)
    {
        C[k++] = B[j++];
       // j+=1;
        //k+=1;
    }
    
    //sorting C[] array
     C[k] = n + m;
}

int main() {
    
    int A[] = {2, 10, 18, 20, 23};
    int n = sizeof(A)/sizeof(A[0]);
  
    int B[] = {4, 9, 19, 25};
    int m = sizeof(B)/sizeof(B[0]);
    
    int r = m+n;
    int C[r];
  
    //final merge list
    mergeSorted(A, B, C, m, n);
    for(int i = 0; i<n + m; i++)
    std::cout <<" " <<C[i];
    std::cout <<"\n";
    return 0;
}
