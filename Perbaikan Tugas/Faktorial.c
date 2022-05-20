/*Nama File 	: Faktorial*/
/*Deskripsi 	: menentukan faktor-faktor bilangan dari bilangan integer sembarang N (N>0) dan mengkalikannya*/
/*Pembuat   	: 24060121130064 - Muhammad Haikal Ali*/
/*Tgl Pembuatan	: jumat. 18 Maret 2021*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//sub program
int Faktorial(int N){

    //kamus
    int hasil =1; //{hasil perkalian}
    int i;  //{counter}
    //algoritma
    if(N>0){
        for(i=N;i>=1;i--){
            hasil = hasil * i;
        }
        printf("hasilnya adalah %d",hasil);
    }

    else{
        printf("masukan anda salah!!");
    }

}

int main(){

    int N;
    printf("masukan angkaa yang ingin di cek = ");
    scanf("%d", &N);
    Faktorial(N);
}
