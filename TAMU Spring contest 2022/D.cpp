#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

string last(const string& text){
    int i = text.length() - 1;
    
    if (isspace(text[i]))
        while (isspace(text[i])) i--;
    
    while (i != 0 && !isspace(text[i])) --i;
    
    string lastword = text.substr(i + 1);
    return lastword;
}

int main(){
    string b;
    string a;
    getline(cin,a);
    int c = stoi(a);
    for(int i=0;i<c;i++){
        getline(cin,b);
        
    }
    return 0;
}