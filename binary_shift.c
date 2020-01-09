#include<stdio.h>
int main()
{
    int a=1,i=0,j=0;
    int c=a>>2;
    printf("%d",c);
    char ch='A';
    printf("\n%c" , ++c);
    char a1[5] ="Abc";
    for(i=0;i<5;i++)
        printf(" q%d \n",a1[i]);
    printf("%c",a1[3]);
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<1)
            {
                printf("%d i is ",i);
                break;
            }

            printf("\nHi1");
        }
        printf("\nHi3");
    }
    int t=1,b=2;
    t==b?b=0:2;
    printf("z\n %d c is \n %d a is ",t,b);
    return 0;
}
