#include <iostream>
#include <memory>

using namespace std;

int main() {

    {
        std::shared_ptr<int> p1(new int(137));
        {
            std::shared_ptr<int> p2 = p1;
            std::cout << p2.use_count() << "\n";
        }
        std::cout << p1.use_count() << "\n";
    }

    {
        std::unique_ptr<int> p1(new int(1));
        std::cout<<p1.get()<<std::endl;

        std::unique_ptr<int> p2 = std::move(p1);
        std::cout<<"P1 = "<<p1.get()<<std::endl;
        std::cout<<"P2 = "<<p2.get()<<std::endl;
    }
    return 0;
}