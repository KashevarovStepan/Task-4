#include <stdio.h>
#include <stdlib.h>

int NOD(int x,int y)
{
    while(x!=0&&y!=0)
    {
        if(x>y)x=x%y;
        else y=y%x;
    }
    return x+y;
}

int NOK(int x, int y)
{
    int nod=NOD(x,y);
    int nok=x*y/nod;
    return nok;
}

int main()
{
    SetConsoleOutputCP(1251);
    int a,b,c,nok;
    printf("Task 4.5 Нахождение НОК 3 чисел\n");
    printf("Введите 3 целых числа через пробел:\n");
    scanf("%d %d %d",&a,&b,&c);
    a=abs(a);
    b=abs(b);
    c=abs(c);
    nok=NOK(NOK(a,b),c);
    printf("HOK=%d",nok);
    return 0;
}
