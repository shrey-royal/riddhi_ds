/*
Subarray 

Input: [1, 2, 3]
Output: [1], [2], [3], [1, 2], [2, 3], [1, 2, 3]

complexity: O(2^n)

*/


#include<bits/stdc++.h>
using namespace std;

//recursive function to print all possible subarrays for given array
void printSubArrays(int arr[], int size, int start, int end){
    //stop if we have reached the end of the array
    if(end == size)
        return;

    //increment the end point and start from 0
    else if(start > end)
        printSubArrays(arr, size, 0, end+1);

    //print the subarray and increment the starting point
    else {
        cout << "[";
        for(int i = start; i < end; i++) {
            cout << arr[i] << ", ";
        }
        cout << arr[end] << "]" << endl;
        printSubArrays(arr, size, start+1, end);
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    printSubArrays(arr, size, 0, 0);

    return 0;
}