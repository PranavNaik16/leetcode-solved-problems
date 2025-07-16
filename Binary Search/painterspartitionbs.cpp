#include<iostream>
#include<vector>
#include<climits>

using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxallowedTime) {
    int painters = 1;
    int time = 0;

    for (int i = 0; i < n; i++) {
        if (time + arr[i] <= maxallowedTime) {
            time += arr[i];
        }
        else{
            painters++;
            time = arr[i];
        }
    }

    return painters <= m;
}

int minTimeToPaint(vector<int> &arr, int n, int m) {
    
    int maxVal = INT_MIN;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int e = sum;
    int s = maxVal;
    int ans = -1;
    int mid = s + (e - s)/2;

    while(s <= e){
        mid = s + (e - s)/2;
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }

    return ans;

}

int main() {
    vector<int> arr = {40, 30, 10, 20};
    int n = 4;
    int m = 2;

    cout << minTimeToPaint(arr, n, m) << endl;
    return 0;
}