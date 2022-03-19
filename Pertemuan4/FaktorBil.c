/*Nama File 	: Faktorbil*/
/*Deskripsi 	: menentukan faktor-faktor bilangan dari bilangan integer sembarang N (N>0)*/
/*Pembuat   	: 24060121130064 - Muhammad Haikal Ali*/
/*Tgl Pembuatan	: jumat. 18 Maret 2021*/

# include<stdio.h>

int main(){

    // kamus
    int N;
    int i;
    // algoritma
    printf("program mencari faktor dari suatu bilangan\n");
    printf("masukan angka yang ingin di cek faktornya = ");
    scanf("%d",&N);
    if(N<0){
        printf("masukan harus positif!!");
    }
    else if(N>0){
    i = 1;
    for(i = 1; i<=N;i++){
        if (N % i ==0){
         printf(" | %d",i);
        }
        }
    }
    else{ //{N=0}
        printf("faktor 0 ya 0");
    }


    return 0;

}
