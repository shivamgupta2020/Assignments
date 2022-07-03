#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *addNode(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

int transverse(struct Node *ptr)
{
    while (ptr != NULL /* condition */)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    scanf("%d", &head->data);
    for (int i = 1; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        head = addNode(head, x);
    }

    transverse(head);
    return 0;
}