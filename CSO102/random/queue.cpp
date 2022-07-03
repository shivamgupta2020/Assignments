#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int front, rear, capacity;
    int *queue;
    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
        queue = new int;
    }

    ~Queue() { delete[] queue; }

    void queueEnqueue(int data)
    {
        if (capacity == rear)
        {
            cout << "\nQueue is full\n";
            return;
        }
        else
        {
            queue[rear] = data;
            rear++;
        }
        return;
    }

    void queueDequeue()
    {
        if (front == rear)
        {
            cout << "\nQueue is empty\n";
            return;
        }
        else
        {
            for (int i = 0; i < rear - 1; i++)
            {
                queue[i] = queue[i + 1];
            }
            rear--;
        }
        return;
    }

    void queueDisplay()
    {
        int i;
        if (front == rear)
        {
            cout << "\nQueue is Empty\n";
            return;
        }
        for (i = front; i < rear; i++)
        {
            cout << queue[i] << "  <-- ";
        }
        return;
    }
};

int main(void)
{
    cout << "Queue is Empty" << endl;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    Queue q(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.queueEnqueue(x);
    }
    q.queueDisplay();
    cout << endl;

    q.queueDequeue();
    cout << endl << "After node deletion" << endl;
    q.queueDisplay();
    cout<<endl;

    cout << "Enter element to insert at end: ";
    int ins;
    cin >> ins;
    q.queueEnqueue(ins);
    q.queueDisplay();

    return 0;
}
