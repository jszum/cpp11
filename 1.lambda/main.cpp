#include <iostream>
#include <algorithm>

int main() {

    auto lambda = [](){return 5;};
    std::cout<<"using lambda(ret 5) = "<<lambda();


    int tab[] = {9,8,7,6,5,13,4,3,2,1};
    std::sort(std::begin(tab), std::end(tab), [](int i, int j){return i > j;});
    std::for_each(std::begin(tab), std::end(tab), [](int n) { std::cout<<n<<" ";});
    std::cout<<std::endl;

    int number = 42;

    auto capture_lambda = [&number](int n){return number+n;};
    std::cout<<capture_lambda(0)<<std::endl;
    std::cout<<capture_lambda(1)<<std::endl;


    return 0;
}