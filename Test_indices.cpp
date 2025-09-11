#include <iostream>
#include "Find_indicies.h"
using namespace std;
int main(void){
    //test 1 (Multiple occurences)
    int* array = new int[5];
    array[0] = 1;
    array[1] = 1;
    array[2] = 0;
    array[3] = 4;
    array[4] = 1;
    vector<int> result_1 = find_indices(array,1,5);
    cout << "Test 1: \n";
    for (int num : result_1)
        cout << num << ' ';
    //test 2 (key not present)
    vector<int> result_2 = find_indices(array,2,5);
    cout << "Test 2: \n";
    if (result_2.size() == 0)
        cout << "element not found \n";
    else {
        for (int num : result_2)
        cout << num << ' ';
    }
    //test 3 (empty array)
    vector<int> result_3 = find_indices(array,1,0);
    cout << "Test 3:\n";
    if (result_3.size() == 0)
        cout << "Empty array";
    else {
        for (int num : result_3)
        cout << num << ' ';
    }
}