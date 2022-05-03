#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main() {

    int a;
    cin >>a;
    int x,y = 0;
    vector<int> xc={0};
    vector<int> yc={0};
    int ans=0;
    for(int i=0;i<a;i++){
        string b;
        cin >>b;
        bool c = true;
        if(b == "NORTH"){
            y+=1;
        }else if(b == "EAST"){
            x+=1;
        }else if(b == "WEST"){
            x-=1;
        }else if(b == "SOUTH"){
            y-=1;
        }
        for(int j=0;j<xc.size();j++){
            if(x == xc[j] && y == yc[j]){
                c = false;
            }
        }
        xc.push_back(x);
        yc.push_back(y);
        if(c){
            ans+=1;
        }
    }
    ans+=1;
    cout << ans;
}