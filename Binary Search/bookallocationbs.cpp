#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxallowed) {
    int students = 1;
    int pages = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxallowed){
            return false;
        }

        if (pages + arr[i] <= maxallowed){
            pages += arr[i];
        }
        else {
            students++;
            pages = arr[i];
        }
    }

    return students > m ? false : true;
}

int allocateBooks(vector<int> &arr, int n, int m) {

    if (m > n) {
        return -1;
    }

    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++){
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e - s)/2;

    while (s <= e){

        mid = s + (e - s)/2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }

    return ans;

}





int main(){

    vector<int> arr = {10, 20, 30, 40};
    int n = 4;
    int m = 2;

    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}

