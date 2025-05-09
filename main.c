#include <stdio.h>
#include <string.h>
#include "queue.h"

int main() {
    CircularQueue q;
    CreateQueue(&q);

    char choice;
    char message[100];
    int key;

    printf("Encryption (E) or Decryption (D)?: ");
    scanf(" %c", &choice);
    getchar();

    printf("Enter your message: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = 0;

    printf("Enter shift key: ");
    scanf("%d", &key);

    printf("*****************************\n");

    if (choice == 'E') {
        printf("Encrypted Message: ");
        EncryptMessage(&q, message, key);
    } else if (choice == 'D') {
        printf("Original Message: ");
        EncryptMessage(&q, message, -key);  // Decryption is reverse shift
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
