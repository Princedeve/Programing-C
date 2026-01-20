#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void beginsert();
void lastinsert();
void random_insert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();

int main(){
    int choice = 0;
    while (choice != 9)
    {
        printf("\n...Choose One Option from the following List...\n");
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert item at any location\n4.Delete from Begining\n5.Delete from last\n6.Delete item from any location\n7.Search\n8.Show\n9.Exit\n");
        
        printf("\nEnter your choice: ");
        scanf("\n%d", &choice);

        switch (choice)
        {
        case 1:
            beginsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            random_insert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            random_delete();
            break; 
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;        
        default:
            printf("Invalid Choice..");
        }
    }
    return 0;
    
}
void beginsert(){
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL){
        printf("\nOVERFLOW");
    }
    else{
        printf("\nEnter value: ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("Item inserted");
    }
}