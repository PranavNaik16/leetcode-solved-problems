// 125- Leetcode Valid palindrome
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool valid(char ch) {
    return (ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch >= '0' && ch <= '9');
}

char lowerCase(char ch) {
    if(ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool isPalindrome(string s) {
    int st = 0;
    int e = s.length() - 1;

    while(st <= e) {
        while(st < e && !valid(s[st])) {
            st++;
        }

        while(st < e && !valid(s[e])) {
            e--;
        }

        if(lowerCase(s[st]) != lowerCase(s[e])) {
            return false;
        }
        st++;
        e--;
    }

    return true;
}

int main() {
    string input;
    cout << "Enter text: ";
    getline(cin, input); 
    if(isPalindrome(input)) {
        cout << "Valid Palindrome " << endl;
    } else {
        cout << "Not a Palindrome " << endl;
    }

    return 0;
}
