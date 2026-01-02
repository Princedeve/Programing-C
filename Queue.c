#include<stdio.h>
#define MAX 4
int queue[MAX];
int front = -1, rear = -1;

void push(int item){
    if(rear == MAX-1){
        printf("Overflow exit\n");
    }else{
        if(front == -1){
            front = rear = 0;
        }else{
            rear++;
        }
        queue[rear] = item;
        printf("%d Item inserted\n", item);
    }
}

void pop(){
    if(front == -1){
        printf("Underflow exit\n");
    }else{
        int item = queue[front];
        if(front == rear){
            front = rear = -1;
        }else{
            front++;
        }
        printf("%d Item deleted\n", item);
    }
}

void display(){
    if(front == -1){
        printf("The queue is empty. \n");
    }else{
        printf("Queue Elements: "); 
        for(int i = front; i<=rear; i++){
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice, item;
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
            printf("Enter your item: ");
            scanf("%d", &item);
            push(item);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
             printf("Now you have exit!");
            return 0;
        default:
        printf("Invalid choice!! \n");
        }
    }
    
    return 0;
}