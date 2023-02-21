#include <vector>
#include "LiliesHomework.h"


int liliesHomework(const std::vector<int> &arr) {
    auto *lilly = new LiliesHomework(arr);
    int minSort = lilly->getMinSwapCountInIndexArray();
    lilly->reverseIndexArray();
    int maxSort = lilly->getMinSwapCountInIndexArray();
    return std::min(minSort, maxSort);
}

int main() {
    std::vector<int> arr{2, 1, 7, 1, 10, 78, 3};
//    std::cout <<
    liliesHomework(arr)
//    << std::endl
            ;
}
