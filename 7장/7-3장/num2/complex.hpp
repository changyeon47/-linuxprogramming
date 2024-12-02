#ifndef COMPLEX_HPP//중복 방지를 위한 조건부 컴파일 지시자
#define COMPLEX_HPP//매크로 상수 선언
class Complex{//클래스 선언
    int real;//맴버변수 선언
    int img;//맴버변수 선언
public://접근 지정자
    Complex();//위임생성자 선언
    Complex(int real, int img);//타겟생성자 선언
    void show();//맴버함수 선언
    Complex operator * (Complex op2);//연산자 함수 선언
};
#endif//조건부 컴파일 지시자 끝
