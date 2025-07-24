#include<iostream>
using namespace std;

void reverse(string &str){

    int s = 0;
    int e  = str.size() - 1;

    while(s < e){
        swap(str[s], str[e]);
        s++;
        e--;
    }
}



int main(){

    string str;
    cout << "Enter Text : ";
    getline(cin, str);

    string ans = "";

    for(int i = 0; i < str.size(); i++){

        char ch = str[i];

        if(ch == ' '){
            if(!ans.empty()){
                reverse(ans);
                cout << ans << " ";
                ans = "";
            }
        }
        else{
            ans += ch;
        }
    }

    if(!ans.empty()){
        reverse(ans);
        cout << ans << endl;
    }

    return 0;
}