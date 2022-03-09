#include <iostream>
using namespace std;

int main() {
    int numRows;
    int numColumns;
    int currentRow;
    int currentColumn;
    char currentColumnLetter;

    cin >> numRows;
    cin >> numColumns;

    currentRow =0;
    currentColumn = 0;

    for(int i = 0;i<numRows;i++){
        currentRow+=1;
        currentColumnLetter = 'A';
        for(int j=0;j<numColumns;j++){
            cout << currentRow << currentColumnLetter << " ";
            currentColumnLetter += 1;
       }    
   }

    cout << endl;

    return 0;
}