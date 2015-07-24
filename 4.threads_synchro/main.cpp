#include <iostream>
#include <thread>
#include <mutex>

static std::mutex barrier;
int account = 100;
int operations = 10;

void adder()
{
    for(int i = 0; i < operations; i++)
    account += 100;
}

void subtractor()
{
    for(int i = 0; i < operations; i++)
    account -= 10;
}

int main() {

    constexpr int num = 2;

    std::thread t[num];

    t[0] = std::thread(adder);
    t[1] = std::thread(subtractor);

    t[0].join();
    t[1].join();

    std::cout<<"Final bilanse = "<<account<<std::endl;
    return 0;
}