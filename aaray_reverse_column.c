#include<stdio.h>
void reverse(int r, int c);

int main()
{
    int r=0,c=0;
    int i=0,j=0;
    int temp=0;
    printf("Enter rows");
    scanf("%d",&r);
    printf("Enter columns");
    scanf("%d",&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
            printf("\t");
        }
        printf("\n");
    }


    printf("\n###########\n");

for(i=0;i<r;i++)
    {
      temp=a[i][0];
      a[i][0]=a[i][c-1];
      a[i][c-1]=temp;
    }
    printf("\n");
for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    return 0;
}
