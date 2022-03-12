/*Nama File 	: CekHari*/
/*Deskripsi 	: Menampilkan dan mengklasifikasi nomor 1-7 dengan nama hari*/
/*Pembuat   	: 24060121130064 - Muhammad Haikal Ali*/
/*Tgl Pembuatan	: rabu. 9 Maret 2021*/

# include<stdio.h>

int main(){

    // kamus
    int h;
    //algoritma
    printf("Program mengecek hari \n");
    printf("masukan angka yang ingin di cek = ");
    scanf("%d", &h);

    if(h==1){
        printf("1 adalah hari senin");
    }
    else if(h==2){
        printf("2 adalah hari selasa");
    }
    else if(h==3){
        printf("3 adalah hari rabu");
    }
    else if(h==4){
        printf("4 adalah hari kamis");
    }
    else if(h==5){
        printf("5 adalah hari jumat");
    }
    else if(h==6){
        printf("6 adalah hari sabtu");
    }
    else if(h==7){
        printf("no 7 adalah hari minggu");
    }
    else{
        printf("masukan nomor hari tidak tepat");
    }

    return 0;
}
