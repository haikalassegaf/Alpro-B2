//Nama : Muhammad Hakal Ali
//NIM  : 24060121130064
//Lab  : B2
//Tanggal : Jumat,29 April 2022

#include <stdio.h>

int SelectionSort(int arr[], int N){
    int i, j, posisi, swap;
    for(i = 0; i < N; i++){
        posisi = i;
        for (j = i + 1; j < N; j++){ //mengecek satu satu apakah nilai array posisi lebih kecil nilai array j
            if(arr[posisi] > arr[j]){
                posisi = j; //jika true mengganti nilai posisi menjadi nilai array j
            }
        }
        if(posisi != i){ //jika nilai posisi yang terkecil di i tidak dilakukan swap
          swap = arr[i];
          arr[i] = arr[posisi];
          arr[posisi] = swap;
        }
    }
}

//Program Utama
int main()
{
    //Kamus
    int T[100], N, i;
    //Algoritma
    printf("Selection Sort \n");
    printf("Masukkan banyak elemen : ");
    scanf("%d", &N);
    printf("Masukkan nilai : \n");
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    //Memanggil Sub Program
    SelectionSort(T, N);
    printf("Hasil pengurutan sebagai berikut : \n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}
