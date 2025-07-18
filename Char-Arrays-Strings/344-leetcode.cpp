// 344- Leetcode Reverse Strings

#include<iostream>
#include<vector>
using namespace std;


void reverse(vector<char>& name) {
    int s = 0;
    int e = name.size() - 1;

    while(s < e) {
        swap(name[s++], name[e--]);
    }
}


int main() {
    string input;
    cout << "Enter Your Name: ";
    cin >> input;

    vector<char> name(input.begin(), input.end());

    cout << "Your Name is: ";
    for(char ch : name){
        cout << ch;
    } 
    cout << endl;

    reverse(name);

    cout << "Your Reversed Name is: ";
    for(char ch : name){
        cout << ch;
    }
    cout << endl;

    return 0;
}
