#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int cmp(const void *a, const void *b) {
    return strcmp((const char*)a, (const char*) b);
}

int main() {
    // simpan kata di char kata[200][100]
    char input[1000];
    char *token;
    char kata[200][100];
    int hitung = 0;

    // kode untuk membaca satu baris input dan hilangkan jika ada newline di ahkir
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    token = strtok(input, " ");
    while (token != NULL) {
    // pengecekan kata yang sudah muncul menggunakan bsearch
    if (hitung == 0 || bsearch(token, kata, hitung, 100, cmp) == NULL) {
        strcpy(kata[hitung], token);
        qsort(kata, ++hitung, 100, cmp);
        if (hitung > 1) printf (" ");
        printf("%s", token);
    }
        token = strtok(NULL, " ");

    }

    return 0;
    
}