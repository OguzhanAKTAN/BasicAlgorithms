#include <stdio.h>
#include <stdlib.h>
void menu ()
{
    int secim;
    printf("1. Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum\n");
    printf("2. Write a C program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference\n");
    printf("3. Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30\n");
    printf("4. Write a C program to check a given integer and return true if it is within 10 of 100 or 200\n");
    printf("5. Write a C program to check if a given positive number is a multiple of 3 or a multiple of 7\n");
    printf("6. Write a C program to check if one given temperatures is less than 0 and the other is greater than 100\n");
    printf("7. Write a C program to check two given integers whether either of them is in the range 100..200 inclusive\n");
    printf("8. Write a C program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the said range otherwise return false\n");
    printf("9. Write a C program to check whether two given integer values are in the range 20..50 inclusive. Return true if 1 or other is in the said range otherwise false\n");
    printf("10. Write a C program to check which number nearest to the value 100 among two given integers. Return 0 if the two numbers are equal\n");
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
    if(a==b || b==a)
    {
        printf("Sonuc = %d\n",(a+b)*3);
    }
    else
    {
        printf("Sonuc = %d\n",(a+b));
    }
}
void soru2()
{
    int sayi;
    printf("Sayiyi giriniz : ");    scanf("%d",&sayi);
    if(sayi<=51)
    {
        printf("Sonuc = %d\n",(51-sayi));
    }
    else
    {
        printf("Sonuc = %d\n",(sayi-51)*3);
    }
}
void soru3()
{
    int a,b;
    printf("1.sayiyi giriniz : ");  scanf("%d",&a);
    printf("2.sayiyi giriniz : ");  scanf("%d",&b);
    if(a==30 || b==30 || (a+b)==30)
    {
        printf("1\n");
    }
    else
        printf("2\n");
}
void soru4()
{
    int sayi;
    printf("Sayiyi giriniz : ");    scanf("%d",&sayi);
    if(abs(sayi-100) <= 10 || abs(sayi-200) <= 10)
    {
        printf("1\n");
    }
    else
        printf("2\n");

}
void soru5 ()
{
    int sayi;
    printf("Sayiyi giriniz : ");    scanf("%d",&sayi);
    if((sayi%3)==0 || (sayi%7)==0)
    {
        printf("1\n");
    }
    else
    {
        printf("2\n");
    }

}
void soru6 ()
{
    int a,b;
    printf("1.sayiyi giriniz : ");  scanf("%d",&a);
    printf("2.sayiyi giriniz : ");  scanf("%d",&b);
    if((a<0 && b>100)||(b<0 && a>100))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

}
void soru7 ()
{
    int a,b;
    printf("1.sayiyi giriniz : ");  scanf("%d",&a);
    printf("2.sayiyi giriniz : ");  scanf("%d",&b);
    if((a>=100 && a<=200) || (b>=100 && b<=200))
    {
        printf("1\n");
    }
    else
        printf("0\n");
}
void soru8 ()
{
    int a,b,c;
    printf("1.sayiyi giriniz : ");  scanf("%d",&a);
    printf("2.sayiyi giriniz : ");  scanf("%d",&b);
    printf("3.sayiyi giriniz : ");  scanf("%d",&c);
    if((a>=20 && a<=50)||(b>=20 && b<=50)||(c>=20 && c<=50))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}
void soru9 ()
{
    int a,b;
    printf("1.sayiyi giriniz : ");  scanf("%d",&a);
    printf("2.sayiyi giriniz : ");  scanf("%d",&b);
    if((a>=20 && a<=50)||(b>=20 && b<=50))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}
void soru10 ()
{
    int a,b,fark;
    printf("1.sayiyi giriniz : ");  scanf("%d",&a);
    printf("2.sayiyi giriniz : ");  scanf("%d",&b);
    if(a==b || b==a || a<0 || b<0)
    {
       printf("0\n");
    }
    else if((100-a)<(100-b))
    {
        printf("%d",a);
    }
    else if((100-b)<(100-a))
    {
        printf("%d",b);
    }
}
int main()
{
    menu();
}
