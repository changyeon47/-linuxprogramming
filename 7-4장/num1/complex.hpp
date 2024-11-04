#ifndef COMPLEX_HPP//조건부 컴파일 지시자 시작
#define COMPLEX_HPP//매크로 상수 선언
class Complex{//클래스 선언
    int real;//맴버변수 선언
    int img;//맴버변수 선언
public://접근지정자
    Complex(int real,int img);//생성자 선언
    void show();//맴버 함수 선언
    Complex& operator++();//맴버 함수 선언
    Complex operator--(int x);//맴버 함수 선언
};
#endif//조건부 컴파일 지시자 끝