/*
 * q7_2.c
 *
 *  Created on: 06-Aug-2024
 *      Author: root
 */

#include<stdio.h>
#include<string.h>

void input (int m,int n,int t[][n])
{
	printf("\nEnter your array element :");
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j< n ;j++)
		{
			scanf("%d",&t[i][j]);
		}
	}
}
void print (int m,int n,int t[m][n])
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j< n ;j++)
		{
			printf("\t %d",t[i][j]);
		}
		printf("\n");
	}
}
void sum (int m,int n,int t[m][n])
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			sum = sum + t[i][j];
		}
	}
	printf("\nTotal Sum of The 2D array is : %d",sum);
}
int main ()
{
	int a[3][3];
	input(3,3,a);
	print(3,3,a);
	sum(3,3,a);
	return 0;
}
