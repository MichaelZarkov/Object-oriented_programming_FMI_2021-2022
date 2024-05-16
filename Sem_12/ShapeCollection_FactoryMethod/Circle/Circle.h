#pragma once
#include "Shape.h"

class Circle : public Shape
{
public:
	Circle(int x, int y, double radius);

	virtual double getArea() const override;
	virtual double getPerimeter() const override;
	virtual bool isPointInFigure(int x, int y) const override;
    
	virtual Shape* clone() const override;
	
	constexpr static int getCircleType()
	{
		return 1;
	}

private:
	double radius;
};
