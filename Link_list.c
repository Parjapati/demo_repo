#include<stdio.h>

struct link_list{
int data;
struct link_list* p;
};
struct link_list *head=NULL,*p;
void insert()
{
    printf("Hello world");
}
int main()
{
    int i=0,a=0;
    printf("Enter your choice");

    do{
                printf("\n1 for insert ");
    printf("\n2 for Read ");
    printf("\n3 for delete\n ");
    scanf("%d",&a);
        switch(a)
        {
            case 1:
                insert();
                break;
            default:
                printf("Wrong Case");
                break;
        }
    }while(a!=5);
    return 0;
}
