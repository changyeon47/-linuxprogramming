#include <iostream>//헤더파일 포함
#include "shape.hpp"//헤더파일 포함
using namespace std;//std생략
void Shape::set(int x,int y){//맴버함수 정의
    this->x = x;//맴버변수 값 초기화
    this->y = y;//맴버변수 값 초기화
}
void Shape::showarea(){//맴버 함수 정의
    cout << "좌표 (" << x << "," << y << ")" ;//출력문
}
void Circle::setCircle(int x,int y,int radius){//맴버함수 정의
    set(x,y);//맴버 함수 호출
    this->radius = radius;//맴버변수 값 초기화
}
void Circle::show(){//맴버함수 정의
    showarea();//맴버함수 호출
    cout << "에 반지름" << radius << "인 원" << endl; // 출력문
}
void Rect::setRect(int x, int y, int width, int height ){//맴버함수 정의
    set(x,y);//맴버함수 호출
    this->width = width;//맴버변수 값 초기화
    this->height = height;//맴버변수 값 초기화
}
void Rect::show(){//맴버함수 정의
    showarea();//맴버함수 호출
    cout << "에 폭" << width << ", 높이" << height << "인 직사각형" << endl;//출력문
}
void Triangle::setTriangle(int x, int y, int width, int height){//맴버함수 정의
    set(x,y);//맴버함수 호출
    this->width = width;//맴버변수 값 초기화
    this->height = height;//맴버변수 값 초기화
}
void Triangle::show(){//맴버함수 정의
    showarea();//맴버함수 호출
    cout << "에 밑변" << width << ", 높이" << height << "인 삼각형" << endl;//출력문
}