/*
 * q5.c
 *
 *  Created on: 30-Jul-2024
 *      Author: root
 */

//Write a program to implement student structure and display student detail in descending
//order of their SGPA


#include<stdio.h>
#include<string.h>


struct student {
	int rno;
	char name[20];
	float sgpa;
};

void input (struct student x[], int size)
{
	for(int i = 0;i < size ; i++)
	{
		printf("\nEnter a Roll Number :");
		scanf("%d",&x[i].rno);
		printf("\nEnter a Name :");
		scanf("%s",x[i].name);
		printf("\nEnter a SGPA :");
		scanf("%f",&x[i].sgpa);
	}
}
void  output (struct student y[], int size)
{
	printf("\nRoll Number \tName \tSGPA");

	for(int i = 0; i < size ; i++)
	{
		printf("\n%d   \t%s   \t%f",y[i].rno,y[i].name,y[i].sgpa);
	}
}

void desc (struct student x[],int size)
{
	for(int i = 0;i < size; i++)
	{
		for(int j = i + 1; j < size ;j++)
		{
			if(x[i].sgpa < x[j].sgpa)
			{
				struct student temp = x[i];
				x[i] = x[j];
				x[j]= temp;
			}
		}
	}
}

int main ()
{
	struct student s[2];
	input(&s[0],2);
	output(s,2);
	desc(&s[0],2);
	output(&s[0],2);
	return 0;
}







