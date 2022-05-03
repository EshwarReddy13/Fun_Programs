#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main() {
    string a;
    cin >> a;
    bool b=true;
    if(a[0]=='r' && a.length()>3 && a.substr(a.length()-2)=="ar"){
        for(int i=1;i<a.length()-2;i++){
            if(a[i] != 'o'){
                b = false;
            }
        }
    }else{
        b = false;
    }
    if(b){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}