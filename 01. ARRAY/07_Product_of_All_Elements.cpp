// Given an array of integers, find the product of all elements.

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2, 4, 6, 8, 3};
    int product = 1;

    for (int i = 0; i < 5; i++){
        product = product * arr[i];
    }
    cout << "Product of all Elements = " << product;
}