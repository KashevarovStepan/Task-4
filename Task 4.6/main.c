#include <stdio.h>
#include <stdlib.h>

void sum(int*a,int*b,int c,int d)
{
    int p=*a, q=*b;
    p=p*d+c*q;
    q=q*d;
    cancel(&p,&q);
    *a=p;
    *b=q;
}

void cancel(int*p,int*q)
{
    int a=*p,b=*q;
    int nod=NOD(a,b);
    a=a/nod;
    b=b/nod;
    *p=a;
    *q=b;
}

int NOD(int x,int y)
{
    int nod=1;
    int min;
    if(abs(x)<=abs(y))min=x;
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

int main()
{
    SetConsoleOutputCP(1251);
    printf("Task 4.6 Сложение дробей\n");
    printf("Введите 4 целых числа через пробел\n");
    printf("Числитель1 Знаменатель1 Числитель2 Знаменатель2\n");
    int a,b,c,d,p,q;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(b!=0&&d!=0)
    {
        p=a;q=b;
        sum(&p,&q,c,d);
        printf("(%d/%d)+(%d/%d)=(%d/%d)",a,b,c,d,p,q);
    }
    else printf("Неверные данные");
    return 0;
}
