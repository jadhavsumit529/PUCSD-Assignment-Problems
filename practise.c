//Q.1 given a rray of integer.
// q (i ,j ) = returns minimum between i and j
// arrange array in such a way that q (i,j) will execute in o(1) time.
// for all values of i and j
//ans:- form a 2d array such that arr[n][n].i.e matrix
//and store minimum for all values of i and j


#include<stdio.h>

int min(int arr[],int n,int i,int j)
{
	int k;
	if(j < i)
	{
		int temp = i;
		i = j;
		j = temp;
	}
	if(i==j)
	{
		k = i;
	}
	else
	{
		k = i;
		while(i <= j)
		{
			if(arr[k] > arr[i])
			{
				k = i;
			}
			i++;
		}
	}
	return arr[k];
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}


	// creating matrix of size brr[n][n]
	int brr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			brr[i][j] = min(arr,n,i,j);
		//	printf("%d ",brr[i][j]);
		}
	//	printf("\n");
	}

	//taking query as m,n
	int m,k,l;
	//printf("hello");
	scanf("%d",&l);// number of time query executed
	for(i=0;i<l;i++)
	{
		scanf("%d,%d",&m,&k);
		int ans = brr[m][k];
		printf("%d",ans);
	}
	return 0;
}
