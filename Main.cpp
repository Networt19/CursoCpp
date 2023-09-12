#include<iostream>
using namespace std;
class Punto{
    public:


    int x, y;

    Punto(int x, int y) : x(x), y(y) {}

    Punto operator+(const Punto& otro){
        return Punto(x + otro.x, y + otro.y);
    }

    Punto operator-(const Punto& otro){
        return Punto(x - otro.x, y - otro.y);
    }
};

int main() {
    Punto punto1(3, 4);
    Punto punto2(1, 2);

    Punto suma = punto1 + punto2;
    Punto resta =punto1 -punto2;

    std::cout << punto1.x <<punto1.y << std::endl;
    std::cout << punto2.x <<punto2.y << std::endl;
    std::cout << suma.x <<suma.y << std::endl;
    std::cout << suma.x <<suma.y << std::endl;
}