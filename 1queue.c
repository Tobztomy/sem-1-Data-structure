#include <stdio.h>
#include <stdlib.h>
#define MAX 50
void insert();
void delete();
void display();
int queue_array[MAX];
int rear=-1;
int front=-1;
void main()
{
int ch;
while(ch!=6)
{
printf("1.insert element to queue 2.delete element from queue 3.display all elements of queue 4.display the value of front 5.display the value of rear 6.Quit ");
printf("enter your choice /n:");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
printf("the value of front is %d \n",queue_array[front]);
break;
case 5:
printf("the value of rear is %d \n",queue_array[rear]);
break;
case 6:
exit;
default:
printf("wrong choice \n");
}
}
}


void insert()
{
int add_item;
if(rear==MAX -1)
printf("Queue overflow \n");
else
{
if(front==-1)
front =0;
printf("insert the element in queue :");
scanf("%d",&add_item);
rear= rear+1;
queue_array[rear]=add_item;
}
}



void delete()
{
if(front==-1|| front>rear)
{
printf("queue underflow \n");
return;
}
else
{
printf("element deleted from queue is:%d \n",queue_array[front]);
front =front +1;
}
}



void display()
{
int i;
if(front ==-1)
printf("Queue is empty \n");
else
{
printf("queue is:\n");
for(i=front;i<=rear;i++)
printf("%d ",queue_array[i]);
printf("\n");
}
}
