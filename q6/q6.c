/*
 * q6.c
 *
 *  Created on: 05-Aug-2024
 *      Author: root
 */


#include<stdio.h>
#include<string.h>


struct student {
	int rno;
	char name[20];
	float sgpa;
};

void input (struct student *p, int size)
{
	for(int i = 0;i < size ; i++)
	{
		printf("\nEnter a Roll Number :");
		scanf("%d",&(p+i)->rno);
		printf("\nEnter a Name :");
		scanf("%s",&(p+i)->name);
		printf("\nEnter a SGPA :");
		scanf("%f",&(p+i)->sgpa);
	}
}
void  output (struct student *p, int size)
{
	printf("\nRoll Number \tName \tSGPA");

	for(int i = 0; i < size ; i++)
	{
		printf("\n%d   \t%s   \t%f",(p+i)->rno,(p+i)->name,(p+i)->sgpa);
	}
}

void desc (struct student *p,int size)
{
	for(int i = 0;i < size; i++)
	{
		for(int j = i + 1; j < size ;j++)
		{
			if((p+i)->sgpa < (p+j)->sgpa)
			{
				struct student temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j)= temp;
			}
		}
	}
}

int main ()
{
	struct student s[2];
	input(&s[0],2);
	output(&s[0],2);
	desc(&s[0],2);
	output(&s[0],2);
	return 0;
}







