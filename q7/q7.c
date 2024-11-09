/*
 * q7.c
 *
 *  Created on: 05-Aug-2024
 *      Author: root
 */


#include<stdio.h>
#include<string.h>

int main ()
{
	int a[5];
	input(a,5);
	print(a,5);
	min(a,5);
	max(a,5);
	sort(a,5);
	printf("\n After sorting :");
	print(a,5);
	return 0;
}
void input (int x[],int n)
{
	for(int i = 0 ; i < n; i++)
	{
		printf("Enter a array element %d :",i+1);
		scanf("%d",&x[i]);
	}
}
void print (int x[],int n)
{
	for(int i = 0 ; i < n; i++)
	{
		printf("\t %d",x[i]);
	}
}
void min (int x[],int n)
{
	int min = x[0];
	for(int i = 0;i < n;i++)
	{
		if(min > x[i])
		{
			min = x[i];
		}
	}
	printf("\n Minimum value of the array : %d",min);
}
void max (int x[],int n)
{
	int max = x[0];
	for(int i = 0;i < n;i++)
	{
		if(max < x[i])
		{
			max = x[i];
		}
	}
	printf("\n Maximum value of the array : %d",max);
}
void sort (int x[],int n)
{
	for(int i = 0; i < n ;i++)
	{
		for(int j = i+1; j < n ;j++)
		{
			if(x[i]<x[j])
			{
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
}
