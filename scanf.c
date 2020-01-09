#include <stdio.h>

int
main(void)
{
    int n;
    int i ,j=11,k=50,l=30;
    i=(++j,k++,++l);
    int *p;
    char cgh="jkdsg";
    p=&cgh;
    if(printf("%s","hello"))
        printf("%s","world");
    printf("\n%s \n",*(p+1));
    float f=0.1;
    if(f!=0.1)
        printf("true");
    else
        printf("false");
    return 0;
}
