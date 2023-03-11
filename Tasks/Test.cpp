#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3] = {1, 0, 3};
    
    //check if any element in the array is divisible by 5
    bool isDivisibleBy5 = false;
    for(int i=0; i<3; i++){
        if(arr[i]%5 == 0){
            isDivisibleBy5 = true;
            break;
        }
    }

    //output the result
    if(isDivisibleBy5){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}