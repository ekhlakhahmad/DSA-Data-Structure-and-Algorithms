// Write a program to Given an array of integers, find the maximum element.

#include<iostream>
using namespace std;
int main(){
    int arr[10] = {25, 23, 12, 4, 5, 9, 8, 6, 52, 15};

    int maxElement = arr[0];
    for (int i = 0; i < 10; i++){
        if(maxElement < arr[i]){
            maxElement = arr[i];
        }
    }
    cout << "Max Element is " << maxElement;
    return 0;
}