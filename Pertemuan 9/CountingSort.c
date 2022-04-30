//Nama : Muhammad Hakal Ali
//NIM  : 24060121130064
//Lab  : B2
//Tanggal : Jumat,29 April 2022


#include<stdio.h>
void CountingSort(int T[], int N)
{
    int i, j, temp, idx;
    for(i = 0; i < N; i++){
        idx = i;
        for(j = i+1; j < N; j++){
            if(T[j] < T[idx]){
                idx = j;
            }
        }
        temp = T[i];
        T[i] = T[idx];
        T[idx] = temp;
    }
}

//Program Utama
int main()
{
    //Kamus
    int T[100], N, i;
    //Algoritma
    printf("Counting Sort \n");
    printf("Masukkan banyak elemen : ");
    scanf("%d", &N);
    printf("Masukkan nilai : \n");
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    //Memanggil Sub Program
    CountingSort(T, N);
    printf("Hasil pengurutan sebagai berikut : \n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}
