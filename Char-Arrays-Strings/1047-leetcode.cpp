// 1047-leetcode remove adjacent duplicates

#include<iostream>
using namespace std;

string removeadjdupli(string s){

    string ans = "";

    for(int i = 0; i < s.length(); i++){
        char ch = s[i];

        if(!ans.empty() && ch == ans.back()){
            ans.pop_back();
        }
        else{
            ans.push_back(ch);
        }
    }

    return ans;
}

int main(){

    string s = "azxxzy";

    string result = removeadjdupli(s);
    cout << result << endl;


    return 0;
}