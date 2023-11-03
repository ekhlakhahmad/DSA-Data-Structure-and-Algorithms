// Given an array of integers, find the sum of all even numbers in the array.

#include<iostream>
using namespace std;
int main(){
    int arr[10] = {25, 6, 3, 1, 4, 8, 9, 7, 5, 12};
    int sum = 0;

    for (int i = 0; i < 10; i++){
        if(arr[i] % 2 == 0){
            sum = sum + arr[i];
        }
    }
    cout << "Sum of All Even Number = " << sum;
}