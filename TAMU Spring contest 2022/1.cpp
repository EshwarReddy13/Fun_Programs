#include <cmath>
#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main(){
    string a;
    cin >> a;
    a = a.substr(0,a.length()-2);
    int b = stoi(a);
    if(isdigit(sqrt(b))){
        cout << sqrt(b) << "pi";
    }else{
        vector<int> ans;
        ans[0] = sqrt(b) +1;
        for(int i=ans[0];i>0;i--){
            int t = (i*i)-(b*b);
            if(isdigit(sqrt(t))){
                ans.push_back(sqrt(t));
            }else{

            }
        }
    }
}