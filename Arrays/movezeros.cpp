// leetcode - 283 move zeros

#include<iostream>
#include<vector>
using namespace std;

int printArray(vector<int>& arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int movez(vector<int>& arr, int n){
    for(int i = 0; i < n; i++){   // can also initialize i = 0 only (i++)
        int element = arr[i];
        for(int j = i+1; j < n; j++){
            if(arr[i] == 0){
                swap(arr[i], arr[j]);
            }
        }
    }
}




int main() {

    vector<int> arr = {0, 1, 0, 3, 12};
    movez(arr, 5);
    printArray(arr, 5);
}