#include <stdio.h>
#include <stdlib.h>
void menu ()
{
    int secim;
    printf("1. Write a C program to check if a given array of integers and length 2, contains 15 or 20\n");
    printf("2. Write a C program to check if a given array of integers and length 2, does not contain 15 or 20\n");
    printf("3. Write a C program to check a given array of integers and return true if the array contains 10 or 20 twice. The length of the array will be 0, 1, or 2\n");
    printf("4. Write a C program to check a given array of integers, length 3 and create a  new array. If there is a 5 in the given array immediately followed by a 7 then set 7 to 1\n");
    printf("5. Write a C program to compute the sum of the two given arrays of integers, length 3 and find the array which has the largest sum\n");
    printf("6. Write a C program to create an array taking two middle elements from a given array of integers of length even\n");
    printf("7. Write a C program to create a new array from two give array of integers, each length 3\n");
    printf("8. Write a C program to create a new array swapping the first and last elements of a given array of integers and length will be least 1\n");
    printf("9. Write a C program to create a new array of length 3 from a given array (length atleast 3) containing the elements from the middle of the array\n");
    printf("10.Write a C program to find the largest value from first, last, and middle elements of a given array of integers of odd length (atleast 1)\n\n\n");
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
    int sayilar[2];
    for(int i=0;i<2;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    if(sayilar[0]==15 || sayilar[0]==20 || sayilar[1]==15 || sayilar[1]==20)
    {
        printf("\n1\n\n\n");
    }
    else
        printf("\n0\n\n\n");
}
void soru2()
{
    int sayilar[2];
    for(int i=0;i<2;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    if(sayilar[0]!=15 && sayilar[0]!=20 && sayilar[1]!=15 && sayilar[1]!=20)
    {
        printf("\n1\n\n\n");
    }
    else
        printf("\n0\n\n\n");
}
void soru3()
{
    int sayilar[2];
    for(int i=0;i<2;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    if((sayilar[0]==10 && sayilar[1]==10) || (sayilar[0]==20 && sayilar[1]==20))
    {
        printf("\n1\n\n\n");
    }
    else
        printf("\n0\n\n\n");
}
void soru4()
{
    int sayilar[3],yenidizi[3];
    for(int i=0;i<3;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
        yenidizi[i]=sayilar[i];
    }
    for(int i=0;i<3;i++)
    {
        if(sayilar[i]==5 && sayilar[i+1]==7)
        {
            yenidizi[i+1]=1;
        }
    }
    printf("\nYeni Dizi : ");
    for(int i=0;i<3;i++)
    {
        printf("%d ",yenidizi[i]);
    }
    printf("\n\n\n");
}
void soru5 ()
{
    int sayilar[3],sylar2[3],tplm1=0,tplm2=0;
    for(int i=0;i<3;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
        tplm1+=sayilar[i];
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        printf("2. Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sylar2[i]);
        tplm2+=sylar2[i];
    }
    if(tplm1>tplm2)
    {
        printf("\n1.Dizinin toplami =%d\n\n\n",tplm1);
    }
    else
        printf("\n2.Dizinin toplami =%d\n\n\n",tplm2);
}
void soru6 ()
{
    int sayilar[6],dizi3[2];
    for(int i=0;i<6;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    dizi3[0]=sayilar[2];
    dizi3[1]=sayilar[3];
    printf("\n%d %d\n\n\n",dizi3[0],dizi3[1]);
}
void soru7 ()
{
    int sayilar[3],sylar2[3],dizi3[6];
    for(int i=0;i<3;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
        dizi3[i]=sayilar[i];
    }
    for(int i=0;i<3;i++)
    {
        printf("2. Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sylar2[i]);
        dizi3[i+3]=sylar2[i];
    }
    printf("\n");
    for(int i=0;i<6;i++)
    {
        printf("%d ",dizi3[i]);
    }
    printf("\n\n\n");

}
void soru8 ()
{
    int sayilar[6],yenidizi[6],temp;
    for(int i=0;i<6;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
        yenidizi[i]=sayilar[i];
    }
    temp=sayilar[5];
    yenidizi[5]=sayilar[0];
    yenidizi[0]=temp;
    printf("\nYeni Dizi : ");
    for(int i=0;i<6;i++)
    {
        printf("%d ",yenidizi[i]);
    }
    printf("\n\n\n");
}
void soru9 ()
{
    int sayilar[6],dizi3[3];
    for(int i=0;i<6;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    dizi3[0]=sayilar[2];
    dizi3[1]=sayilar[3];
    dizi3[2]=sayilar[4];
    printf("\n%d %d %d\n\n\n",dizi3[0],dizi3[1],dizi3[2]);
}
void soru10 ()
{
    int sayilar[5],dizi3[3];
    for(int i=0;i<5;i++)
    {
        printf("Dizinin %d. sayisini giriniz : ",i);  scanf("%d",&sayilar[i]);
    }
    dizi3[0]=sayilar[0];
    dizi3[1]=sayilar[2];
    dizi3[2]=sayilar[4];

    printf("\nIlk Eleman=%d\nOrtanca Eleman=%d\nSonuncu Eleman=%d\n\n\n",dizi3[0],dizi3[1],dizi3[2]);
}
int main()
{
    menu();
}
