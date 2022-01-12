//implementation of stack using linked list
#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack*next;
    
};
typedef struct stack st;
int main(){
    st * top=NULL, *p;
    int ch;
    do{
        printf("\n 1.Push 2.Pop 3.Display");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch (ch){
            case 1:
            if (top==NULL){
                top=(st*)malloc(sizeof(st));
                printf("Enter data for node:");
                scanf("%d",&top -> data);
                top -> next = NULL;
            }else {
            p = (st*)malloc(sizeof(st));
            printf("Enter data for node.");
            scanf("%d",&p->data);
            p->next =top;
            top=p;
            }
            break;
            case 2:
            if(top==NULL){
                printf("Underflow.");
            }else{p=top;
            printf("%d is deleted.",p->data);
            top=top->next;
            free(p);
            }
            break;
            case 3:
            if(top==NULL){
                printf("Nothing to Display.");
            }else{
                p=top;
                while(p!= NULL){
                    printf("%d",p->data);
                    p=p->next;
                }
                break;
            }
            default:
            printf("Invalid Choice.");
            
        }
    }while(ch<=3);
}