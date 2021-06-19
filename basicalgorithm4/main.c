#include <stdio.h>
#include <stdlib.h>
void menu ()
{
    int secim;
    printf("1. Write a C program to compute the sum of the three given integers. However, if any of the values is in the range 10..20 inclusive then that value counts as 0, except 13 and 17\n");
    printf("2. Write a C program to check two given integers and return the value whichever value is nearest to 13 without going over. Return 0 if both numbers go over\n");
    printf("3. Write a C program to check three given integers (small, medium and large) and return true if the difference between small and medium and the difference between medium and large is same\n");
    printf("4. Write a C program to check a given array of integers of length 1 or more and return true if the first element and the last element are equal in the given array\n");
    printf("5. Write a C program to check two given arrays of integers of length 1 or more and return true if they have the same first element or they have the same last element\n");
    printf("6. Write a C program to compute the sum of the elements of an given  array of integers\n");
    printf("7. Write a C program to rotate the elements of a given array of integers (length 4 ) in left direction and return the new array\n");
    printf("8. Write a C program to reverse a given array of integers and length 5\n");
    printf("9. Write a C program to create a new array containing the middle elements from the two given arrays of integers, each length 5\n");
    printf("10.Write a C program to create a new array taking the first and last elements of a given array of integers and length one or more\n\n\n");
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
    int a,b,c;
    printf("1.sayiyi giriniz : ");  scanf("%d",&a);
    printf("2.sayiyi giriniz : ");  scanf("%d",&b);
    printf("3.sayiyi giriniz : ");  scanf("%d",&c);
    if(a>=10 && a<=20)
    {
        if(a==13||a==17)
        {}
        else
        a=0;
    }
    if(b>=10 && b<=20)
    {
        if(b==13||b==17)
        {}
        else
        b=0;
    }
    if(c>=10 && c<=20)
    {
        if(c==13||c==17)
        {}
        else
        c=0;
    }
        printf("\n%d\n\n\n",a+b+c);
}
void soru2()
{
    int a,b;
    printf("1.sayiyi giriniz : ");  scanf("%d",&a);
    printf("2.sayiyi giriniz : ");  scanf("%d",&b);
    if(a>13 && b>13)
    {
        printf("\n0\n\n\n");
    }
    if(a<=13 && b>13)
    {
        printf("\n%d\n\n\n",a);
    }
    if(b<=13 && a>13)
    {
        printf("\n%d\n\n\n",b);
    }
    if(a<13 && b<13)
    {
        if(a>b)
        {
            printf("\n%d\n\n\n",a);
        }
        else
            printf("\n%d\n\n\n",b);
    }
}
void soru3()
{
    int a,b,c;
    printf("kucuk sayiyi giriniz : ");  scanf("%d",&a);
    printf("ortanca sayiyi giriniz : ");  scanf("%d",&b);
    printf("buyuk sayiyi giriniz : ");  scanf("%d",&c);
    if((b-a)==(c-b))
    {
        printf("\n1\n\n\n");
    }
    else
        printf("\n0\n\n\n");
}
void soru4()
{
    int sayilar[5];
    for(int i=0;i<5;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    if(sayilar[0]==sayilar[4])
    {
        printf("\n1\n\n\n");
    }
    else
        printf("\n0\n\n\n");
}
void soru5 ()
{
    int sayilar[5],sylar2[5];
    for(int i=0;i<5;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("2. Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sylar2[i]);
    }
    if((sayilar[0]==sylar2[0]) || (sayilar[4]==sylar2[4]))
    {
        printf("\n1\n\n\n");
    }
    else
        printf("\n0\n\n\n");
}
void soru6 ()
{
    int sayilar[5],toplam=0;
    for(int i=0;i<5;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
        toplam+=sayilar[i];
    }
        printf("\n%d\n\n\n",toplam);
}
void soru7 ()
{
    int sayilar[4];
    for(int i=0;i<4;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    printf("\nEski Dizi : ");
    for(int i=0;i<4;i++)
    {
        printf("\t%d",sayilar[i]);
    }
    printf("\n");
    printf("\nYeni Dizi : %d    %d    %d   %d",sayilar[1],sayilar[2],sayilar[4],sayilar[0]);
    printf("\n");

}
void soru8 ()
{
    int sayilar[5];
    for(int i=0;i<5;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    printf("\nEski Dizi : ");
    for(int i=0;i<5;i++)
    {
        printf("\t%d",sayilar[i]);
    }
    printf("\n");
    printf("\nYeni Dizi : ");
    for(int i=4;i>-1;i--)
    {
        printf("\t%d",sayilar[i]);
    }
    printf("\n");
}
void soru9 ()
{
    int sayilar[5],sylar2[5],dizi3[2];
    for(int i=0;i<5;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("2. Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sylar2[i]);
    }
    dizi3[0]=sayilar[2];
    dizi3[1]=sylar2[2];
    printf("\n%d %d\n\n\n",dizi3[0],dizi3[1]);
}
void soru10 ()
{
    int sayilar[5],dizi3[2];
    for(int i=0;i<5;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    dizi3[0]=sayilar[0];
    dizi3[1]=sayilar[4];
    printf("\n%d %d\n\n\n",dizi3[0],dizi3[1]);
}
int main()
{
    menu();
}
