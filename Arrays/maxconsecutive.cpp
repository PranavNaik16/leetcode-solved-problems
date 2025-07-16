// leetcode - 485. Max Consecutive Ones

#include<iostream>
using namespace std;

int consecutives(int a[],  int n){

    int cnt = 0;
    int maxi = 0;

    for(int i = 0; i<n; i++){
        if(a[i] == 1){
            cnt++;
        }
        else{
            cnt = 0;
        }
        
        maxi = max(cnt, maxi);
    }

    return maxi;
}



int main(){

    int a[] = {1, 1, 0, 1, 1, 1, 0, 1, 1};

    int ans = consecutives(a, 9);
    cout << "Maximum Consecutives are : " << ans <<endl;


    return 0;
}

