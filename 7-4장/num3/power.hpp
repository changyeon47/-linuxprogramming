#ifndef POWER_HPP//조건부 컴파일 지시자
#define POWER_HPP//매크로 상수 선언
class Power;//클래스 선언
Power operator*(int x,Power op);//연산자 함수 선언
class Power{//클래스 선언
    int kick,punch;//맴버변수 선언
public://접근 지정자
    Power(int kick=0,int punch=0);//생성자 선언
    void show();//맴버함수 선언
    friend Power operator*(int x, Power op);//프랜드 함수 선언
};
#endif//조건부 컴파일 지시자 끝