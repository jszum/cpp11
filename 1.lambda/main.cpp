#include <iostream>
#include <algorithm>

int main() {

    auto lambda = [](){return 5;};
    int tab[] = {9,8,7,6,5,13,4,3,2,1};

    std::sort(std::begin(tab), std::end(tab), [](int i, int j){return i > j;});
    std::for_each(std::begin(tab), std::end(tab), [](int n) { std::cout<<n<<" ";});

    return 0;
}