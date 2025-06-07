#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/book.h"

void addBook() {
    FILE *fp = fopen("data/books.txt", "a");
    if (fp == NULL) {
        printf("Dosya açılamadı!\n");
        return;
    }

    char title[100];
    char author[100];

    printf("Kitap Adı: ");
    scanf(" %[^\n]", title);    // Boşluk ve %[^\n] ile satır sonuna kadar oku

    printf("Yazar: ");
    scanf(" %[^\n]", author);

    fprintf(fp, "%s,%s\n", title, author);
    fclose(fp);

    printf("Kitap başarıyla eklendi!\n");
}

void listBooks() {
    FILE *fp = fopen("data/books.txt", "r");
    if (fp == NULL) {
        printf("Kayıtlı kitap bulunamadı.\n");
        return;
    }

    char line[256];
    printf("\n--- Kayıtlı Kitaplar ---\n");
    while (fgets(line, sizeof(line), fp)) {
        char *title = strtok(line, ",");
        char *author = strtok(NULL, "\n");

        if (title && author) {
            printf("• %s - %s\n", title, author);
        }
    }

    fclose(fp);
}
