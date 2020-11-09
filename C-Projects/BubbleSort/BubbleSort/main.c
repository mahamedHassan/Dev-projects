#include <stdio.h>
#include <stdlib.h>

//Swap Method passes two parameter
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

//Bubble method passes A[] arrayy element
//and n of number of element
void BubbleSort(int A[], int n)
{
    //create three variables
    int i, j, flag=0;
    
    for (i=0; i< n-1; i++)
    {
        //flag assigned 0
        flag=0;
        for (j=0; j<n-i-1; j++)
        {
            if(A[j]>A[j+1])
            {
                //here we called swap funtion
                swap(&A[j], &A[j+1]);
                //here flag assigned 1
                flag=1;
            }
            
        }
        // we checked if flag is zero then break the process
        if(flag==0)
            break;
    }
}
int main() {
    
    int A[]={8,5,7,3,2}, n=5, i;
    
    //we called here bubbleSort method
    BubbleSort(A, n);
    
    //this for loopp weill display the sorted Bubble elements
    for(i=0;i<5; i++)
    printf("%d ",A[i]);
    printf("\n");
    return 0;
}
