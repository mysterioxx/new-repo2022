//implementation of stack using array
#include<stdio.h>
#define MAX 100
int main()
{
    int stack[MAX],top=-1,ch,ele,x,i;
    do{
        printf("\n 1.PUSH 2.POP 3.DISPLAY");
        printf("\n Enter your choice.");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            if(top==MAX-1)
            {
                printf("\n Overflow.");
            }
            else{
                printf("Enter element that to be pushed.");
                scanf("%d",&ele);
                top=top+1;
                stack[top]=ele;
            }
            break;
            case 2:
            if(top==-1){
                printf("\n Underflow.");
            }
            else{
                x=stack[top];
                printf("%d is deleted",x);
                top=top-1;
            }
            break;
            case 3:
            if(top==-1){
                printf("Nothing to display.");
            }
            else{
                printf("Elements of stack are:");
                for(i=top;i>=0;i--)
                {
                    printf("%d \t",stack[i]);
                }
            }
            break;
            default:
            printf("Enter correct choice.");
            break;
        }
    }while(ch==1||ch==2||ch==3);
}