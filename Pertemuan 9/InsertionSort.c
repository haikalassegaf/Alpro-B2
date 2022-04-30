//Nama : Muhammad Hakal Ali
//NIM  : 24060121130064
//Lab  : B2
//Tanggal : Jumat,29 April 2022

#include<stdio.h>

//Sub Program
void InsertionSort(int T[], int N)
{
    //Kamus Lokal
    int i, temp, j;
    //Algoritma
    for (i = 1; i < N; i++) {
        j = i;
        while (j > 0 && T[j-1] > T[j]) { //mengecek apakah indeks ke j-1 lebih kecil daripada nilai indeks ke j
            temp = T[j]; //jika true lakukan swap
            T[j] = T[j-1];
            T[j-1] = temp;
            j--; // misal i = 2 j = 0 dan 1 (perhitungannya mundur)
        }

    }
}

//Program Utama
int main()
{
    //Kamus
    int T[100], N, i;
    //Algoritma
    printf("Insertion Sort \n");
    printf("Masukkan banyak elemen : ");
    scanf("%d", &N);
    printf("Masukkan nilai : \n");
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    //Memanggil Sub Program
    InsertionSort(T, N);
    printf("Hasil pengurutan sebagai berikut : \n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}
