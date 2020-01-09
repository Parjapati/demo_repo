#include<stdio.h>
#include<malloc.h>
 void show_menu(){
    printf("\nPress 1 for Enter Value\n");
    printf("Press 2 for Display Values\n");
    printf("Press 3 for Delete Value\n");
    printf("Press 4 for Entering Value at a given");
    printf("\nPress 5 for Exit\n");

}
struct node
{

    int data;
    struct node *n;
};
struct node *rear=NULL,*front=NULL,*p;
void insert(){
printf("Enter the Values\n");
p=(struct node *)malloc (sizeof(struct node));
scanf("%d",&p->data);
p->n=NULL;
if(rear==NULL)
    front=rear=p;
else
{
    rear->n=p;
rear=p;
}
}
void display(){
   struct node *h=front;
while(h!=NULL)
{
    printf("\n%d\n",h->data);
    h=h->n;
}


}
void del(){
    p=front;
    front=front->n;
    free(p);
}
int main(void)
{
    //
     int a;
     do{
            show_menu();

             scanf("%d",&a);
        switch(a){
    case 1:
        insert();
        break;
    case 2:
        display();
       break;
    case 3:
        del();
        break;
    case 4:
            exit(0);
             default:
        printf("Wrong Input\n");
        break;
        }

    }while (a!=5);
    return 0;
}
