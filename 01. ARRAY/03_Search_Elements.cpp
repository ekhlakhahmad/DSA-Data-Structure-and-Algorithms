// Write a program to Search Elements in Array, if Elements is present in array then print index number of that element otherwise print -1.

#include<iostream>
using namespace std;
int main(){
    int arr[10] = {5, 9, 6, 0, 3, 8, 7, 1, 4, 2};
    int x;
    int index = -1;

    cout << "Which element you want to search in this Array: ";
    cin >> x;

    for (int i = 0; i < 10; i++){
        if(arr[i] == x){
            index = i;
            break;
        }
    }
    
    cout << "index number = " << index;

    return 0;
}