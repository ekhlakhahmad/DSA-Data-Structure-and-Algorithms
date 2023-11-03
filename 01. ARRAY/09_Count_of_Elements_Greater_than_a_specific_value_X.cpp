// Given an array of integers, find the count of elements that are greater than a specified value X.

#include<iostream>
using namespace std;
int main(){
    int arr[10] = {2, 36, 52, 14, 96, 32, 54, 77, 41, 10};
    int x, count = 0; 

    cout << "Type your specific Number: ";
    cin >> x;

    for (int i = 0; i < 10; i++){
        if(arr[i] > x){
            count = count + 1;
        }
    }

    cout << "Total Number " << count << " which greater than specific number " << x;
}