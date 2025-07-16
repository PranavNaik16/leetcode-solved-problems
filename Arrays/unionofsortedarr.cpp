// TUF

#include<iostream>
#include<vector>
using namespace std;

vector<int> sortedarr(vector<int> a, vector<int> b){

    vector<int> ans;
    int i = 0;
    int j = 0;
    int n = a.size();
    int m = b.size();
    
    while(i<n && j<m){
        if(a[i] <= b[j]){
            if( ans.size() == 0 || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
        i++;

        }
        else{
            if( ans.size() == 0 || ans.back() != b[j]){
                ans.push_back(b[j]);
            }
        j++;

        }

    }

    while(i<n){
            if( ans.size() == 0 || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
        i++;

        }

    while(j<m){
        if( ans.size() == 0 || ans.back() != b[j]){
            ans.push_back(b[j]);
            }
        j++;

        }


    return ans;

}

int main(){

    vector<int> a = {1, 1, 2, 3, 4, 5};
    vector<int> b = {1, 1, 2, 3, 4, 5};

    vector<int> result = sortedarr(a, b);
    for(int val : result){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}