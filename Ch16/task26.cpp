#include <iostream>
using namespace std;

template<class T>
class Quad
{
public:
    Quad(T value1, T value2, T value3, T value4)
    {
        v1 = value1;
        v2 = value2;
        v3 = value3;
        v4 = value4;
    }

    friend ostream& operator << (ostream& outputStream, const Quad<T>& q1)
    {
        outputStream << "Elements are: " << q1.v1 << ", " << q1.v2 << ", " << q1.v3 << ", " << q1.v4;
        return outputStream;
    }

private:
    T v1;
    T v2;
    T v3;
    T v4;
};




int main()
{
    Quad<int> qi (5, 6, 7, 8);
    Quad<string> qs ("hello", "C++", "programming", "language");
    Quad<double> qd (1.1, 2.2, 3.3, 4.4);

    cout << qi << endl;
    cout << qs << endl;
    cout << qd << endl;

    return 0;
}