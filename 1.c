
#include<stdio.h>
int main()
{
    int arr[100];
    int size = 100;
    int i = 0;
    while(scanf("%d",&arr[i]) != EOF)
    {
        i++;
        if(i+1 > 100)
        {
            printf("Overflow\n");
            break;
        }
    }
    for(i = 0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}
