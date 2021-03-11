#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 20
int f=-1, r=-1;
int qt[max];
void main()
{
	void add();
	void del();
	void dis();
	void emp();
	int a;
	while(1)
	{
		printf("\n\n\n 1.ADD 2.DELETE 3.DISPLAY 4.QUIT 5.Check if Empty or Full");
		printf("\n Enter any choice\t");
		scanf("%d",&a);
		switch (a)
			{
			case 1:
				add();
				break;
			case 2:
				del();
				break;

			case 3:
				dis();
				break;
			case 4:
				exit(1);
			case 5:
				emp();
				break;
			default:
				printf("\n Choose between 1 to 4 only");
			}
	}
}
void add()
{
	int additem;
	if(r==max-1)
		printf("\n Queue overflow");
	else
	{
		if(f==-1)
			f=0;
		printf("\n Insert the element in the queue:\t");
		scanf("%d",&additem);
		r=r+1;
		qt[r]=additem;
	}
}

void del()
{
	if(f==-1||f>r)
	{
		printf("\nQueue Underflow");
		return;
	}
	else
	{
		printf("\nThe element delted from the queue is %d",qt[f]);
		f=f+1;
	}
}

void dis()
{
	int i;
	if(f== -1)
		printf("\nThe queue is empty\n");
	else
	{
		printf("\n The queue is");
		for(i=f;i<=r;i++)
		{
			printf("\n%d",qt[i] );
		}
	}
}

void emp()
{
	if(r==max-1)
		printf("\n The queue is full");
	else if (f==-1||f>r)
		printf("\nThe queue is empty");
	else
		printf("\n The queue is not full");
}
