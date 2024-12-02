#include <iostream>//헤더파일 포함
#include "shape.hpp"//헤더파일 포함
using namespace std;//std생략
Shape::Shape(int x,int y){//생성자정의
    this->x = x;//변수값 초기화
    this->y = y;//변수값 초기화
    cout << "Shape 생성";//출력문
}
Shape::~Shape(){//소멸자 정의
    cout << "Shape 소멸"<<endl;//출력문
}
void Shape::showpositive(){//맴버함수 정의
    cout<< "좌표 (" << x << "," << y << ")";//출력문
}
Circle::Circle(int x,int y,int radius):Shape(x,y){//생성자 정의
    this->radius = radius;//변수값 초기화
    cout<< "Circle 생성" <<endl;//출력문
    }
Circle::~Circle(){cout << "Circle 소멸";}//소멸자 정의
void Circle::show(){//맴버함수 정의
    showpositive();//맴버함수 호출
    cout << "에 반지름" << radius << "인 원" << endl; // 출력문
}
Rect::Rect(int x,int y,int width,int height):Shape(x,y){//생성자 정의
    this->width = width;//변수값 초기화
    this->height = height;//변수값 초기화
    cout << "Rext생성" << endl;//출력문
}
Rect::~Rect(){//소멸자 정의
    cout << "Rext 소멸";//출력문
}
void Rect::show(){//맴버함수 정의
    showpositive();//맴버함수 호출
    cout << "에 폭" << width << ", 높이" << height << "인 직사각형" << endl;//출력문
}
Triangle::Triangle(int x,int y,int width,int height):Shape(x,y){//생성자 정의
    this->width = width;//변수값 초기화
    this->height = height;//변수값 초기화
    cout << "Triangle 생성"<<endl;//출력문
}
Triangle::~Triangle(){//소멸자 정의
    cout << "Triangle 소멸";//출력문
}
void Triangle::show(){//맴버함수 정의
    showpositive();//맴버함수 호출
    cout<< "에 밑변" << width << ", 높이" << height << "인 삼각형" << endl;//출력문
}
