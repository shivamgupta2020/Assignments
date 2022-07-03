#include <bits/stdc++.h>
using namespace std;

// Create a node
struct Node
{
    int data;
    struct Node *next;
};

// Insert node at beginning
void insertAtBeginning(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = (*head_ref);
    // Move head to new node

    (*head_ref) = new_node;
}


// Insert at the end
void insertAtEnd(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}

// Delete a node
void deleteNode(struct Node **head_ref, int key)
{
    struct Node *temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    // Find the key to be deleted
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // If the key is not present
    if (temp == NULL)
        return;

    // Remove the node
    prev->next = temp->next;

    free(temp);
}

// Print the linked list
void printList(struct Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

int main()
{
    struct Node *head = NULL;

    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 5);

    cout << "Linked list: "<<endl;
    printList(head);

    cout << "\nEnter element to be inserted at beginning: "<<endl;
    int new_data;
    cin >> new_data;
    insertAtBeginning(&head, new_data);
    cout << "Linked list after addition at start: "<<endl;
    printList(head);

    cout << "\nEnter element to be inserted at end: "<<endl;
    int new_data1;
    cin >> new_data1;
    insertAtEnd(&head, new_data1);
    cout << "Linked list after addition at end: "<<endl;
    printList(head);

    cout << "\nEnter element to be deleted: "<<endl;
    int x;
    cin >> x;
    deleteNode(&head, x);
    printList(head);

    return 0;
}