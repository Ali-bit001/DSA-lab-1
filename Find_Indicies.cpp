#include <iostream>
#include <vector>
std::vector<int> find_indices(int* array,int key,int size){
    std::vector<int> result;
    for (int i = 0;i < size;++i){
        if (array[i] == key)
            result.push_back(i);
    }
    return result;
}

