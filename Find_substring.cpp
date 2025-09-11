#include <iostream>
#include <string>
using namespace std;
int find_substring(string s1,string s2){
    int search_size = s1.size();
    int substr_size = s2.size();


    for (int i = 0; i <= search_size - substr_size; ++i) {
        if (s1.substr(i, substr_size) == s2) return i;
    }
    return -1;
}
