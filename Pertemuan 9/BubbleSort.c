//Nama : Muhammad Hakal Ali
//NIM  : 24060121130064
//Lab  : B2
//Tanggal : Jumat,29 April 2022

#include <stdio.h>

//Sub Program
void BubbleSort(int T[], int N)
{
    //Kamus Lokal
    int i, k, temp;
    //Algoritma
    for(i = 0; i < N; i++){ //sebagai limiter dengan perhitungan maju
        for(k = 0; k < N-i-1; k++){ // dari indeks ke 0 sampai ke indeks N-i-1
            if(T[k] > T[k+1]){ //mengecek apakah nilai indeks k lebih besar daripada nilai indeks ke k+1
            temp = T[k];  //jika true lakukan swap
            T[k] = T[k+1];
            T[k+1] = temp;
            }
        }
    }
}

//Program Utama
int main()
{
    //Kamus
    int T[100], N, i;
    //Algoritma
    printf("Bubble Sort \n");
    printf("Masukkan banyak elemen : ");
    scanf("%d", &N);
    printf("Masukkan nilai : \n");
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    //Memanggil Sub Program
    BubbleSort(T, N);
    printf("Hasil pengurutan sebagai berikut : \n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}
