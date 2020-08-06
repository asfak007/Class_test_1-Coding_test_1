#include<stdio.h>
int main ()
{
    int arr[10] = {1, 2, 3, 4, 5, 6,7, 8, 9,10};
    int i, j, X;
    int tag = 0;
    int size = 10;

    for(i=0; i<size; i++)
        {
            printf("%d ",arr[i]);
        }


    printf("\n");


    scanf("%d",&X);

    for( i = 0; i<=size; i++)
    {
        if(X == arr[i])
        {
            for(j=i; j <= size; j++)
            {
                arr[j] = arr[j+1];
            }
            size--;
            tag++;
            i--;
        }
    }

    if(tag == 0)
    {
        printf("Not Found");
    }
    else
    {
        for(i = 0; i<size; i++)
            printf("%d ",arr[i]);
    }

    return 0;
}
