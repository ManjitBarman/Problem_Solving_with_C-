// what will the following line produce ina printf("%d %d %d",a,++a,a++)
#include<stdio.h>

int main()
{
    volatile int a = 10;
    printf("%d %d\n", a, a++);
  
    a = 10;
    printf("%d %d\n", a++, a);
  
    a = 10;
    printf("%d %d %d\n", a, a++, ++a);
    return 0;
}
