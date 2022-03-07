#include <stdio.h>
int front=-1,rear=-1,max,item,queue[50];

void insert()
{
    if(rear==max-1)
    {
        printf("-----QUEUE OVERFLOW---------\n");
    }
    else             
    {   
        printf("Enter element to be inserted\t");
        scanf("%d",&item);
        
        if(front==-1)
            front++;
        
        rear++;
        queue[rear]=item;
        printf("inserted");
        
    }
    
}
//deletion
void delete()
{
    if(front==-1 || front>rear)
    {
        printf("----QUEUE UNDERFLOW---\n");
    }
    else{
        printf("The element popped is %d",queue[front]);
        if(front==rear)
            {front=0;rear=0;}
        else    
            front++;
    }
}
//display
void display()
{
    if(front==-1 || front>rear)
        printf("-------QUEUE IS EMPTY--------\n");
    else{
        printf("printing..........");
        for(int i=front;i<=rear;i++){
            printf("\n %d\n ",queue[i]);
            printf("workinggggggggggg");}
    }
}
int main()
{
    int n;
 //   printf("Enter the size of the queue\t");
    scanf("%d",&max);
    printf("Enter your choice\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    do
    {
        printf(" \nYOUR CHOICE:\t");
        scanf("%d",&n);
        switch (n)
        {
            case 1:
            {
                insert();
                break;
            }
            case 2:
            {
                delete(); break;
            }
            case 3:
            {
                display(); break;
            }
            case 4:
            {
                printf("---------EXIT--------\n");
                break;
            }
            default:             
            printf("Enter valid choice\n");
            
            }
    } while (n != 4);

return 0;
}
// #include<stdio.h>
// int q[30],max,front=-1,rear=-1;
// void enqueue();
// void dequeue();
// void display();
// int main()
// {
// 	int c;
// 	printf("Enter the maximun size of queue: ");
// 	scanf("%d",&max);
// 	printf("for insertion: enter 1\nfor deletion: enter 2\nfor display: enter 3\nfor exit: enter 4\n\n");
// 	do
// 	{
// 		printf("Enter the operation: ");
// 		scanf("%d",&c);
// 		switch(c)
// 		{
// 			case 1:enqueue();
// 			break;
// 			case 2:dequeue();
// 			break;
// 			case 3:display();
// 			break;
// 			case 4:printf("Exit point");
// 			break;
// 			default: printf("INVALID INPUT");
// 	    }
// 	}
// 	while(c!=4);
// 	return 0;
// }
// void enqueue()
// {
// 	int x;
// 	if(rear==max-1)
// 	printf("Queue overflow\n");
// 	else
// 	{
// 		if(front==-1)
// 		front++;
// 		printf("Enter the item to be inserted: ");
// 		scanf("%d",&x);
// 		rear++;
// 		q[rear]=x;
// 	}
// }
// void dequeue()
// {
// 	if(front==-1||front>rear)
// 	printf("queue underflow\n");
// 	else
// 	{
// 		printf("The deleted element is %d\n",q[front]);
// 		front++;
// 	}
// }
// void display()
// {
// 	int i;
// 	if(front==-1||front>rear)
// 	printf("Empty queue\n");
// 	else
// 	{
// 		for(i=front;i<=rear;i++)
// 		printf("%d    ",q[i]);
// 		printf("\n\n");
// 	}
// }