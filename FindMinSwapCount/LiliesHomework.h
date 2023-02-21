#ifndef TEST_LILIESHOMEWORK_H
#define TEST_LILIESHOMEWORK_H


#include <vector>
#include <algorithm>
#include <iostream>

class LiliesHomework {
private:
    const std::vector<int> arr;
    std::vector<int> indexArr;
public:
    explicit LiliesHomework(const std::vector<int> &_arr);

    void sortingIndexArray();

    void reverseIndexArray();

    int getMinSwapCountInIndexArray();
};


#endif //TEST_LILIESHOMEWORK_H
