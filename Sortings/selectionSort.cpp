#include<iostream>

using namespace std;


void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}


int partion(int *A,int start,int end)
{
    int viot  = A[end];
    int pIndex = start;

    for(int i=start;i<end;i++)
    {
        if(A[i]<=viot)
        {
                swap(A[i],A[pIndex]);
                pIndex++;
        }

    }
    swap(A[pIndex],A[end]);
    return pIndex;
}




void QuickSort(int *A,int start,int end)
{
    if(start<end)
    {
        int pIndex = partion(A,start,end);
        QuickSort(A,start,pIndex-1);
        QuickSort(A,pIndex+1,end);
    }
}



int main()
{
    int a[] = {7,6,5,4,3,2,1,0};
    QuickSort(a,0,7);

    cout<<"Quick sort:-"<<endl;
	for(int i=0;i<8;i++)
    {
        cout<<a[i]<<" ";
    }
}
