#include<iostream>
using namespace std;

/* Swap function */
void swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

/* Function to implement bubble sort */
void bubbleSort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			swap(&arr[j],&arr[j+1]);
		}
	}
}

/* Function to print an array */
void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

/* Driver Program */
int main()
{
	int arr[] = {8,6,9,3,5,1,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Before Sorting:-"<<endl;
	printArray(arr,n);
	bubbleSort(arr,n);
	cout<<"\nAfter Sorting:-"<<endl;
	printArray(arr,n);
	return 0;
}

