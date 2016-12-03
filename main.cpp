#include <iostream>
#include <thread>
#include <boost/thread.hpp>
class elem{
public:
    elem()= delete;
    elem(const int &i);
    elem(const elem &src);
    elem(const elem &&src);
    void show() const;

private:
    int num;

};

elem::elem(const int &i):num(i) {

}

elem::elem(const elem &src):num(src.num) {
    std::cout<<"COPY"<<std::endl;
}

elem::elem(const elem &&src):num(src.num) {
    std::cout<<"MOVE"<<std::endl;
}

void elem::show() const{
    std::cout<<num<<std::endl;
}

void func(const elem & den)
{
    den.show();
}

int main() {

    elem a = elem(4);
    std::thread t(func,a);
    t.join();

    return 0;
}