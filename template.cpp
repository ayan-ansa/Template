#include <iostream>
using namespace std;
template <class T>
class Ayan
{
public:
    T a;
    T b;
    Ayan(T x, T y)
    {
        a = x;
        b = y;
    }
    void sum();
};
// function outside the class definition
template <class T>
void Ayan<T>::sum()
{
    cout << "The sum of " << a << " and " << b << " is " <<a+b << endl;
}
template <class T>
void swapp(T a, T b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    Ayan<int> a1(10, 20);
    a1.sum();
    int x = 10, y = 20;
    swap(x, y);
    cout << "The value of x and y is " << x << " " << y;
    return 0;
}