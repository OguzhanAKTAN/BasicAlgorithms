#include <stdio.h>
#include <stdlib.h>
void menu ()
{
    int secim;
    printf("1. Write a C program to count even number of elements in a given array of integers\n");
    printf("2. Write a C program to compute the sum of values in a given array of integers except the number 17. Return 0 if the given array has no integer\n");
    printf("3. Write a C program to compute the sum of the numbers in a given array except those numbers starting with 5 followed by atleast one 6. Return 0 if the given array has no integer\n");
    printf("4. Write a C program to check if a given array of integers contains 5 next to a 5 somewhere\n");
    printf("5. Write a C program to check whether a given array of integers contains 5's and 7's\n");
    printf("6. Write a C program to check if the sum of all 5' in the array exactly 15 in a given array of integers\n");
    printf("7. Write a C program to check if the number of 3's is greater than the number of 5's\n");
    printf("8. Write a C program to check if a given array of integers contains a 3 or a 5\n");
    printf("9. Write a C program to create a new array of length 3 from a given array (length atleast 3) containing the elements from the middle of the array\n");
    printf("10.Write a C program to check if an array of integers contains a 3 next to a 3 or a 5 next to a 5 or both\n\n\n");
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
    int sayilar[7],sayac=0;
    for(int i=0;i<7;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
        if(sayilar[i]%2==0)
            sayac++;
    }
    printf("\nCift Sayilar=%d\n\n\n",sayac);
}
void soru2()
{
    int sayilar[8],toplam=0;
    for(int i=0;i<8;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
        if(sayilar[i]==17)
        {
            sayilar[i]=0;
        }
        toplam+=sayilar[i];
    }
    printf("\n17 Haric dizinin toplami=%d\n\n\n",toplam);
}
void soru3()
{
    int sayilar[8],toplam=0;
    for(int i=0;i<8;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    for(int i=0;i<8;i++)
    {
        if(sayilar[i]==5&&sayilar[i+1]==6)
        {
            sayilar[i]=0;
            sayilar[i+1]=0;
        }
        toplam+=sayilar[i];
    }
    printf("\n5,6 haric dizinin toplami=%d\n\n\n",toplam);
}
void soru4()
{
    int sayilar[6];
    for(int i=0;i<6;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    for(int i=0;i<6;i++)
    {
        if(sayilar[i]==5&&sayilar[i]==sayilar[i+1])
        {
            printf("\n1\n\n\n");
            break;
        }
        else
        {
            printf("\n0\n\n\n");
            break;
        }
    }
}
void soru5 ()
{
    int sayilar[6];
    for(int i=0;i<6;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    for(int i=0;i<6;i++)
    {
        if(sayilar[i]==5 || sayilar[i]==7)
        {
            printf("\n1\n\n\n");
            break;
        }
        printf("\n0\n\n\n");
    }
}
void soru6 ()
{
    int sayilar[5],toplam=0;
    for(int i=0;i<5;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(sayilar[i]==5)
        {
            toplam+=sayilar[i];
        }
    }
    if(toplam==15)
    {
        printf("\n1\n\n\n");
    }
    else
    {
        printf("\n0\n\n\n");
    }
}
void soru7 ()
{
    int sayilar[6],sayac3=0,sayac5=0;
    for(int i=0;i<6;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    for(int i=0;i<6;i++)
    {
        if(sayilar[i]==3)
        {
            sayac3++;
        }
        if(sayilar[i]==5)
        {
            sayac5++;
        }
    }
    if(sayac3>sayac5)
    {
        printf("\n3'lerin sayisi =%d\n\n\n",sayac3);
    }
    else
    {
        printf("\n5'lerin sayisi =%d\n\n\n",sayac5);
    }

}
void soru8 ()
{
    int sayilar[6],sayac3=0,sayac5=0;
    for(int i=0;i<6;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    for(int i=0;i<6;i++)
    {
        if(sayilar[i]==3)
        {
            sayac3++;
        }
        if(sayilar[i]==5)
        {
            sayac5++;
        }
    }
    if(sayac3!=0||sayac5!=0)
    {
        printf("\n1\n\n\n");
    }
    else
    {
        printf("\n0\n\n\n");
    }
}
void soru9 ()
{
    int sayilar[6],sayac3=0,sayac5=0;
    for(int i=0;i<6;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    for(int i=0;i<6;i++)
    {
        if(sayilar[i]==3)
        {
            sayac3++;
        }
        if(sayilar[i]==5)
        {
            sayac5++;
        }
    }
    if(sayac3!=0&&sayac5!=0)
    {
        printf("\n0\n\n\n");
    }
    else
    {
        printf("\n1\n\n\n");
    }
}
void soru10 ()
{
    int sayilar[6],sayac3=0,sayac5=0,sayac2=0;
    for(int i=0;i<6;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    for(int i=0;i<6;i++)
    {
        if(sayilar[i]==3&&sayilar[i+1]==3)
        {
            sayac3++;
        }
        if(sayilar[i]==5&&sayilar[i+1]==5)
        {
            sayac5++;
        }
        if((sayilar[i]==3&&sayilar[i+1]==5)||(sayilar[i]==5&&sayilar[i+1]==3))
        {
            sayac2++;
        }
    }
    if(sayac3!=0||sayac5!=0||sayac2!=0)
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
