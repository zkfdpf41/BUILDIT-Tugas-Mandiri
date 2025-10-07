#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main () {

    int n;
    if (scanf("%d", &n) != 1);

    //Daun Pohon Natal (Baris 1 .. n-1 atau pola bilangan ganjil)
    for (int i = 1; i <= n - 1; i++) {
    //Spasi Kiri untuk Membuat Formasi Pohon = n - 1 - i
    for (int j = 0; j < n - 1 - i; j++) printf (" ");
    //Bintang agar Output Terlihat Seperti Sebuah Pohon
    for (int j = 0; j < 2 * i - 1; j++) printf ("*");
    printf ("\n");
    }

    //Batang Pohon Natal
    if (n == 1) {
        printf ("*\n");
    } else {
        for (int j = 0; j < n - 2; j++) printf (" ");
        printf ("*\n");    
    }

}