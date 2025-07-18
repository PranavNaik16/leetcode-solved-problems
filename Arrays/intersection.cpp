// Code studio


#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(vector<int> a, vector<int> b){

    vector<int> ans;

    int i = 0;
    int j = 0;
    int n = a.size();
    int m = b.size();

    while(i<n && j<m){

        if(a[i] < b[j]){
            i++;
        }
        else if(a[i] > b[j]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    return ans;
}


int main(){

    vector<int> a = {1, 2, 2, 2, 3, 4};
    vector<int> b = {2, 2, 3, 3};

    vector<int> result = intersection(a, b);
    for(int val : result){
        cout << val << " ";
    }

    cout<< endl;

    return 0;
}