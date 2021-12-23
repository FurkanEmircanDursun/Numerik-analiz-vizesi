#include<stdio.h>
#include <math.h>
#include <stdbool.h>
#include "ctype.h"
float  HATAn;
void AsayiMi();//A ' nin sayi olup olmadığına bakar sayı değilse tekrar sorar
void BsayiMi();//B ' nin sayi olup olmadığına bakar sayı değilse tekrar sorar
void AveBsayiFarki(); // A ve B sayi olduğu kesinleştiğinde a nın b den büyük olma durumuna bakar ve kullanıcıdan tekrar A ve B değeri ister istenilen değerler sayi ise ve B A'dan büyük ise döngü sonlandırılır .
void metod(float a,float b);
float c;

float retA;
float retB;
float a,b;

int main()
{


    printf(" a ve b araligini giriniz\n");

    printf("A ----> ");
    retA=  scanf("%f",&a);
    AsayiMi();
    printf("B ----> ");
    retB=  scanf("%f",&b);
    BsayiMi();
    AveBsayiFarki();



    printf("TEKRAR#    An        Bn       Cn         HATAn \n");
    metod(a,b);

    return 0;
}
void metod(float a,float b)
{

    c = a;

    for(int d=1; d<=10;d++)

    {
        c = (a+b)/2;

        if((2*c*c*c - 3*c*c - 4*c+5 )==0){
            printf("\n %d         %f  %f  %f    %f    ",d,a,b,c,HATAn);

            break;
        }



        else if ((2*c*c*c - 3*c*c - 4*c+5 )*(2*a*a*a - 3*a*a - 4*a+5 ) < 0){

            b = c;
            HATAn=(b-a)/pow(2,d);

        }


        else{

            HATAn=(b-a)/pow(2,d);

            a = c;
        }
        if(HATAn<0.001){
            printf("\n %d         %f  %f  %f    %f    ",d,a,b,c,HATAn);

            printf("\nBELIRTILEN HATA SINIRINA ULASILDI !!");
            printf("\nDenklemin koku ===> %f  ",c);
            break;
        }
        if(d==10 && HATAn>0.001){
            printf("\n islem 10 defa tekrarlandi  fakat 10^(-3) hata kosuluna ulasilamadi ");
            break;
        }
        printf("\n %d         %f  %f  %f    %f    ",d,a,b,c,HATAn);

    }
}
void AsayiMi(){
    while (retA!= 1) { // A Sayi mı ? ona bakan döngü
        printf("\n-------A  bir sayi olmak zorundadir-------\n");
        getchar();
        printf("A ----> ");
        retA=  scanf("%f",&a);

    }
};
void BsayiMi(){
    while (retB!= 1) { // B Sayi mı ? ona bakan döngü
        printf("\n-------B  bir sayi olmak zorundadir-------\n");
        getchar();
        printf("B ----> ");
        retB=  scanf("%f",&b);

    }
};
void AveBsayiFarki(){
    for(int i=0;i<1;i) // A ve B sayi olduğu kesinleştiğinde a nın b den büyük olma durumuna bakar ve kullanıcıdan tekrar A ve B değeri ister istenilen değerler sayi ise ve B A'dan büyük ise döngü sonlandırılır .
    {

        if( a>=b){
            printf("A degeri B den buyuk ya da esit olamaz\n");
            printf("Lutfen tekrar giriniz !!\n");

            printf("A ----> ");
            retA=  scanf("%f",&a);
            AsayiMi();
            printf("B ----> ");
            retB=  scanf("%f",&b);
            BsayiMi();

        }
        else{i=1;
            printf("[A = %f , B = %f]  \n",a,b);

        }}

}