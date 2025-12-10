#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Global head pointer
struct Node* head = NULL;

// ============ CREATE NEW NODE ============
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// ============ INSERT AT BEGINNING ============
void insertAtBeginning(int value) 
{
    struct Node* newNode = createNode(value);
    newNode->next = head;  // Point new node to current head
    head = newNode;        // Update head to new node
    printf("Inserted %d at beginning\n", value);
}

// ============ INSERT AT END ============
void insertAtEnd(int value) {
    struct Node* newNode = createNode(value);
    
    // If list is empty
    if (head == NULL) {
        head = newNode;
        printf("Inserted %d at end (first node)\n", value);
        return;
    }
    
    // Traverse to last node
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newNode;
    printf("Inserted %d at end\n", value);
}

// ============ INSERT AT POSITION ============
void insertAtPosition(int value, int position) {
    if (position < 1) {
        printf("Invalid position!\n");
        return;
    }
    
    if (position == 1) {
        insertAtBeginning(value);
        return;
    }
    
    struct Node* newNode = createNode(value);
    struct Node* temp = head;
    
    // Traverse to node before the position
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL) {
        printf("Position out of range!\n");
        free(newNode);
        return;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Inserted %d at position %d\n", value, position);
}

// ============ DELETE FROM BEGINNING ============
void deleteFromBeginning() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    
    struct Node* temp = head;
    head = head->next;
    printf("Deleted %d from beginning\n", temp->data);
    free(temp);
}

// ============ DELETE FROM END ============
void deleteFromEnd() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    
    // Only one node
    if (head->next == NULL) {
        printf("Deleted %d from end\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    
    // Traverse to second last node
    struct Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    
    printf("Deleted %d from end\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

// ============ DELETE BY VALUE ============
void deleteByValue(int value) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    
    // If head contains the value
    if (head->data == value) {
        deleteFromBeginning();
        return;
    }
    
    struct Node* temp = head;
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }
    
    if (temp->next == NULL) {
        printf("Value %d not found!\n", value);
        return;
    }
    
    struct Node* toDelete = temp->next;
    temp->next = temp->next->next;
    printf("Deleted %d from list\n", value);
    free(toDelete);
}

// ============ SEARCH ============
int search(int value) {
    struct Node* temp = head;
    int position = 1;
    
    while (temp != NULL) {
        if (temp->data == value) {
            return position;
        }
        temp = temp->next;
        position++;
    }
    
    return -1;  // Not found
}

// ============ DISPLAY ============
void display() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    
    printf("\nLinked List: ");
    struct Node* temp = head;
    while (temp != NULL) {
        printf("[%d]", temp->data);
        if (temp->next != NULL) {
            printf(" -> ");
        }
        temp = temp->next;
    }
    printf(" -> NULL\n");
}

// ============ COUNT NODES ============
int countNodes() {
    int count = 0;
    struct Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// ============ REVERSE LIST ============
void reverse() {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;
    
    while (current != NULL) {
        next = current->next;    // Store next
        current->next = prev;    // Reverse the link
        prev = current;          // Move prev forward
        current = next;          // Move current forward
    }
    
    head = prev;
    printf("List reversed!\n");
}

// ============ MAIN FUNCTION ============
int main() 
{
    printf("===== SINGLY LINKED LIST DEMO =====\n\n");
    
    // Insert operations
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    display();
    
    insertAtBeginning(5);
    display();
    
    insertAtPosition(15, 3);
    display();
    
    printf("\nTotal nodes: %d\n", countNodes());
    
    // Search
    int pos = search(20);
    if (pos != -1) {
        printf("Found 20 at position %d\n", pos);
    }
    
    // Delete operations
    printf("\n--- Delete Operations ---\n");
    deleteFromBeginning();
    display();
    
    deleteFromEnd();
    display();
    
    deleteByValue(15);
    display();
    
    // Reverse
    printf("\n--- Reverse ---\n");
    insertAtEnd(40);
    insertAtEnd(50);
    display();
    
    reverse();
    display();
    
    return 0;
}