#pragma once
class Rectangle
{
private:
	float length;
	float width;
public:
	Rectangle();
	Rectangle(float L, float W);
	float displayArea(void);
	float displayCircum(void);
	void setLength(float L);
	float getLength(void);
	void setWidth(float W);
	float getWidth(void);
};

