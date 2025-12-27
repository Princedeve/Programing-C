#include <stdio.h>
#define max 5

int stack[max];
int top = -1;

void push(int item){
    if(top == max-1){
        printf("Overflow ! Exit\n");
    }else{
        stack[++top] = item;
        printf("%d Item inserted \n ", item );
    }
}

void pop(){
    if(top == -1){
        printf("Underflow ! Exit\n");
    }else{
        int item = stack[top--];
        printf("%d Item deleted \n", item);
    }
}

void display(){
    if(top == -1){
        printf("The stack is empty \n");
    }else{
        printf("Stack element: ");
        for(int i = 0; i<=top; i++){
        printf("%d ", stack[i]);
    }
    printf("\n");
    }
}

int main(){
    int choice, item;

 while (1)
    {
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("Enter item: ");
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
        return 0;

        default:
        printf("Invalid choice\n");

        }
    }
    
    return 0;
}