#include <stdio.h>
#include "book.h"
#include "user.h"

int main() {
    int choice;
    do {
        printf("\n--- Kütüphane Sistemi ---\n");
        printf("1. Kitap Ekle\n");
        printf("2. Kitap Listele\n");
        printf("3. Kullanıcı Ekle (Hazırlık)\n");
        printf("0. Çıkış\n");
        printf("Seçiminiz: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                listBooks();
                break;
            case 3:
                printf("Kullanıcı ekleme yakında...\n");
                break;
            case 0:
                printf("Çıkılıyor...\n");
                break;
            default:
                printf("Geçersiz seçim!\n");
        }
    } while (choice != 0);

    return 0;
}
