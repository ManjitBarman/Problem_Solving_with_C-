/* 
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1*/

#include<stdio.h>
int main()
{
    int i,j,no;
    //printf("Enter the number no: ");
    //scanf("%d", &no);
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=7-i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

