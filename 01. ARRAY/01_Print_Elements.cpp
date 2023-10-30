// Write a program to print the array elements.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {9, 5, 62, 3, 1, 4, 5, 8, 7, 2};
    int i, n;
    n = size(arr);

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

cout<<endl;

    for (int a : arr)
    {
        cout << a << " ";
    }
}