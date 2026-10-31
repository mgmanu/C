#include <stdio.h>
#include <stdlib.h>

// Structure for the linked list node

typedef struct node {
    int data;
    struct node *next;
} Node;

// Create a new node
Node* getNode(int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));

    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

// Insert at beginning
Node* insertionAtBegin(Node *head, int new_data) {
    Node *newNode = getNode(new_data);

    newNode->next = head;
    head = newNode;

    return head;
}

// Insert at end
Node* insertionAtEnd(Node *head, int new_data) {
    Node *newNode = getNode(new_data);

    if (head == NULL) {
        return newNode;
    }

    Node *temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;

    return head;
}

// Insert at specific 1-based position
Node* insertAtPosition(Node *head, int position, int value) {
    if (position < 1) {
        printf("Invalid position.\n");
        return head;
    }

    if (position == 1) {
        return insertionAtBegin(head, value);
    }

    Node *temp = head;
    int i;

    for (i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position.\n");
        return head;
    }

    Node *newNode = getNode(value);

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

// Delete from beginning
Node* deleteFromBeginning(Node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return NULL;
    }

    Node *temp = head;
    head = head->next;

    free(temp);

    return head;
}

// Delete from end
Node* deleteFromEnd(Node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return NULL;
    }

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    Node *temp = head;

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;

    return head;
}

// Delete first node with specific key
Node* deleteNodeWithKey(Node *head, int key) {
    if (head == NULL) {
        printf("List is empty.\n");
        return NULL;
    }

    if (head->data == key) {
        Node *temp = head;
        head = head->next;

        free(temp);

        return head;
    }

    Node *temp = head;

    while (temp->next != NULL && temp->next->data != key) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Key not found.\n");
        return head;
    }

    Node *deleteNode = temp->next;

    temp->next = deleteNode->next;

    free(deleteNode);

    return head;
}

// Traverse the linked list
void traverseLinkedList(Node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Free all nodes
void freeList(Node *head) {
    Node *temp;

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Node *head = NULL;
    int choice;
    int data;
    int position;
    int key;

    while (1) {
        printf("\n===== Linked List Menu =====\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at a specific position\n");
        printf("4. Delete from the beginning\n");
        printf("5. Delete from the end\n");
        printf("6. Delete a node with a specific key\n");
        printf("7. Display the linked list\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);

                head = insertionAtBegin(head, data);
                break;

            case 2:
                printf("Enter data: ");
                scanf("%d", &data);

                head = insertionAtEnd(head, data);
                break;

            case 3:
                printf("Enter data: ");
                scanf("%d", &data);

                printf("Enter position: ");
                scanf("%d", &position);

                head = insertAtPosition(head, position, data);
                break;

            case 4:
                head = deleteFromBeginning(head);
                break;

            case 5:
                head = deleteFromEnd(head);
                break;

            case 6:
                printf("Enter key to delete: ");
                scanf("%d", &key);

                head = deleteNodeWithKey(head, key);
                break;

            case 7:
                printf("Linked List: ");
                traverseLinkedList(head);
                break;

            case 8:
                freeList(head);

                printf("Program terminated.\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
