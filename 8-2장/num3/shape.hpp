#ifndef SHAPE_HPP//조건부 컴파일 지시자 정의
#define SHAPE_HPP//매크로 상수 선언
class Shape{//클래스 선언
    int x,y;//맴버변수 선언
public://접근지정자
    Shape(int x=0,int y=0);//생성자 선언
    ~Shape();//소멸자 선언
    void showpositive();//맴버함수 선언
};
class Circle:public Shape{//클래스 상속 및 선언
    int radius;//맴버변수 선언
public://접근지정자
    Circle(int x,int y,int radius);//생성자 선언
    ~Circle();//소멸자 선언
    void show();//맴버함수 선언
};
class Rect:public Shape{//클래스 상속 및 선언
    int width,height;//맴버변수 선언
public://접근지정자
    Rect(int x,int y,int width,int height);//생성자 선언
    ~Rect();//소멸자 선언
    void show();//맴버함수 선언
};
class Triangle:public Shape{//클래스 상속 및 선언
    int width,height;//맴버변수 선언
public://접근지정자
    Triangle(int x,int y,int width,int height);//생성자 선언
    ~Triangle();//소멸자 선언
    void show();//맴버함수 선언
};
#endif//조건부 컴파일 지시자 끝
