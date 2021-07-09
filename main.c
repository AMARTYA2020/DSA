#include<stdio.h>
#include<stdlib.h>
struct Queue{

    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue*q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int*)malloc(q->size*sizeof(int));

}

void enque(struct Queue*q,int x)
{

    if(q->rear==q->size-1)
        printf("Queue is full \n");
    else{
        // q->rear++;
        q->Q[q->++rear]=x;
    }
}

void dequeue(struct Queue*q)
{
    int x=-1;
    if(q->front==q->rear)
        printf("Queue is empty \n");
    else{
       // q->front++;
        x=q->Q[q->++front];
    }
    return x;
}

void display(struct Queue q)
{

    for(int i=q.front+1;i<=q.rear;i++){
        printf("%d",q.Q[i]);
        printf("\n");
    }
}

int main()
{
    struct Queue q;
    create(&q,5);
    enque(&q,1);
    enque(&q,2);
    enque(&q,3);
    enque(&q,4);
    display(q);
    return 0;
}
