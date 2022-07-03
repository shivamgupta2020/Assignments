#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *day;
};
int isEmpty(struct stack *sp)
{
    return sp->top == -1;
}
int isFull(struct stack *sp)
{
    return sp->top == sp->size - 1;
}
void push(struct stack *sp, int val)
{
    if (!isFull(sp))
    {
        sp->top++;
        sp->day[sp->top] = val;
    }
}
void pop(struct stack *sp)
{
    if (!isEmpty(sp))
        sp->top--;
}
void calculateSpan(int price[], int n, int span[], struct stack *s)
{
    push(s, 0);
    span[0] = 1;
    for (int i = 1; i < n; i++)
    {
        while (!isEmpty(s) && price[s->day[s->top]] < price[i])
            pop(s);
        span[i] = (isEmpty(s)) ? (i + 1) : (i - s->day[s->top]);
        push(s, i);
    }
}
void traverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
void main()
{
    int n;
    printf("Enter number of days: ");
    scanf("%d", &n);
    int price[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter price of day %d: ", i + 1);
        scanf("%d", &price[i]);
    }
    int span[n];
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = n;
    s->day = (int *)malloc(n * sizeof(int));
    calculateSpan(price, n, span, s);
    traverse(span, n);
}