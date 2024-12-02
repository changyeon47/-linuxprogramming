#ifndef COLOR_HPP//조건부 컴파일 지시자 정의
#define COLOR_HPP//매크로 상수 정의
class Color;//클래스 선언
Color operator+(Color a,Color b);//연산자 함수 선언
bool operator==(Color a,Color f);//연산자 함수 선언
class Color{//클래스 선언
    int red,green,blue;//맴버변수 선언
public://접근지정자
    Color(int red=0,int green=0,int blue=0);//생성자 선언
    void show();//맴버함수 선언
    friend Color operator+(Color a, Color b);//프랜드 함수 선언
    friend bool operator==(Color a,Color f);//프랜드 함수 선언
};
#endif//조건부 컴파일 지시자 끝
