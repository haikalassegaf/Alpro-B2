/*Nama File 	: CekPrima*/
/*Deskripsi 	: menentukan apakah bilangan integer sembarang N (N>0) merupakan bilangan prima*/
/*Pembuat   	: 24060121130064 - Muhammad Haikal Ali*/
/*Tgl Pembuatan	: jumat. 25 Maret 2021*/


# include<stdio.h>

int main(){

    // kamus
    int N;
    int i;
    int banyakf;
    // algoritma
    printf("program menentukan bilanagn prima\n");
    printf("masukan angka yang ingin di cek = ");
    scanf("%d",&N);
    if(N<=0){
        printf("masukan harus positif!!");
    }
    else if(N>0){
    i = 1;
    banyakf = 0;
    for(i = 1; i<=N;i++){
        if (N % i ==0){
            banyakf = banyakf + 1;
            printf(" | %d",i);
            }
        }
        if(banyakf==2){
            printf("\nmaka %d adalah bilangan prima",N);
            }
        else{
            printf("\nmaka %d bukan bilangan prima",N);
            }
    }



    return 0;
}
