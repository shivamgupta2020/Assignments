#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct stack
{
    int top;
    int size;
    int *arr;
};
struct queue
{
    int size;
    int front;
    int back;
    int *arr;
};
void traverse(struct stack *s)
{
    printf("\nOutput stack: top to bottom:\n");
    while (s->top != -1)
    {
        printf("Element: %d\n", s->arr[s->top]);
        s->top--;
    }
}
void enqueue(struct queue *q, int val)
{
    q->back++;
    q->arr[q->back] = val;
}
int dequeue(struct queue *q)
{
    q->front++;
    return q->arr[q->front];
}
void insert(struct stack *s, int val)
{
    s->top++;
    s->arr[s->top] = val;
}
void check_even_odd(struct node *ptr, struct queue *q, struct stack *s)
{
    while (ptr != NULL)
    {
        if (ptr->data % 2 == 0)
            enqueue(q, ptr->data);
        else
            insert(s, ptr->data);
        ptr = ptr->next;
    }
}
void final_stack(struct stack *s, struct queue *q, int n, int exp)
{
    int x = s->top;
    for (int i = 0; i < n / 2; i++)
    {
        s->arr[2 * x] = s->arr[x];
        x--;
    }
    for (int i = 0; i < n / 2; i++)
    {
        s->arr[2 * i + 1] = dequeue(q);
    }
    if (n % 2 != 0 && exp % 2 == 0)
        s->arr[n - 1] = dequeue(q);
    s->top = n - 1;
    traverse(s);
}
void main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    struct node *temp, *current, *head;
    printf("Enter alternate odd and even elements!\n");
    for (int i = 0; i < n; i++)
    {
        current = (struct node *)malloc(sizeof(struct node));
        printf("Enter element %d: ", i + 1);
        scanf("%d", &current->data);
        if (i == 0)
        {
            head = current;
            temp = current;
        }
        else
        {
            temp->next = current;
            temp = current;
        }
    }
    temp->next = NULL;
    temp = head;
    int exp = temp->data;
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = n;
    s->top = -1;
    s->arr = (int *)malloc(n * sizeof(int));

    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = n;
    q->front = -1;
    q->back = -1;
    q->arr = (int *)malloc(n * sizeof(int));

    check_even_odd(temp, q, s);
    final_stack(s, q, n, exp);
}