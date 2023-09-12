#include<iostream>
using namespace std;


auto sum(int a){
    return [a](int b){return a+b}
}


int main()
{
    auto result =sum(5);
    int a = result(100);
    int b = result(30);
    cout << a << b <<end1;
}