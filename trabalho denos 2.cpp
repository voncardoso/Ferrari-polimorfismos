#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void coutingSort(int arr[], int n, int max)
{
	int count[50]={0};
	int i, j;
	for (i=0; i<n; i++){count[arr[i]]=count[arr[i]]+1;}
	printf ("\n\n");
	for (i=0; i<=max; i++)
	{
		for (j=1; j<=count[i]; ++j)
		{
			printf ("%d ", i);
		}
	}
}

int main ()
{
	int n=10,i, max=0;
	
	
	int arr[n];
	
	printf ("elementos :");
	
		for (i=0; i<n; i++)
		{
			 printf ("%d ", arr[i]= rand () % 10);
				if (arr[i]>max)
				{
					max = arr[i];
				}
		}
	coutingSort (arr,n,max);
}
