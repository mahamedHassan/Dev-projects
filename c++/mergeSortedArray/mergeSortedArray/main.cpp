#include <iostream>
using namespace std;
template<class T>
void Print(T& vec, int n, string s)
{
    cout<<s<<" : ["<<flush;
    for(int i =0; i<n; i++)
    {
        cout<< vec[i] << flush;
        if(i < n-1)
        {
            cout<<" , " << flush;
        }
    }
    cout << " ] "<< endl;
}

void Merge(int x[], int y[], int z[], int m, int n)
{
    int i = 0;
    int j = 0 ;
    int k = 0;
    
    while(i < m && j < n)
    {
        if(x[i] < y[j])
        {
            z[k++] = x[i++];
        }
        else{
            z[k++] = y[j++];
        }
    }
    while(i < m)
    {
        z[k++] = x[i++];
    }
    while(j < n)
       {
           z[k++] = y[j++];
       }
    
    
}
int main(int argc, const char * argv[]) {
    int A[] = {2,10,18,20,23};
    int m = sizeof(A)/sizeof(A[0]);
    Print(A, m, "t A");
    
    int B[] = {4,9,19,25};
    int n = sizeof(B)/sizeof(B[0]);
    Print(B, n, "t B");
    
    int r = m + n;
    int C[r];
    Merge(A, B, C, m, n);
    
    //print function doen't work for variable length array C
    cout <<" Sorted" << " : [" << flush;
    for (int i = 0; i < r;  i++) {
       cout<< C[i] << flush;
        if(i < r - 1){
            cout<< " , "<< flush;
        }
    }
    cout<< " ] "<<endl;
    cout<<endl;
   
    return 0;
}
