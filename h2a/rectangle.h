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
    double getWidth() const;
    void setWidth(double newWidth);
    double getHeight() const;
    void setHeight(double newHeight);

    void printData();
};

#endif // RECTANGLE_H
