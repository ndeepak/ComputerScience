#include <iostream>
using namespace std;
void CreateMaxHeap(int A[],int n)  
{
    int temp=A[n],i=n;
    while(i>1 && temp > A[i/2])   
    {
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=temp;
}

void DisplayHeap(int A[],int size)   
{
    for(int i=1;i<=size;i++)
    {
        cout << A[i] << " ";
    }
    cout <<endl;

}

void DeleteHeap(int A[],int n) 
{
    int i,j,tmp,root;
    i=1;
    j=2*i;
    root=A[1];     
    A[1]=A[n];
    A[n]=root;
    while(j<n-1)
    {
        if(A[j+1] > A[j])  
        {
            j=j+1;
        }
        if(A[j] > A[i])
        {
         tmp=A[i];
         A[i]=A[j];
         A[j]=tmp;
         i=j;
         j=2*i;
        }
        else
        {
            break;
        }

    }
}

int main()
{
    int A[8]={0,30,25,40,10,50,20,5};
    for(int i=2;i<=7;i++)          
    {
        CreateMaxHeap(A,i); 
    }
    cout << "After performing Heap sort via deletion:" << endl;
    for(int i=7;i>=1;i--)
    {
        DeleteHeap(A,i);
    }
    DisplayHeap(A,7); 
    return 0;
} 