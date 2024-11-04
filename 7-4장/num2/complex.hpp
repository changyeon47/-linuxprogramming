#ifndef COMPLEX_HPP//조건부 컴파일 지시자
#define COMPLEX_HPP//매크로 상수 선언
class Complex;//클래스 선언
Complex& operator ++(Complex& op);//연산자 함수선언
Complex operator--(Complex& op,int a);//연산자 함수 선언
class Complex{//클래스 선언
    int real;//맴버변수 선언
    int img;//맴버변수 선언
public://접근지정자
    Complex(int real,int img);//생성자 정의
    void show();//맴버 함수 선언
    friend Complex& operator++(Complex& op);//프랜드 함수 선언
    friend Complex operator--(Complex& op,int a);//프랜드 함수 선언
};
#endif//조건부 컴파일 지시자 끝