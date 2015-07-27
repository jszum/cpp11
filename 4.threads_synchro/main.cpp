#include <iostream>
#include <thread>


int operations = 1000;

void adder(int & acc)
{
    for(int i = 0; i < operations; i++)
    {
        acc += 10;
    }
}

void subtractor(int & acc)
{
    for(int i = 0; i < operations; i++)
    {
        acc -= 10;
    }
}

int main() {

    constexpr int num = 2;
    int account = 100;

    std::thread t[num];

    t[0] = std::thread(adder, std::ref(account));
    t[1] = std::thread(subtractor, std::ref(account));

    t[0].join();
    t[1].join();

    std::cout<<"Final bilanse = "<<account<<std::endl;
    return 0;
}