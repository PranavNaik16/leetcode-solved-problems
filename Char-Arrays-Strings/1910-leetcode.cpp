#include<iostream>
using namespace std;

string removeOccurence(string s, string part){
    while( s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }

    return s;
}





int main(){

    string s = "daabcbaabcbc";
    string part = "abc";

    string r = removeOccurence(s, part);

    cout << r << endl;


    return 0;
}