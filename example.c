#include <stdio.h>
#define max 5

int stack[max];
int top = -1;

void push(int item){
    if(top == max-1){
        printf("Overflow ! Exit\n");
    }else{
        stack[++top] = item;
        printf("Item %d is inserted\n", item);
    }
}

void pop(){
    if(top == -1){
        printf("Underflow ! Exit\n");
    }else{
       int item = stack[top--];
       printf("Item deleted %d\n", item);
    }
}

void display(){
    if(top == -1){
        printf("The stack is empty.\n");
    }else{
        for(int i = 0; i<=top; i++){
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice, item;
    printf("MENU: 1.PUSH\n      2.POP\n      3.DISPLAY\n      4.EXIT\n");
    while (1)
    {
        printf("Enter your choice: \n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("Enter item: \n");
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
            
            default : printf("Invalid choice\n");
        }
    }
    
   return 0;
}
