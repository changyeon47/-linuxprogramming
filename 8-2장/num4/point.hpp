#ifndef POINT_HPP//조건부 컴파일 지시자
#define POINT_HPP//매크로 상수 정의
#include <string>//헤더파일 포함
using namespace std;//std생략
class Point {//클래스 선언
	int x, y;//맴버변수 선언
public://접근지정자
	Point(int x, int y);//생성자 선언
	int getX();//맴버함수 선언
	int getY();//맴버함수 선언
	void move(int x, int y);//맴버함수 선언
};

class ColorPoint : public Point {//클래스 선언
	string color;//맴버변수 선언
public://접근지정자
	ColorPoint(int x, int y, string color);//맴버함수 선언
	void setPoint(int x, int y);//맴버함수 선언
	void setColor(string color);//맴버함수 선언
	void show();//맴버함수 선언
};
#endif//조건부 컴파일 지시자 정의 끝