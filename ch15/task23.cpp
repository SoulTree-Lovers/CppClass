#include <iostream>
using namespace std;

class Figure{

public:
	virtual void draw() = 0;
	void center() {
		draw();
	}
private:
	int center_x, center_y;
};

class Point{
public:
	Point() : x(0), y(0) {}
	Point(int a, int b) : x(a), y(b) {}
	void out()
	{
		cout <<  "(" << x << "," << y << ")";
	}

    int x;
    int y;

};


class Rectangle : public Figure{ //사각형
public:
	virtual void draw()
	{
		cout << "A rectangle from "; p1.out(); cout << " to "; p2.out(); cout << endl;
	}
	Rectangle(Point& p1, Point& p2) : p1(p1), p2(p2) {}

private:
	Point p1, p2;
};

class Circle : public Figure{ // 원
public:

	virtual void draw()
	{
		cout << "A circle with the center of "; center.out(); cout << " and the radius of " << r << endl;
	}

	Circle(Point& p1, int r) : center(p1), r(r) {}

private:
	Point center;
	int r;
};

class Triangle : public Figure{ // 삼각형
public:

	virtual void draw(){
		cout << "Triangle class draw function \n";
	}
private:
	int bottom, height;
};

void draw2figues(Figure& f1, Figure& f2)
{
	cout << "First figure is: ";
	f1.draw();

	cout << "Second figure is: ";
	f2.draw(); 
}

int main() 
{
	Point p1(0,0), p2(2,2);
	Rectangle r1(p1, p2);
	Circle c1(p1, 2);
	draw2figues(r1, c1);

    return 0;
}