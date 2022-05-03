#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

string getPalindrome(string str)
{

	// Store counts of characters
	unordered_map<char, int> hmap;
	for (int i = 0; i < str.length(); i++)
		hmap[str[i]]++;

	/* find the number of odd elements.
	Takes O(n) */
	int oddCount = 0;
	char oddChar;
	for (auto x : hmap) {
		if (x.second % 2 != 0) {
			oddCount++;
			oddChar = x.first;
		}
	}

	/* odd_cnt = 1 only if the length of
	str is odd */
	if (oddCount > 1
		|| oddCount == 1 && str.length() % 2 == 0)
		return "N";

	/* Generate first halh of palindrome */
	string firstHalf = "", secondHalf = "";
	for (auto x : hmap) {

		// Build a string of floor(count/2)
		// occurrences of current character
		string s(x.second / 2, x.first);

		// Attach the built string to end of
		// and begin of second half
		firstHalf = firstHalf + s;
		secondHalf = s + secondHalf;
	}

	// Insert odd character if there
	// is any
	return (oddCount == 1)
			? (firstHalf + oddChar + secondHalf)
			: (firstHalf + secondHalf);
}

int main(){
    char arr[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string a;
    for(int i=0;i<26;i++){
        int b;
        cin >> b;
        if(b>0){
            for(int j=0;j<b;j++){
                a+=arr[i];
            }
        }
    }
    if(getPalindrome(a) == "N"){
        cout << "NO";
    }else{
        cout << "YES" << endl;
        cout << getPalindrome(a);
    }
}