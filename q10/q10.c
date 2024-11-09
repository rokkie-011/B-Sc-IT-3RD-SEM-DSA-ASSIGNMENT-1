/*
 * q10.c
 *
 *  Created on: 09-Aug-2024
 *      Author: root
 */


#include<stdio.h>
#include<string.h>
int stack[5];
int top = -1;

void push ()
{
	int x;
	printf("\nEnter a element :");
	scanf("%d",&x);

	if(top == 5)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		top++;
		stack[top] = x;
	}
}

void pop ()
{
	int item;
	if(top == -1)
	{
		printf("UNDERFLOW");
	}
	else
	{
		item = stack[top];
		top--;
	}
	printf("POP value is %d",item);
}

void peep ()
{
	if(top == -1)
	{
		printf("underflow");
	}
	else
	{
		printf("%d",stack[top]);
	}
}
void display ()
{
	int i;
	for(i = top; i <= 0; i--)
	{
		printf("%d",stack[i]);
	}
}
int main ()
{
	int x;

	do {

		printf("\nMENU\n");
		printf("\n1.push \n2.pop \n3.peep \n4.Display");
		printf("\nEnter Your Choice :");
		scanf("%d",&x);

		switch(x)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				peep();
				break;
			}
			case 4:
			{
				display();
				break;
			}
		}
		
	}while(x > 0 && x < 5);

	return 0;
}
