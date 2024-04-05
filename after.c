#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *prev;
    struct node *next;
} node;

node *createNode(int data) {
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

void insertAfter(node *prevNode, int data) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL for insertion after.\n");
        return;
    }

    node *newNode = createNode(data);

    newNode->next = prevNode->next;
    newNode->prev = prevNode;
    if (prevNode->next != NULL) {
        prevNode->next->prev = newNode;
    }
    prevNode->next = newNode;
}

void printList(node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }

    printf("\n");
}

int after() {
    node *dummy = createNode(-1);
    node *head = dummy;

    int nilai;
    char lagi = 'y';

    printf("DOUBLE LINKED LIST INSERT AFTER\n");

    while (lagi == 'y' || lagi == 'Y') {
        printf("Nilai yang akan disimpan: ");
        scanf("%d", &nilai);

        insertAfter(head, nilai);

        printf("Lanjut memasukan data (y/n): ");
        scanf(" %c", &lagi);
    }

    printf("\nData yang ada dalam DLL:\n");
    printList(dummy->next);

    printf("\nNilai yang akan disimpan: ");
    scanf("%d", &nilai);

    int sisipkan_setelah;
    printf("Disisipkan setelah Data Berapa? ");
    scanf("%d", &sisipkan_setelah);

    node *prevNode = dummy->next;
    while (prevNode != NULL && prevNode->data != sisipkan_setelah) {
        prevNode = prevNode->next;
    }

    if (prevNode != NULL) {
        insertAfter(prevNode, nilai);
    } else {
        printf("Data tidak ditemukan!\n");
    }

    printf("\nData yang ada dalam DLL setelah penyisipan:\n");
    printList(dummy->next);

    return 0;
}
