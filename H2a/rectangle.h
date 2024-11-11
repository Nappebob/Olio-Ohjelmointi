#ifndef RECTANGLE_H
#define RECTANGLE_H

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
    double getArea() const;
    double getCircum() const;

};

#endif // RECTANGLE_H
