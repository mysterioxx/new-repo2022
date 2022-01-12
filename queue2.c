//implementation of queue using linked list
#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int data;
    struct q*next;
};
typedef struct queue q;
int main()
{
    q *f=NULL, *r=NULL, *p; 
    int ch,c;
    do{
        printf("\n 1.Enqueue 2.Dequeue 3.Display");
        printf("\nEnter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            if(f== NULL && r== NULL)
            {
                f=r=(q*)malloc(sizeof(q));
                printf("enter data:");
                scanf("%d",&f->data);
                f -> next = NULL;
                p=f;
            }
            else{
                r=(q*)malloc(sizeof(q));
                p->next=r;
                printf("enter data:");
                scanf("%d",&p->data);
                p->next=NULL;
            }
            break;

            case 2: //FOR DEQUEUE
            if(f==NULL && r==NULL)
            {
                printf("queue is empty");
            }
            else{
                if(f==r)
                {
                    p=f;
                    printf("%d is dequeued",p->data);
                    free(p);
                    f=r=NULL;
                }
                else
                {
                    p=f;
                    printf("%d is dequeued ",p->data);
                    f=f->next;
                    free(p);
                }
            }
            break;

            case 3: //FOR DISPLAY
            if(f==NULL && r==NULL)
            {
                printf("\n Nothing to display");
            }
            else{
                p=f;
                while(p!=NULL){
                    printf("%d",p->data);
                    p=p->next;
                }
            
                break;
                default: printf("wrong choice");
            }
        }
    }while(ch<=3);
}
