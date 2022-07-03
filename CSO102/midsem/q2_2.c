#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *prev = NULL;
struct node *end = NULL;
void traverse(struct node *p)
{
    struct node *ptr = p;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct node *reverse(struct node *p, struct node *prev, struct node *end, struct node *head, int n)
{
    if (n == 1)
        return head;
    struct node *ptr = p->next;
    struct node *q = ptr->next;
    int i = 0;
    while (i != n - 1)
    {
        if (i == 0)
            p->next = end;
        ptr->next = p;
        p = ptr;
        if (q == NULL)
            break;
        ptr = q;
        q = q->next;
        i++;
    }
    if (prev == NULL)
        return p;
    prev->next = p;
    return head;
}
int checkFurther(struct node *l1, struct node *l2)
{
    struct node *ltmp1 = l1;
    struct node *ltmp2 = l2;
    while (ltmp1 != NULL)
    {
        if (ltmp1->data != ltmp2->data)
            return 0;
        ltmp1 = ltmp1->next;
        ltmp2 = ltmp2->next;
    }
    end = ltmp2;
    return 1;
}
void checkIfPresent(struct node *l1, struct node *l2, int n1, int n2)
{
    int c = 0;
    struct node *head = l2;
    while (l2 != NULL && n2 >= n1)
    {
        if (l2->data == l1->data)
        {
            if (checkFurther(l1, l2))
            {
                c++;
                l2 = reverse(l2, prev, end, head, n1);
                break;
            }
        }
        n2--;
        prev = l2;
        l2 = l2->next;
    }
    if (c == 0)
        printf("L1 NOT FOUND WITHIN L2\n");
    else
    {
        printf("l2 after reversing l1 within l2: ");
        traverse(l2);
    }
}
void main()
{
    int n1, n2;
    printf("Enter size of list l1 and l2: ");
    scanf("%d %d", &n1, &n2);
    struct node *l1, *l2, *current, *current2, *head;
    printf("Take input of list 1\n");
    for (int i = 0; i < n1; i++)
    {
        current = (struct node *)malloc(sizeof(struct node));
        printf("Enter element %d: ", i + 1);
        scanf("%d", &current->data);
        if (i == 0)
        {
            head = current;
            l1 = current;
        }
        else
        {
            l1->next = current;
            l1 = current;
        }
    }
    l1->next = NULL;
    l1 = head;
    printf("Take input of list 2\n");
    for (int i = 0; i < n2; i++)
    {
        current2 = (struct node *)malloc(sizeof(struct node));
        printf("Enter element %d: ", i + 1);
        scanf("%d", &current2->data);
        if (i == 0)
        {
            head = current2;
            l2 = current2;
        }
        else
        {
            l2->next = current2;
            l2 = current2;
        }
    }
    l2->next = NULL;
    l2 = head;
    printf("Original linked list 1: ");
    traverse(l1);
    printf("Original linked list 2: ");
    traverse(l2);
    if (n1 <= n2)
        checkIfPresent(l1, l2, n1, n2);
    else
        printf("L1 NOT FOUND WITHIN L2\n");
}