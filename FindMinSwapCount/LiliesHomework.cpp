#include "LiliesHomework.h"

LiliesHomework::LiliesHomework(const std::vector<int> &_arr) : arr(_arr) {
    for (int i = 0; i < arr.size(); ++i) {
        indexArr.push_back(i);
    }
    sortingIndexArray();
}

void LiliesHomework::sortingIndexArray() {
    std::sort(indexArr.begin(), indexArr.end(),
              [this](const int i, const int j) -> bool {
                  return arr[i] < arr[j];
              });
}

void LiliesHomework::reverseIndexArray() {
    std::reverse(indexArr.begin(), indexArr.end());
}

int LiliesHomework::getMinSwapCountInIndexArray() {
    int countIndependentCycles = 0;
    std::vector<bool> usedIndex(indexArr.size(), false);
    for (int i = 0; i < indexArr.size(); ++i) {
        int currentIndex = i;
        if (usedIndex[currentIndex])
            continue;
        int start_index = currentIndex;
        while (!usedIndex[currentIndex]) {
            usedIndex[currentIndex] = true;
            currentIndex = indexArr[currentIndex];
            if (start_index != currentIndex) {
                std::cout << start_index << " <-> " << currentIndex << ", ";
            }
        }
        countIndependentCycles++;
    }
    std::cout << "\n" << indexArr.size() - countIndependentCycles << "\n";
    return (int) indexArr.size() - countIndependentCycles;
}
