/*Nama File 	: CekBulan*/
/*Deskripsi 	: Menampilkan dan mengklasifikasi nomor 1-12 dengan nama bulan*/
/*Pembuat   	: 24060121130064 - Muhammad Haikal Ali*/
/*Tgl Pembuatan	: rabu. 9 Maret 2021*/

# include<stdio.h>

int main(){

    // kamus
    int b;
    //algoritma
    printf("Program mengecek bulan \n");
    printf("masukan angka yang sesuai = ");
    scanf("%d", &b);

    if(b==1){
        printf("mantap no 1 adalah bulan januari");
    }
    else if(b==2){
        printf("mantap no 2 adalah bulan februari");
    }
    else if(b==3){
        printf("mantap no 3 adalah bulan maret");
    }
    else if(b==4){
        printf("mantap no 4 adalah bulan april");
    }
    else if(b==5){
        printf("mantap no 5 adalah bulan mei");
    }
    else if(b==6){
        printf("mantap no 6 adalah bulan juni");
    }
    else if(b==7){
        printf("mantap no 7 adalah bulan juli");
    }
    else if(b==8){
        printf("mantap no 8 adalah bulan agustus");
    }
    else if(b==9){
        printf("mantap no 9 adalah bulan september");
    }
    else if(b==10){
        printf("mantap no 10 adalah hari oktober");
    }
    else if(b==11){
        printf("mantap no 11 adalah bulan november");
    }
    else if(b==12){
        printf("mantap no 12 adalah bulan desember");
    }
    else{
        printf("masukan nomor bulan tidak tepat");
    }

    return 0;
}

