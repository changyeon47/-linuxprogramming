#include "color.hpp"//헤더파일 포함
#include <iostream>//헤더파일 포함
using namespace std;//std생략
Color::Color(int red,int green,int blue){//생성자 정의
    this->red = red;//맴버변수 값 초기화
    this->green = green;//맴버변수 값 초기화
    this->blue = blue;//맴버변수 값 초기화
}
void Color::show(){//맴버함수 정의
    cout << red << ' ' << green<< ' ' << blue << endl;//출력문
}
Color operator+(Color a,Color b){//연산자 함수 정의
    Color tmp;//객체 생성
    tmp.red = a.red + b.red;//객체의 값을 연산후 대입
    tmp.green = a.green + b.green;//객체의 값을 연산후 대입
    tmp.blue = a.blue + b.blue;//객체의 값을 연산후 대입
    return tmp;//객체 리턴
}
bool operator==(Color a,Color f){//연산자 함수 정의
    if(a.red == f.red && a.blue == f.blue) return true;//조건문이 참일때 true리턴
    else return false;//조건문이 거짓일때 false 리턴
}
