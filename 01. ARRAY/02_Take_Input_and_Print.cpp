// Write a program to take input in array and print that elements.

#include <iostream>
using namespace std;
int main()
{
    int i, n, temp;
    int arr[50];

    cout << "How many Element you want to Enter that array: ";
    cin >> n;

    cout << "Enter Elements in an Array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}