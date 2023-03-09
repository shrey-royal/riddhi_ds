#include<bits/stdc++.h>
using namespace std;

//function to reverse an array
void reverseArray(char arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

//utility function to print an array
void printArray(char arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//utility function to scan an array
void scanArray(char arr[], int size){
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

//driver code
int main(){
    // int arr[] = {1, 2, 3, 4, 5, 6};
    char arr[10];
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Enter the array elements: ";
    scanArray(arr, size);

    cout << "Original array: ";
    printArray(arr, size);

    reverseArray(arr, 0, size-1);

    cout << "Reversed array: ";
    printArray(arr, size);
}