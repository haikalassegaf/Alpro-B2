/*Nama File 	: CekseriPositif*/
/*Deskripsi 	: Menampilkan dan mengklasifikasi apakah masukan ketiga tahanan bernilai positif maka menjumlahkan ketiganya tapi jika ada salah satu yang negatif menampilkan "salah input"/
/*Pembuat   	: 24060121130064-Muhammad Haikal Ali*/
/*Tgl Pembuatan	: sabtu. 12 Maret 2021*/

# include<stdio.h>/*header file*/

/*Program Utama*/
int main(){

    // kamus
    int i,j,k;
    int jumlah;
    // algoritma
    printf("Program Cek Seri Positif \n");
    printf("Masukan jumlah rombongan pertama tahanan = ");
    scanf("%d", &i);
    printf("Masukan jumlah rombongan kedua tahanan = ");
    scanf("%d", &j);
    printf("masukan jumlah rombongan ketiga tahanan = ");
    scanf("%d", &k);
    if (i>0){
        if (j>0){
            if (k>0){
            jumlah = i+j+k;
            printf("hasil jumlah dari ketiga rombongan tahanan adalah %d", jumlah);
            }
            else{
            printf("Masukan tahanan tidak boleh negatif");
            }
         }
        else {
        printf("Masukan tahanan tidak boleh negatif \n");
        }

    }
    else  {
        printf("Masukan tahanan tidak boleh negatif \n");
    }



    return 0;
    }





