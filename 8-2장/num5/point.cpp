#include <iostream>//헤더파일 포함
#include <string>//헤더파일 포함
#include "point.hpp"//헤더파일 포함
using namespace std;//std생략
Point::Point(int x, int y) { this->x = x; this->y = y; }//생성자 정의
int Point::getX() { return x; }//맴버함수 정의
int Point::getY() { return y; }//맴버함수 정의
void Point::move(int x, int y) { this->x = x; this->y = y; }//맴버함수 정의
ColorPoint::ColorPoint(int x, int y, string color) : Point(x, y) { this->color = color; }//생성자 정의
void ColorPoint::setPoint(int x, int y) { move(x, y); }//맴버함수 정의
void ColorPoint::setColor(string color) { this->color = color; }//맴버함수 정의
void ColorPoint::show() { cout << color << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다." << endl; }//맴버함수 정의