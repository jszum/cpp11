#include <iostream>
#include <thread>


void thread_function(int nr)
{
    for(int i = 0; i < 10; i++)
    {
        std::cout<<"Printing from thread "<<nr<<std::endl;
    }

}

int main() {

    static const int num_threads = 10;

    std::thread t[num_threads];

    for(int i = 0; i < num_threads; i++)
    {
        t[i] = std::thread(thread_function, i);
    }

    for(int i = 0; i < num_threads; i++)
    {
       t[i].join();
    }

    std::cout<<"\nDone - after all threads finished"<<std::endl;
    return 0;
}