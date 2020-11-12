#include <stdio.h>
#define maxSize 10
int queue[maxSize];
int frnd=-1,rear=-1;
void displayQueue(){
    if(frnd==-1&&rear==-1)
        printf("Queue is Empty\n");
    else{
        int i;
        printf("Queue\n");
        for(i=frnd;i<=rear;i++)
            printf("%d\n",queue[i]);
    }
}
void enQueue(int item){
    if(frnd=-1)
        frnd++;
    if(rear==maxSize-1)
        printf("Queue is Overflow\n");
    else{
        queue[++rear]=item;
        displayQueue();
    }
}
void deQueue(){
    if(frnd==-1&&rear==-1)
        printf("Queue is Underflow\n");
    else if(frnd==rear){
        frnd=-1;
        rear=-1;
        displayQueue();
    }
    else{
        frnd++;
        displayQueue();
    }
}
void main(){
    int dis;
    int item;
    printf("\tQueue Menu\t\n");
    printf("1-Enqueue\n2-Dequeue\n3-Exit\n");
    do{
        printf("\nEnter\t");
        scanf("%d",&dis);
        switch(dis){
            case 1:printf("Enter element\t");
                    scanf("%d",&item);
                    enQueue(item);
                    break;
            case 2:deQueue();
                    break;
            case 3:break;
            default:printf("wrong input\n");
                     printf("\tQueue Menu\t\n");
                     printf("1-Enqueue\n2-Dequeue\n3-Exit\n");
        }
    }while(dis!=3);
}