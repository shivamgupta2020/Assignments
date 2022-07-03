#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    // input elements of array
    char arr[n][1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Given array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // reverse array
    char temp[1000];
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        strcpy(temp, arr[i]);
        strcpy(arr[i], arr[j]);
        strcpy(arr[j], temp);
    }

    // print reversed array
    cout << "Reversed array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    printf("\n");

    return 0;
}
