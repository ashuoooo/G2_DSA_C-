
/* Pattern-
1 * * * * * * * * 1 
1 2 * * * * * * 2 1 
1 2 3 * * * * 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 4 5 5 4 3 2 1 

*/

#include <iostream>

int main() {
    int n = 5; // Number of rows
    int i = 1;

    while (i <= n) {
        // Print increasing numbers
        int j = 1;
        while (j <= i) {
            std::cout << j << " ";
            j++;
        }

        // Print asterisks
        int k = 1;
        while (k <= (n - i) * 2) {
            std::cout << "* ";
            k++;
        }

        // Print decreasing numbers
        j = i;
        while (j >= 1) {
            std::cout << j << " ";
            j--;
        }

        std::cout << std::endl;
        i++;
    }

    return 0;
}