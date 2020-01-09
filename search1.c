#include<stdio.h>
void main()
{

    int a[5],j=0,k=0,i=0,cou=0;
    for(j=0;j<5;j++)
    {
        scanf("%d",&a[j]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cou++;
        if(a[i]<a[j])
        {

            k=a[i];
            a[i]=a[j];
            a[j]=k;

        }
        }
    }
       for(i=0;i<5;i++)
        printf("%d",a[i]);


        printf("\n\n%d",cou);
}
