#include <stdio.h> 
int front=-1,rear=-1,max,item,cqueue[50];

void insert(int val){
    if ((front == 0 && rear == max-1) || (front == rear+1)) {
      printf("Queue Overflow \n");
      return;
   }
   if (front == -1) {
      front = 0;
      rear = 0;
   }
   else {
      if (rear == max - 1)
         rear = 0;
      else
         rear = rear + 1;
   }
   cqueue[rear] = val ;
}
//delete
void delete()
{
    //front front  greater than rear means no elements after that
    if(front==-1 || front>rear)
    {
        printf("----QUEUE UNDERFLOW---\n");
    }
   
    else {
         printf("The element popped is %d",cqueue[front]);
        //front at max-1 position
        if(front==max-1)
        {
            front=0;
        }
        //has only one element
        else if(front==rear){
            front=-1;
            rear=-1;
        }
        else
            front++;
    }
}

void display(){
   int f = front, r = rear;
   if (front == -1) {
       printf("Queue is empty\n");
      return;
   }
   printf(" Queue elements are :\n");
   //printing elements as normal q(part1)
   if (f <= r) {
      while (f <= r){
          printf("%d\t", cqueue[f]);
         f++;
      }
   }
   //printing when its circular q
   else {
      while (f <= max - 1) {
          printf("%d",cqueue[f]);
         f++;
      }
      //printing after max-1
      f = 0;
      while (f <= r) {
          printf("%d",cqueue[f]);
         f++;
      }
   }
   
}  
    

int main(){
    int n;
    printf("Enter the size of the cqueue\t");
    scanf("%d",&max);
    printf("Enter your choice\n1.Insert\n2.Delete\n3.Exit\n");
    do
    {
        printf(" \nYOUR CHOICE:\t");
        scanf("%d",&n);
        switch (n)
        {
            case 1:
            {
                printf("Enter element to be inserted\t");
                scanf("%d",&item);
                insert(item);
                display();
                break;
            }
            case 2:
            {
                delete();
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



