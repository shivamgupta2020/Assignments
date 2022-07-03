#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int transverse(struct Node *ptr)
{
    while (ptr != NULL /* condition */)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtStart(struct Node *head)
{
    struct Node *ins = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the elemnt");
    int x;
    scanf("%d", &x);
    ins->data = x;
    ins->next = head;
    return ins;
}

struct Node *insertAtIndex(struct Node *head)
{
    struct Node *ins = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    printf("\nEnter the index: ");
    int index;
    scanf("%d", &index);
    printf("\nEnter the element: ");
    int x;
    scanf("%d", &x);
    ins->data = x;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ins->next = p->next;
    p->next = ins;
    return head;
}

struct Node *insertAtEnd(struct Node *head)
{
    struct Node *ins = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    printf("Enter the elemnt");
    int x;
    scanf("%d", &x);

    while (p->next != NULL)
    {
        p = p->next;
    }
    ins->data = x;
    p->next = ins;
    ins->next = NULL;
    return head;
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    head->data = 4;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 55;
    third->next = NULL;

    printf("Normal LL: ");
    transverse(head);

    // head = insertAtStart(head);
    // head = insertAtIndex(head);
    head = insertAtEnd(head);
    transverse(head);
}