/*Nama File 	: Tetris.c*/
/*Deskripsi 	: Menampilkan tetris urut dari 1 sampai N dengan bentuk '*' sebanyak i*/
/*Pembuat   	: 24060121130064 - Muhammad Haikal Ali*/
/*Tgl Pembuatan	: rabu. 30 Maret 2021*/

# include<stdio.h>

int main(){

    //kamus
    int i,b,N;
    //algoritma
    printf("masukan N = ");
    scanf("%d", &N);
    if(N<=0){
        printf("masukan anda salah");
    }
    i=0;
    b=0;
    for(i=1;i<=N;i++){
        printf("\n%d ",i);
        for(b=1;b<=i;b++){
            printf("*");
        }

    }

    return 0;

}
