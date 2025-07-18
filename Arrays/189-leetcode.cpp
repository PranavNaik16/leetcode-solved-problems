// leetcode - 189. Rotate Array

#include <iostream>
#include <vector>
using namespace std;


void rotate(vector<int>& a, int k){

    int n = a.size();
    vector<int> temp(n);

    for(int i = 0; i< n; i++){
        temp[ (i+k) % n] = a[i];
    }
    a = temp;
}

int main() {

    vector<int> a = {-1, -100, 3, 99};
    int k;
    cout << "Enter number of rotations : "<<endl;
    cin >> k;

    rotate(a, k);

    cout << "Rotated array : ";
    for(int val : a){
        cout<< val << " ";
    }
    cout << endl;

    return 0;

}