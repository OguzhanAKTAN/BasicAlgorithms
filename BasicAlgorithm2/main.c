#include <stdio.h>
#include <stdlib.h>
void menu ()
{
    int secim;
    printf("1. Write a C program to check whether two given integers are in the range 40..50 inclusive, or they are both in the range 50..60 inclusive\n");
    printf("2. Write a C program to find the larger value from two positive integer values that is in the range 20..30 inclusive, or return 0 if neither is in that range\n");
    printf("3. Write a C program to check if two given non-negative integers have the same last digit\n");
    printf("4. Write a C program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere\n");
    printf("5.  Write a C program to count the number of two 5's are next to each other in an array of integers. Also count the situation where the second 5 is actually a 6\n");
    printf("6. Write a C program to check if a triple is presents in an array of integers or not. If a value appears three times in a row in an array it is called a triple\n");
    printf("7. Write a C program to compute the sum of the two given integers. If the sum is in the range 10..20 inclusive return 30\n");
    printf("8. Write a C program that accept two integers and return true if either one is 5 or their sum or difference is 5\n");
    printf("9. Write a C program to to test if a given non-negative number is a multiple of 13 or it is one more than a multiple of 13\n");
    printf("10. Write a C program to check if a given non-negative given number is a multiple of 3 or 7, but not both\n\n\n");
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
    int a,b;
    printf("1.sayiyi giriniz : ");  scanf("%d",&a);
    printf("2.sayiyi giriniz : ");  scanf("%d",&b);
    if(((a>=40&&a<=50) && (b>=40&&b<=50)) || ((a>=50&&a<=60) && (b>=50&&b<=60)))
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
    if((a>=20 && a<=30) && (b>=20 && b<=30))
    {
        if(a>b)
        {
            printf("\n%d\n\n\n",a);
        }
        if(b>a)
        {
            printf("\n%d\n\n\n",b);
        }
        if(a==b || b==a)
        {
            printf("\n0\n\n\n");
        }
    }
    else
    {
        printf("\n0\n\n\n");
    }
}
void soru3()
{
    int a,b;
    printf("1.sayiyi giriniz : ");  scanf("%d",&a);
    printf("2.sayiyi giriniz : ");  scanf("%d",&b);
    if((abs(a)%10)==(abs(b)%10))
    {
        printf("1\n");
    }
    else
        printf("0\n");
}
void soru4()
{
    int sayi[5],i=0;
    for(i=0;i<5;i++)
    {
        printf("Sayi dizisinin %d. sayisini giriniz : ",i);   scanf("%d",&sayi[i]);

    }
    for(i=0;i<5;i++)
    {
        if(sayi[i]==1 && sayi[i+1]==2 && sayi[i+2]==3)
        {
            printf("\n1\n\n\n");
            break;
        }
    }
    if(i==4)
    {
        printf("\n0\n\n\n");
    }

}
void soru5 ()
{
    int sayi[5],i=0,sayac=0,sayac2=0;
    for(i=0;i<5;i++)
    {
        printf("Sayi dizisinin %d. sayisini giriniz : ",i);   scanf("%d",&sayi[i]);

    }
    for(i=0;i<5;i++)
    {
        if(sayi[i]==5 && sayi[i+1]==5)
        {
            sayac++;
        }
        if(sayi[i]==5 && sayi[i+1]==6)
        {
            sayac2++;
        }
    }
        printf("\n iki yanyana 5 = %d\n bir 5 bir 6 = %d\n\n\n",sayac,sayac2);

}
void soru6 ()
{
    int sayi[10],i=0;
    for(i=0;i<10;i++)
    {
        printf("Sayi dizisinin %d. sayisini giriniz(0-10) : ",i);   scanf("%d",&sayi[i]);

    }
    for(i=0;i<10;i++)
    {
        if(sayi[i]==sayi[i+1] && sayi[i+1]==sayi[i+2])
        {
            printf("\n1\n\n\n");
            break;
        }
    }
    if(i==9)
    {
        printf("\n0\n\n\n");
    }

}
void soru7 ()
{
    int a,b;
    printf("1.sayiyi giriniz : ");  scanf("%d",&a);
    printf("2.sayiyi giriniz : ");  scanf("%d",&b);
    if((a+b>=10)&&(a+b<=20))
    {
        printf("\n30\n\n\n");
    }
    else
        printf("\n%d\n\n\n",a+b);
}
void soru8 ()
{
    int a,b;
    printf("1.sayiyi giriniz : ");  scanf("%d",&a);
    printf("2.sayiyi giriniz : ");  scanf("%d",&b);
    if(a==5 || b==5 || (a+b==5) || (a-b==5))
    {
        printf("\n1\n\n\n");
    }
    else
        printf("\n0\n\n\n");
}
void soru9 ()
{
    int a;
    printf("sayiyi giriniz : ");  scanf("%d",&a);
    if((a%13==0)||(a%13==1))
    {
        printf("\n1\n\n\n");
    }
    else
    {
        printf("\n0\n\n\n");
    }
}
void soru10 ()
{
    int a;
    printf("sayiyi giriniz : ");  scanf("%d",&a);
    if((a%3==0)&&(a%7==0))
    {
        printf("\n0\n\n\n");
        return 0;
    }
    if((a%3==0)||(a%7==0))
    {
        printf("\n1\n\n\n");
    }
    else
    {
        printf("\n0\n\n\n");
    }
}
int main()
{
    menu();
}
