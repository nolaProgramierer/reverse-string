/*
 * This program will take a string and
 * using recursion reverse it
 */

#include <simpio.h>
#include "console.h"

using namespace std;

/*
 * Function prototypes
 */
string reverseString(string str);

int main() {
    cout << "Please enter a word:" << endl;
    cout << "When you wish to exit enter '0'" << endl;

    while(true) {
        string word = getLine("Please enter a word:");
        if (word == "0") break;

        else {
            cout << reverseString(word) << endl;
        }
    }
    return 0;
}
string reverseString(string str) {
   if (str.length() < 2) return str;
   else {
     return reverseString(str.substr(1)) + str[0];
   }
}
