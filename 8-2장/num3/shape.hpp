#ifndef SHAPE_HPP
#define SHAPE_HPP
class Shape{
    int x,y;
public:
    Shape(int x=0,int y=0);
    ~Shape();
    void showpositive();
};
class Circle:public Shape{
    int radius;
public:
    Circle(int x,int y,int radius);
    ~Circle();
    void show();
};
class Rect:public Shape{
    int width,height;
public:
    Rect(int x,int y,int width,int height);
    ~Rect();
    void show();
};
class Triangle:public Shape{
    int width,height;
public:
    Triangle(int x,int y,int width,int height);
    ~Triangle();
    void show();
};
#endif