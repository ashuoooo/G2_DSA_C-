/*This is the first assignment . Write a cpp program to build pattern using only while loop.


PATTERN 
1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 * * * * 3 2 1 
1 2 * * * * * * 2 1 
1 * * * * * * * * 1 


*/

//Code 
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int i = 0;

    while (i < n) {
        int j = 0;

        // Print numbers in increasing order, asterisks, and numbers in decreasing order
        while (j < 2*n) {
            if (j < n - i) {
                // Numbers in increasing order
                cout << (j + 1) << " ";
            } else if (j < n + i) {
                // Asterisks
                cout << "* ";
            } else if (j != n + i) {
                // Numbers in decreasing order
                cout << (2*n - j) << " ";
            }
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}

// Time complexity of this program :- O(n^2)
// Space  complexity of this program :- O(1)

