// Given an array of integers, find the average of all elements.

#include<iostream>
using namespace std;
int main(){
    int arr[10] = {26, 35, 14, 85, 62, 15, 4, 3, 9, 5};
    int sum = 0;

    for (int i = 0; i < 10; i++){
        sum = sum + arr[i];
    }
    cout << "Average of all Elements = " << sum / 10;
}