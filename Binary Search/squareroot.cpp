#include <iostream>
using namespace std;

int sqrt(int n){

    int s = 0;
    int e = n;
    long long int mid = s + (e - s)/2;
    int ans = -1;

        while(s<e) {

            long long int square = mid*mid;

            if (square == n) {
                ans = mid;
                return ans;
            }

            else if (square < n) {
                ans = mid;
                s = mid + 1;
            }

            else if (square > n) {
                e = mid - 1;
            }

            mid = s + (e - s)/2;
        }
        
}




int main(){

    int sq = sqrt(25);
    cout << sq << endl;
}