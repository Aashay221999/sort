#include<stdio.h>
#define M 50
void InsertionSort (int a[],int n)
{
	int i,j,temp;	
	for(i=0;i<n;i++)
	{
		for(j=i;j>0;j--)
		{
			if(a[j]<a[j-1])
			{
				temp = a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
				
			}
		}
	}

}
int main() 
{
	printf("\nPlease Enter the Nos of Elements");
	int N; 
	scanf("%d",&N);
	int A[M];
	printf("\nPlease Enter The Elements");
	int i;
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	InsertionSort(A,N);
	printf("\nThe Sorted array is: ");
	for(i=0;i<N;i++)
	{
		printf(" %d ",A[i]);
	}
	return 0;
}
