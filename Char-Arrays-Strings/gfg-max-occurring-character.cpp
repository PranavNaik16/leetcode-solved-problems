// maximum occurig characters in input string

#include<iostream>
using namespace std;

string maximum(string s){

    // count frequency of characters and store in array
    int arr[26] = {0};

    for(int i = 0; i<s.length(); i++){
        char ch = s[i];

        int num;
        if(ch >= 'a' && ch <= 'z'){
            num = ch - 'a';
        }
        else{
            num = ch - 'A';
        }

        arr[num]++;

    }

    // maximum occurence

    int maxi = -1, ans = 0;
    for(int i = 0; i < 26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
            // cout << maxi << endl;
        }
    }

    char finalAns = 'a' + ans;
    return string(1, finalAns); 
}


int main(){

    string s;
    cout << "Text : ";
    cin >> s;

    cout << "The maximum occurence of char in string : "<< maximum(s) << endl;


    return 0;
}