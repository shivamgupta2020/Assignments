#include <bits/stdc++.h>
using namespace std;
#define ll long long

// printing the array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// insert element at beginning
void insertAtBeginning(int arr[], int n, int ele)
{
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = ele;
    n++;
    printArray(arr, n);
}

// insert element at end
void insertAtEnd(int arr[], int n, int ele)
{
    n += 2;
    arr[n - 1] = ele;
    printArray(arr, n);
}

// insert element at given position
void insertAtPosition(int arr[], int n, int ele, int pos)
{
    n += 3;
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = ele;
    printArray(arr, n);
}

// insert element after given element
void insertAfterElement(int arr[], int n, int ele, int after)
{
    n += 3;
    int count;
    for (int i = 0; i < n; i++)
    {
        if (after == arr[i])
        {
            count = i;
            break;
        }
    }
    n++;
    for (int i = n - 1; i > count + 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[count + 1] = ele;
    printArray(arr, n);
}

// delete given element from array
void deleteElement(int arr[], int n, int ele)
{
    n += 4;
    int count;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            count = i;
            break;
        }
    }
    for (int i = count; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printArray(arr, n);
}

int main()
{
    cout << "Enter n: " << endl;

    int n;
    cin >> n;

    // array of n elements
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Elements of array:" << endl;
    printArray(arr, n);

    int ele;
    cout << "Enter element to be inserted at beginning: " << endl;
    cin >> ele;
    insertAtBeginning(arr, n, ele);

    int ele2;
    cout << "Enter element to be inserted at end: " << endl;
    cin >> ele2;
    insertAtEnd(arr, n, ele2);

    int pos, ele3;
    cout << "Enter position to be inserted: " << endl;
    cin >> pos;
    cout << "Enter element to be inserted: " << endl;
    cin >> ele3;
    insertAtPosition(arr, n, ele3, pos);

    int after, ele4;
    cout << "Enter element after which element to be inserted: " << endl;
    cin >> after;
    cout << "Enter element to be inserted: " << endl;
    cin >> ele4;
    insertAfterElement(arr, n, ele4, after);

    int ele5;
    cout << "Enter element to be deleted: " << endl;
    cin >> ele5;
    deleteElement(arr, n, ele5);

    return 0;
}