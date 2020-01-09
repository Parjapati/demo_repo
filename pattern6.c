#include<stdio.h>

int main()
{
    int i ,j,k=0;
    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<9;j++)
        {
            if(j<5-i ||j>3+i)
            {
             printf("*");
             k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }

        }
    printf("\n");
    }
}
