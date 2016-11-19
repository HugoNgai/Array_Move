/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
																					数组循环右移
																					条件:1.只使用一个附加空间
																						 2.O(n)
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<iostream>
using namespace std;

void Reverse(int *array,int n)
{
	int i,temp;
	for (i=0;i<(n+1)/2;i++)
	{
		temp=array[i];
		array[i]=array[n-i-1];
		array[n-i-1]=temp;
	}
}

void cycle(int *array,int N,int M)
{
	M=M%N;
	Reverse(array,N);
	Reveree(array,M);
	Reverse(array+M,N-M);
}

int main(void)
{
	int N,M,i;
	cin>>N>>M;
	int array[N];
	for (i=0;i<N;i++)
		cin>>array[i];

	cycle(array,N,M);

	for (i=0;i<N;i++)
		cout<<array[i];
	
}
