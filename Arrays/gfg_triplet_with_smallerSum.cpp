#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int count_triplet(vector<int> arr, int n, int target ){

    sort(arr.begin(), arr.end());

    int count = 0;

    for(int i = 0; i < n-2; i++){
        int left = i + 1, right = n-1;

        
        while(left < right){
            int sum = arr[i] + arr[left] + arr[right];

            if(sum < target){
                count += (right - left);
                left++;
            }
            else{
                right--;
            }
        }
    }
    
    return count;
}

int main(){

    vector<int> arr = {1, 3, 4, 5, 7};
    int n = arr.size();
    int sum = 12;

    cout << count_triplet(arr, n, sum) << endl; 

    return 0;
}