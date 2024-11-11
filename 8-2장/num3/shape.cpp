#include <iostream>
#include "shape.hpp"
using namespace std;
Shape::Shape(int x,int y){
    this->x = x;
    this->y = y;
    cout << "Shape 생성";
}
Shape::~Shape(){
    cout << "Shape 소멸"<<endl;
}
void Shape::showpositive(){
    cout<< "좌표 (" << x << "," << y << ")";
}
Circle::Circle(int x,int y,int radius):Shape(x,y){
    this->radius = radius;
    cout<< "Circle 생성" <<endl;
    }
Circle::~Circle(){cout << "Circle 소멸";}
void Circle::show(){//맴버함수 정의
    showpositive();
    cout << "에 반지름" << radius << "인 원" << endl; // 출력문
}
Rect::Rect(int x,int y,int width,int height):Shape(x,y){
    this->width = width;
    this->height = height;
    cout << "Rext생성" << endl;
}
Rect::~Rect(){
    cout << "Rext 소멸";
}
void Rect::show(){//맴버함수 정의
    showpositive();
    cout << "에 폭" << width << ", 높이" << height << "인 직사각형" << endl;//출력문
}
Triangle::Triangle(int x,int y,int width,int height):Shape(x,y){
    this->width = width;
    this->height = height;
    cout << "Triangle 생성"<<endl;
}
Triangle::~Triangle(){
    cout << "Triangle 소멸";
}
void Triangle::show(){//맴버함수 정의
    showpositive();
    cout<< "에 밑변" << width << ", 높이" << height << "인 삼각형" << endl;//출력문
}
