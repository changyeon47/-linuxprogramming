#ifndef SHAPE_HPP//조건부 컴파일 지시자
#define SHAPE_HPP//매크로 상수 선언
class Shape{//클래스 선언
    int x,y;//맴버변수 선언
public://접근 지정자
    void showarea();//맴버함수 선언
    void set(int x,int y);//맴버함수 선언
};
class Circle:public Shape{//클래스 선언 및 상속
    int radius;//맴버변수 선언
public://접근지정자
    void setCircle(int x,int y,int radius = 0);//맴버함수 선언
    void show();//맴버함수 선언
};
class Rect:public Shape{//클래스 선언 및 상속
    int width,height;//맴버변수 선언
public://접근지정자
    void setRect(int x,int y,int width = 0,int height = 0);//맴버함수 선언
    void show();//맴버함수 선언
};
class Triangle:public Shape{//클래스 선언 및 상속
    int width, height;//맴버변수 선언
public://접근지정자
    void setTriangle(int x,int y,int width = 0,int height = 0);//맴버함수 선언
    void show();//맴버함수 선언
};
#endif//조건부 컴파일 지시자 끝