#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;
class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle();
    Rectangle(double w, double h);
    ~Rectangle();

    double getArea() const;
    void setWidth(double newWidth);

    double getCircum() const;
    void setHeight(double newHeight);

    void display() const;
};

#endif // RECTANGLE_H
