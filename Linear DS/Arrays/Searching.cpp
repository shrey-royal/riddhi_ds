/*
Searching methods:
1. Linear Search
2. Binary Search
*/
/*
// Linear Search

#include <iostream>
using namespace std;

int search(int numbers[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if(numbers[i] == key) {
            return i;   // if found
        }
    }
    return -1;  // if not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the number to search: ";
    cin >> key;

    int index = search(arr, size, key);
    (index == -1) 
        ? cout << key << " is Not found in the array" 
        : cout << key << " is Found at index " << index;

    return 0;
}
*/

/*
Time Complexity: O(n)
Space Complexity: O(1)


Tasks :

1. Find the largest three elements in an array
2. Find the Missing Number
Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers.

Input: arr[] = {1, 2, 4, 6, 3, 7, 8}, N = 8
Output: 5
Explanation: The missing number between 1 to 8 is 5

Input: arr[] = {1, 2, 3, 5}, N = 5
Output: 4
Explanation: The missing number between 1 to 5 is 4


3. Find the first repeating element in an array of integers
4. Find the missing and repeating number


10 mins
*/

//Binary Search

#include <iostream>
using namespace std;

// int binarySearch(int numbers[], int low, int high, int key) {
//     while(low <= high) {
//         int mid = low + (high - low) / 2;

//         if(numbers[mid] == key) {
//             return mid;
//         }
//         if(numbers[mid] < key) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }

//recursive binary search
int binarySearch(int numbers[], int low, int high, int key) {
    if(low <= high) {
        int mid = low + (high - low) / 2;

        if(numbers[mid] == key) {
            return mid;
        }
        if(numbers[mid] > key) {
            return binarySearch(numbers, low, mid - 1, key);
        }
        else {
            return binarySearch(numbers, mid + 1, high, key);
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the number to search: ";
    cin >> key;

    int index = binarySearch(arr, 0, size - 1, key);
    (index == -1) 
        ? cout << key << " is Not found in the array" 
        : cout << key << " is Found at index " << index;

    return 0;
}