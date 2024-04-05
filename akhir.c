//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node {
//    int data;
//    struct Node* prev;
//    struct Node* next;
//};
//
//void insertAkhir(struct Node** headRef, int newData) {
//    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//    struct Node* last = *headRef;
//
//    newNode->data = newData;
//    newNode->next = NULL;
//
//    if (*headRef == NULL) {
//        newNode->prev = NULL;
//        *headRef = newNode;
//        return;
//    }
//    while (last->next != NULL)
//        last = last->next;
//
//    last->next = newNode;
//    newNode->prev = last;
//}
//
//void printList(struct Node* node) {
//    while (node != NULL) {
//        printf("%d ", node->data);
//        node = node->next;
//    }
//}
//
//int akhir() {
//    struct Node* head = NULL;
//    int newData;
//    char choice;
//
//    printf("DOUBLE LINKED LIST INSERT AKHIR\n");
//
//    do {
//        printf("Nilai yang akan disimpan: ");
//        scanf("%d", &newData);
//        insertAkhir(&head, newData);
//
//        printf("Lanjutkan memasukkan data? (y/n): ");
//        scanf(" %c", &choice);
//
//    } while (choice == 'y' || choice == 'Y');
//
//    printf("\nData dalam linked list: ");
//    printList(head);
//
//    return 0;
//}
