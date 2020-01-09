#include<stdio.h>
void check(int n);
int main()
{
    int a;
    int i=0;int j=0,temp=0;
    printf("Enter size ");
    scanf("%d",&a);
    int arr[a][a];
    int arr_temp[a];
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("\n####################\n");

    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d",arr[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for(i=0;i<a;i++)
    {

        for(j=0;j<a;j++)
        {
            if(arr[j][i]==0)
            {
                ++temp;
            }
        }
        arr_temp[i]=temp;
        temp=0;
        j=0;

    }
printf("\n####################\n");
    temp=arr_temp[0];
    for(i=1;i<a;i++)
    {
       printf("%d \t" , arr_temp[i]);
       if(temp<arr_temp[i])
        j=i;	
    }
    printf("\nLargest element is at %d " ,j+1);
getch();
}

