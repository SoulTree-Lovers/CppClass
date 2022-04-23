#include <iostream>
using namespace std;

class Vector2D
{
public:
    Vector2D();
    Vector2D(int x, int y);

    void output();

    int getX() const;
    int getY() const;

private:
    int x;
    int y;
};

const Vector2D operator +(const Vector2D& v1, const Vector2D& v2);

/* a - b : binary operator (피연산자가 2개 필요) */
const Vector2D operator -(const Vector2D& v1, const Vector2D& v2);

bool operator ==(const Vector2D& v1, const Vector2D& v2);

/* -a : unary operator (피연산자가 1개만 필요) */
const Vector2D operator -(const Vector2D& v1);

int main()
{
    Vector2D v0, v1(2, 2), v2(3, 3), v3;

    v3 = v1 + v2;
    v3.output();

    v3 = v2 - v2;
    v3.output();

    if (v3 == v0)
    {
        cout << "Operator - works!";
    }

    return 0;
}

const Vector2D operator +(const Vector2D& v1, const Vector2D& v2)
{
    int newVectorX = v1.getX() + v2.getX();
    int newVectorY = v1.getY() + v2.getY();


    return Vector2D(newVectorX, newVectorY); 
}

const Vector2D operator -(const Vector2D& v1, const Vector2D& v2)
{
    int newVectorX = v1.getX() - v2.getX();
    int newVectorY = v1.getY() - v2.getY();
    
    return Vector2D(newVectorX, newVectorY);
}

bool operator ==(const Vector2D& v1, const Vector2D& v2)
{
    return (v1.getX() == v2.getX()) && (v1.getY() == v2.getY());
}

const Vector2D operator -(const Vector2D& v1)
{
    return Vector2D(-v1.getX(), -v1.getY());
}


Vector2D::Vector2D(int x, int y) : x(x), y(y)
{/* 생성자 */}

Vector2D::Vector2D() : x(0), y(0)
{/* 생성자 */}

int Vector2D::getX( ) const
{
    return x;
}

int Vector2D::getY( ) const
{
    return y;
}

void Vector2D::output( )
{
    cout << "(" << x << "," << y << ")" << endl;
}