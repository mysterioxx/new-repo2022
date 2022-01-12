//implementation of queue using array
#include<stdio.h>
int queue[6];
int front,rear,i;
int main()
{
    int choice, info;
    front=rear=-1;
    do{
        printf("\n 1.Enquue 2.Dequeue 3.Display ");
        printf("\n Enter Choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            if (rear==5)
            {
                printf("\n Over flow");
            }
            else if(front==-1 && rear ==-1)
            {
                front++;
                rear++;
                printf("Enter data:");
                scanf("%d",&info);
                queue[front]=info;
            }
            else{
                rear++;
                printf("Enter data");
                scanf("%d",&info);
                queue[rear]=info;
            }
            break;
            
            case 2:
            if(front==-1 && rear==-1)
            {
                printf("Underflow");
            }
            else{
                if (front==rear){
                    printf("%d is dequeued",queue[front]);
                    front=-1;
                    rear=-1;
                }
                else{
                    printf("%d is dequeued",queue[front]);
                    front++;
                }
            }
            break;

            case 3:
            if(front==-1 && rear==-1)
            {
                printf("Queue is empty\n");
            }
            else{
                for(i=front;i<=rear;i++)
                {
                    printf("%d",queue[i]);
                }
            }
            break;
        }
    }while(choice==1 || choice==2 || choice==3);
    return 0;
}
