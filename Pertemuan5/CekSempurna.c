/*Nama File 	: CekSempurna*/
/*Deskripsi 	: menentukan apakah bilangan integer sembarang N (N>0) merupakan bilangan sempurna */
/*Pembuat   	: 24060121130064 - Muhammad Haikal Ali*/
/*Tgl Pembuatan	: jumat. 25 Maret 2021*/

# include<stdio.h>

int main(){

    // kamus
    int N;
    int i;
    int jumlahf;
    // algoritma
    printf("program mengecek bilangan sempurna\n");
    printf("masukan angka yang ingin di cek  = ");
    scanf("%d",&N);
    if(N<=0){
        printf("masukan harus positif!!");
    }
    else if(N>0){
    jumlahf = 0;
    i = 1;
    for(i = 1; i<N;i++){
        if (N % i ==0){
            jumlahf = jumlahf + i;
            printf(" + %d",i);
            }
        }
    printf(" jumlah faktor dari N adalah %d",jumlahf);
    if(jumlahf== N){
        printf("\nmaka %d adalah bilangan sempurna",N);

    }
    else{
        printf("\nmaka %d bukan bilangan semprna",N);
    }

    }


    return 0;
    }





