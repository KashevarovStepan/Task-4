#include <stdio.h>
#include <stdlib.h>

int NOD(int x,int y)
{
    int nod=1;
    int min;
    if(x<=y)min=x;
    else min=y;
    for(int i=min;i>=1;i--)
    {
        if(x%i==0&&y%i==0)
        {
            if(nod/i==0)nod=nod*i;
            else;
        }
        else;
    }
    return nod;
}

int NOK(int x, int y)
{
    int nod=NOD(x,y);
    int nok=x*y/nod;
}

int main()
{
    SetConsoleOutputCP(1251);
    int a,b,c,nokab,nokabc;
    printf("Task 4.5 Нахождение НОК 3 чисел\n");
    printf("Введите 3 целых числа через пробел:\n");
    scanf("%d %d %d",&a,&b,&c);
    a=abs(a);
    b=abs(b);
    c=abs(c);
    nokab=NOK(a,b);
    nokabc=NOK(nokab,c);
    printf("HOK=%d",nokabc);
    return 0;
}
