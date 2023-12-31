#include <iostream>
#include "./Functions/Function.hpp"
using namespace std;
void Hello_World_1();
void Hello_World_2();

int main()
{
    Function::Function Test;
    bool State{false};
    Hello_World_2();
    if(true==State){Hello_World_1();}
    Test.Print();
    return 0;
}

void Hello_World_1()
{
    cout<<"Hello World :)"<<endl;
}

void Hello_World_2()
{
    cout<<"Hello World"<<endl;
    cout<<"Hello World"<<endl;
}