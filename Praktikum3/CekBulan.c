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
    printf("masukan angka yang ingin di cek = ");
    scanf("%d", &b);

    if(b==1){
        printf("1 adalah bulan januari");
    }
    else if(b==2){
        printf("2 adalah bulan februari");
    }
    else if(b==3){
        printf("3 adalah bulan maret");
    }
    else if(b==4){
        printf("4 adalah bulan april");
    }
    else if(b==5){
        printf("5 adalah bulan mei");
    }
    else if(b==6){
        printf("6 adalah bulan juni");
    }
    else if(b==7){
        printf("7 adalah bulan juli");
    }
    else if(b==8){
        printf("8 adalah bulan agustus");
    }
    else if(b==9){
        printf("9 adalah bulan september");
    }
    else if(b==10){
        printf("10 adalah hari oktober");
    }
    else if(b==11){
        printf("11 adalah bulan november");
    }
    else if(b==12){
        printf("12 adalah bulan desember");
    }
    else{
        printf("masukan nomor bulan tidak tepat");
    }

    return 0;
}

