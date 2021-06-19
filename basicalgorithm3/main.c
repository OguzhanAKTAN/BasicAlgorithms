#include <stdio.h>
#include <stdlib.h>
void menu ()
{
    int secim;
    printf("1. Write a C program to check if a given number is within 2 of a multiple of 10\n");
    printf("2. Write a C program to compute the sum of the two given integers. If one of the given integer value is in the range 10..20 inclusive return 18\n");
    printf("3. Write a C program to check if it is possible to add two integers to get the third integer from three given integers\n");
    printf("4. Write a C program to check if y is greater than x, and z is greater than y from three given integers x,y,z\n");
    printf("5. Write a C program to check if two or more non-negative given integers have the same rightmost digit\n");
    printf("6. Write a C program to check three given integers and return true if one of them is 20 or more less than one of the others\n");
    printf("7. Write a C program to find the larger from two given integers. However if the two integers have the same remainder when divided by 5, then the return the smaller integer. If the two integers are the same, return 0\n");
    printf("8. Write a C program to check two given integers, each in the range 10..99. Return true if a digit appears in both numbers, such as the 3 in 13 and 33\n");
    printf("9. Write a C program to compute the sum of three given integers. If the two values are same return the third value\n");
    printf("10.Write a C program to compute the sum of the three integers. If one of the values is 13 then do not count it and its right towards the sum\n\n\n");
    scanf("%d",&secim);
    switch(secim)
    {
    case 1:
        soru1();
        menu();
        break;
    case 2:
        soru2();
        menu();
        break;
    case 3:
        soru3();
        menu();
        break;
    case 4:
        soru4();
        menu();
        break;
    case 5:
        soru5();
        menu();
        break;
    case 6:
        soru6();
        menu();
        break;
    case 7:
        soru7();
        menu();
        break;
    case 8:
        soru8();
        menu();
        break;
    case 9:
        soru9();
        menu();
        break;
    case 10:
        soru10();
        menu();
        break;
    default:
        exit(1);
    }
}
void soru1()
{
    int a;
    printf("sayiyi giriniz : ");  scanf("%d",&a);
    if(a%10<=2||a%10>=8)
    {
        printf("\n1\n\n\n");
    }
    else
    {
        printf("\n0\n\n\n");
    }
}
void soru2()
{
    int a,b;
    printf("1.sayiyi giriniz : ");  scanf("%d",&a);
    printf("2.sayiyi giriniz : ");  scanf("%d",&b);
    if((a>=10)&&(a<=20)||(b>=10)&&(b<=20))
    {
        printf("\n18\n\n\n");
    }
    else
        printf("\n%d\n\n\n",a+b);
}
void soru3()
{
    int a,b,c;
    printf("1.sayiyi giriniz : ");  scanf("%d",&a);
    printf("2.sayiyi giriniz : ");  scanf("%d",&b);
    printf("3.sayiyi giriniz : ");  scanf("%d",&c);
    if((a+b)==c)
    {
        printf("\n1\n\n\n");
    }
    else
        printf("\n0\n\n\n");
}
void soru4()
{
    int x,y,z;
    printf("x sayiyi giriniz : ");  scanf("%d",&x);
    printf("y sayiyi giriniz : ");  scanf("%d",&y);
    printf("z sayiyi giriniz : ");  scanf("%d",&z);
    if(y>x && z>y)
    {
        printf("\n1\n\n\n");
    }
    else
        printf("\n0\n\n\n");
}
void soru5 ()
{
    int x,y,z;
    printf("1. sayiyi giriniz : ");  scanf("%d",&x);
    printf("2. sayiyi giriniz : ");  scanf("%d",&y);
    printf("3. sayiyi giriniz : ");  scanf("%d",&z);
    if((x%10)==(y%10)||(y%10)==(z%10)||(z%10)==(x%10))
    {
        printf("\n1\n\n\n");
    }
    else
        printf("\n0\n\n\n");
}
void soru6 ()
{
    int x,y,z;
    printf("1. sayiyi giriniz : ");  scanf("%d",&x);
    printf("2. sayiyi giriniz : ");  scanf("%d",&y);
    printf("3. sayiyi giriniz : ");  scanf("%d",&z);
    if(abs(x-y)==20||abs(y-z)==20||abs(z-x)==20)
    {
        printf("\n1\n\n\n");
    }
    else
        printf("\n0\n\n\n");
}
void soru7 ()
{
    int a,b;
    printf("1.sayiyi giriniz : ");  scanf("%d",&a);
    printf("2.sayiyi giriniz : ");  scanf("%d",&b);
    if(a>b)
    {
        if(a%5==b%5)
        {
            printf("\n%d\n\n\n",b);
        }
        else
        {
            printf("\n%d\n\n\n",a);
        }

    }
    if(b>a)
    {
        if(a%5==b%5)
        {
            printf("\n%d\n\n\n",a);
        }
        else
        {
            printf("\n%d\n\n\n",b);
        }

    }
    if(a==b)
        printf("\n0\n\n\n");
}
void soru8 ()
{
    int a,b,z;
    printf("1.sayiyi giriniz (1-100) : ");  scanf("%d",&a);
    printf("2.sayiyi giriniz (1-100) : ");  scanf("%d",&b);
    if(a%10==b%10)
    {
        printf("\n1\n\n\n");
    }
    else
    {
        z=a/10;
        a=a-(z*10);
        z=b/10;
        b=b-(z*10);
        if(a==b)
        {
            printf("\n1\n\n\n");
        }
        else
        {
            printf("\n0\n\n\n");
        }
    }
}
void soru9 ()
{
    int x,y,z;
    printf("1. sayiyi giriniz : ");  scanf("%d",&x);
    printf("2. sayiyi giriniz : ");  scanf("%d",&y);
    printf("3. sayiyi giriniz : ");  scanf("%d",&z);
    if(x==y&&y==z)
    {
        printf("\n0\n\n\n");
    }
    if(x==y)
    {
        printf("\n%d\n\n\n",z);
    }
    if(y==z)
    {
        printf("\n%d\n\n\n",x);
    }
    if(x==z)
    {
        printf("\n%d\n\n\n",y);
    }
    if(x!=y&&y!=z&&x!=z)
    {
        printf("\n%d\n\n\n",x+y+z);
    }
}
void soru10 ()
{
    int x,y,z;
    printf("1. sayiyi giriniz : ");  scanf("%d",&x);
    printf("2. sayiyi giriniz : ");  scanf("%d",&y);
    printf("3. sayiyi giriniz : ");  scanf("%d",&z);
    if(x!=13&&y!=13&&x!=13)
    {
        printf("\n%d\n\n\n",x+y+z);
    }
    if(x==13)
    {
        printf("\n0\n\n\n");
    }
    if(y==13)
    {
        printf("\n%d\n\n\n",x);
    }
    if(z==13)
    {
        printf("\n%d\n\n\n",x+y);
    }
}
int main()
{
    menu();
}
