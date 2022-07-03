#include <stdio.h>
#include <stdlib.h>

struct DLL
{
    int value;
    struct DLL *next;
    struct DLL *prev;
};
typedef struct DLL dll;
/////////////////////////////
void printDLL(dll *head)
{
    dll *ptr = head;
    printf("\n[ ");

    while (ptr != NULL)
    {
        printf("%d ", ptr->value);
        ptr = ptr->next;
    }

    printf("]\n");
}
///////////////////////////////////
dll *creatDLL(dll *head)
{
    int n, a;

    dll *ptr = malloc(sizeof(dll));
    dll *current = malloc(sizeof(dll));
    printf("Enter Number Of Node: ");
    scanf("%d", &n);
    // for frist node
    printf("Enter Value At Node 0: ");
    scanf("%d", &a);
    head = ptr;
    ptr->value = a;
    ptr->next = NULL;
    ptr->prev = NULL;
    // for other nodes
    for (int i = 1; i < n; i++)
    {
        printf("Enter Value At Node %d: ", i);
        scanf("%d", &a);
        current = ptr;
        ptr = malloc(sizeof(dll));
        ptr->value = a;
        ptr->next = NULL;
        ptr->prev = current;
        current->next = ptr;
    }
    return head;
}
////////////////////////////////////////////
dll *deleteNode(dll *head, int e)
{
    dll *prevptr = head;
    dll *currptr = head;
    dll *nextptr = head;
    if (head == NULL)
    {
        printf("Head Is NULL\n");
    }
    else
    {

        while (currptr->value != e)
        {
            currptr = currptr->next;
            if (currptr == NULL)
            {
                printf("Node is not present\n");
                return head;
            }
            prevptr = currptr->prev;
            nextptr = currptr->next;
        }
        if (nextptr != NULL)
        {
            prevptr->next = currptr->next;
            nextptr->prev = currptr->prev;
        }
        else
        {
            prevptr->next = NULL;
        }
    }
    return head;
}
////////////////////////////////////////////////////
int main()
{
    int a;
    dll *head = NULL;
    head = creatDLL(head);
    printDLL(head);
    printf("Enter The Element You Want To Delete: ");
    scanf("%d", &a);
    head = deleteNode(head, a);
    printDLL(head);
}
/////////////////////////////////////////////////////////