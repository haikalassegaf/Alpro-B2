/*Nama File 	: Kuadran*/
/*Deskripsi 	: menentukan Kuadran dari 2 bilangan integer*/
/*Pembuat   	: 24060121130064 - Muhammad Haikal Ali*/
/*Tgl Pembuatan	: jumat. 18 Maret 2021*/


#include<stdio.h>
#include<stdlib.h>

int main(){

    //kamus
    int X,Y;
    //Algoritma
    printf("Masukan elemen X pada titik P = ");
    scanf("%d", &X);
    printf("masukan elemen Y pada titik P = ");
    scanf("%d", &Y);

    if(X>0){
        if(Y>0){
            printf("kuadran I");
        }
        else if (Y<0){
            printf("kuadran IV");
        }
        else{
            printf("masukan salah!!");
        }
    }
    else if (X<0){
        if(Y>0){
            printf("kuadran II");
        }
        else if(Y<0){
            printf("kuadran III");
        }
        else{
            printf("masukan salah!!");
        }
    }

    else{
        printf("Masukan salah!!");
    }



return 0;



}
