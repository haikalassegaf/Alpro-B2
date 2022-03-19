/*Nama File 	: TarifPLN*/
/*Deskripsi 	: menghitung besarnya tarif listrik yang dikenakan, kemudian menampilkan besarnya tarif tersebut*/
/*Pembuat   	: 24060121130064 - Muhammad Haikal Ali*/
/*Tgl Pembuatan	: rabu. 16 Maret 2021*/


# include<stdio.h>

int main(){

    //kamus
    int d,g,hasil;
    //algoritma
    printf("program menghitung tarif listrik yang dikenakan\n");
    printf("masukan jumlah daya listrik yang dipakai /kWh =  ");
    scanf("%d", &d);
    printf("masukan golongan yang dipilih 1 atau 2 = ");
    scanf("%d", &g);


    if (g == 1){
        if (d < 100) {
            hasil = 100 * 1000;
            printf("biaya yang harus dibayar sebesar %d", hasil);
        }
        else{     //d>=100
            hasil = (d * 1000) + 0.1 *(d * 1000);
            printf("biaya yang harus dibayar sebesar %d", hasil);
        }
    }
    else if (g == 2){
        if (d < 100) {
            hasil = 100 * 2000;
            printf("biaya yang harus dibayar sebesar %d", hasil);
        }
        else {    //d>= 100
            hasil = (d * 2000) + 0.1*(d * 2000);
            printf("biaya yang harus dibayar sebesar %d", hasil);
        }
    }
    else{
        printf("masukan golongan yang sesuai!!");
    }
        return 0;
}








