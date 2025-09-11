#include <iostream>
#include <string>
#include "Find_substring.h"
using namespace std;
int main(void){
    //pattern at start 
    cout << "Pattern at start (ab in abcdef): " <<  find_substring("abcdef","ab") << '\n';
    //pattern at end
    cout << "Pattern at end (ef in abcdef): " << find_substring("abcdef","ef") << '\n';
    //not present
    cout << "Pattern not present (xyz in abcdef): " << find_substring("abcdef","xyz") << '\n';
    //empty pattern
    cout << "Empty pattern : " << find_substring("ab","");
}