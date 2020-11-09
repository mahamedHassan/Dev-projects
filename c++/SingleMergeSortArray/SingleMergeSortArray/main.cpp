//  main.cpp
//  MergeSortArray
//  Created by Mahamed Hassan on 9/9/20.
//  Copyright © 2020 Mahamed Hassan. All rights reserved.
//

#include <iostream>
using namespace std;

template<class T> //The format for declaring function templates with type parameters is:
// t& - is a function which returns a reference to an object of type T
void Print(T& vec, int n, string s)
{
    //flush: when you output to stream from your program,
    //it doesn't go immediatly to the file or terminal, it will be put into a buffer
    std::cout<< s <<" : [" <<flush;
    for( int i=0; i<n; i++)
    {
        //vector is a similar dynamic array, vectors are sequence containers that can be
        //change thier size according insertion and deletation of elements
        std::cout<<vec[i]<<flush;
            if(i < n-1)
            {
                std::cout<< " , "<<flush;
            }
    }
     std::cout<< "]"<<endl;
}

void Merge(int x[], int y[], int z[], int m, int n)
{
    int i = 0;
    int j = 0;
    int k = 0;
    
      while(i<m && j<n)
      {
          if(x[i] < y[j]){
              z[k++] = x[i++];
          }else{
              z[k++] = y[j++];
          }
      }
    
    while(i<m)
    {
        z[k++] = x[i++];
    }
    while(j<n)
    {
        z[k++] = y[j++];
    }
}

/*void MergeSingle(int A[], int low, int mid, int high)
{
    int i = low;
    int j = mid+1;
    int k = low;
    int B[high + 1];
    
    while(i <= mid && j <= high)
    {
        if(A[i] < A[j]){
            B[k++] = A[i++];
        }else{
            B[k++] = A[j++];
        }
    }
    
    while(i <= mid)
    {
        B[k++] = A[i++];
    }
    while(i <= high)
    {
        A[i] = B[i];
    }
    
}
*/
int main() {
   
    int A[] = {2, 10, 18, 20, 23};
    int m = sizeof(A)/sizeof(A[0]);
    Print(A, m, "\t A");
    
    int B[]={4, 9, 19,25};
    int n = sizeof(B)/sizeof(B[0]);
    Print(B, n, "\t B");
    
    
    int r = m+n;
    int C[r];
    Merge(A,B, C, m, n);
    
//Print function doesn't work for variable length  array C
    std::cout<< "Sorted"<< " : [" <<flush;
    for(int i=0; i<r; i++)
    {
        //flush: when you output to stream from your program,
        //it doesn't go immediatlyto the file or terminal, it will be put into a buffer
       std::cout<<C[i] <<flush;
        if(i < r-1)
        {
            std::cout<<", "<<flush;
            
        }
    }
    std::cout<<"]"<<endl;
    std::cout<<endl;
    
    
   /* int D[] = {2,5,8,12,3,6,7,10};
    Print(D, sizeof(D)/sizeof(D[0]), "\t\tD");
    MergeSingle(D, 0, 3, 7);
  
    Print(D,sizeof(D)/sizeof(D[0]), "\t\tD");
    */
    return 0;
}
