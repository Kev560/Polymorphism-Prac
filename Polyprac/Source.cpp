#include <iostream>
#include <string>

using namespace std;

class Shape
{
protected:
	string name;

public:
	Shape(string s)
	{
		name = s;
	}

	void setName(string s)
	{
		name = s;
	}

	string getName() const
	{
		return name;
	}

	virtual double getArea() const = 0;
};

class Circle : public Shape
{
	double radius;

public:
	Circle(string n, double r) : Shape(n)
	{
		radius = r;
	}
	
	void setRadius(double r)
	{
		radius = r;
	}

	double getRadius() const
	{
		return radius;
	}

	virtual double getArea() const
	{
		return (3.14*radius*radius);
	}
};

class Square : public Shape
{
	double side;

public:
	Square(string n, double s) : Shape(n)
	{
		side = s;
	}

	void setSide(double s)
	{
		side = s;
	}

	double getSide() const
	{
		return side;
	}

	virtual double getArea() const
	{
		return (side*side);
	}
};





int main()
{
	
	Shape *shapes[2] = {new Circle("CIRCLE",5), new Square("sQuArE",4)};

	for (int i = 0; i < 2; i++)
	{

		cout << shapes[i]->getName() << "\n" << shapes[i]->getArea() << endl;
	}
	
	system("pause");
	return 0;
}