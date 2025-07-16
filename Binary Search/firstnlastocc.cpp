// Find first and last occurence of an element in sorted array

#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {

    int s = 0;
    int e = size - 1;
    int mid;
    int ans = -1;

    while (s <= e) {
        
        mid = e + (s - e)/2;

        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        }

        else if (key > arr[mid]) {
            s = mid + 1;
        }

        else if (key < arr[mid]) {
            e = mid - 1;
        }
    }
    return ans;

}


int lastOcc(int arr[], int size, int key) {

    int s = 0;
    int e = size - 1;
    int mid;
    int ans = -1;

    while (s <= e) {
        
        mid = e + (s - e)/2;

        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        }

        else if (key > arr[mid]) {
            s = mid + 1;
        }

        else if (key < arr[mid]) {
            e = mid - 1;
        }


    }

    return ans;

}
 

int main() {

    int arr[] = {0, 1, 2, 1};

    int first = firstOcc(arr, 4, 1);
    cout << first << endl;
    int last = lastOcc(arr, 4, 1);
    cout << last << endl;

    int totalocc = (last - first) + 1;  //total no. of occurence
    cout << totalocc << endl;
    
}



// leetcode : mountain array peak element :- https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/1685357076/