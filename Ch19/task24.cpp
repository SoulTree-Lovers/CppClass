#include <iostream>
#include <vector>

using namespace std;
using std::vector;

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


void draw2figues(Figure& f1)
{
	cout << "Figure is: ";
	f1.draw();
}


int main()
{
    std::vector<Figure*> figure;
    vector<Figure*>::const_iterator point;

    string type;

    while (true)
    {
        cout << "Enter figure type or draw: ";
        cin >> type;
        
        if (type == "rectangle")
        {
            Point p1, p2;
            int p1x, p1y;
            int p2x, p2y;

            cout << "Enter x, y coordinates of P1: ";
            cin >> p1x >> p1y;

            cout << "Enter x, y coordinates of P2: ";
            cin >> p2x >> p2y;
            
            p1 = Point(p1x, p1y);
            p2 = Point(p2x, p2y);

            Rectangle* r1 = new Rectangle(p1, p2);

            figure.push_back(r1);
        }
        else if (type == "circle")
        {
            Point center;
            int x, y, radius;

            cout << "Enter x, y coordinates of the center: ";
            cin >> x >> y;

            cout << "Enter the radius: ";
            cin >> radius;

            center = Point(x, y);

            Circle* c1 = new Circle(center, radius);
            
            figure.push_back(c1);
        }

        else if(type == "draw")
        {
            int i = 0;
            while (i < figure.size())
            {
                figure[i]->draw();
                i++;
            }

            // 아래 코드에서 Segmentation fault 발생 (허용되지 않은 방법으로 메모리에 접근할 때 발생함)
            // for (int i = 0; i <= figure.size(); i++)
            // {
            //     figure[i]->draw();
            //     cout << endl;
            // }

            //아래 코드는 왜 안 되나?
            // for (point = figure.begin(); point != figure.end(); point++)
            // {
            //     point->draw();
            //     cout << endl;
            // }

            break;
        }

        else
        {
            continue;
        }
    } 

    return 0;
}