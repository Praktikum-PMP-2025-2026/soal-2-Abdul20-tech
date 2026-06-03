/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 01 - Overview of C Language
 *   Hari dan Tanggal    : Rabu, 3 Juni 2026
 *   Nama (NIM)          : Abdullah (13224101)
 *   Nama File           : Prak 1.c
 *   Deskripsi           : Program menerima input jumlah bilangan yang di-input dan memberikan
 *                         output jumlah iterasi yang diperlukan hingga nilai menjadi 1.
 * 
 */

#include <string.h>
#include <stdio.h>

int main(){
    int N, data[256];

    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &data[i]);
    }

    for (int i = 0; i < N; i++){
        int count=0;
        while (data[i] != 1){
            if (data[i] % 2 == 0){
                data[i] = data[i]/2;
            }else{
                data[i] = (3*data[i])+1;
            }
            count++;
        }
        printf("LANGKAH %d\n", count);
    }
}

