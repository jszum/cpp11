#include <iostream>
#include <thread>


void thread_function()
{
    for(int i = 0; i < 10; i++)
    {
        std::cout<<"Printing from thread "<<i<<std::endl;
    }

    std::cout<<"Done"<<std::endl;
}

int main() {

    static const int num_threads = 10;

    std::thread t[num_threads];

    for(int i = 0; i < num_threads; i++)
    {
        t[i] = std::thread(thread_function);
    }


    for(int i = 0; i < num_threads; i++)
    {
       t[i].join();
    }

    return 0;
}