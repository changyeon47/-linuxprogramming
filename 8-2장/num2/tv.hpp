#ifndef TV_HPP//조건부 컴파일 지시자 정의
#define TV_HPP//매크로 상수 선언
#include <string>//헤더파일 포함
using namespace std;//std생략
class TV {//클래스 선언
    int size; // 맴버변수 선언
public://접근지정자
    TV(int size=0);//타겟생성자 선언
    void settv(int size);//맴버함수 선언
    int getSize();//맴버함수 선언
};
class WideTV : public TV { // 클래스 선언 및 상속
    bool videoIn;//맴버변수 선언
public://접근지정자
    WideTV(int size=0, bool videoIn=false);//생성자 선언
    void setwide(bool videoIn);//맴버함수 선언
    bool getVideoIn();//맴버함수 정의
};
class SmartTV : public WideTV { //클래스 선언 및 상속
    string ipAddr; // 인터넷 주소
public://접근지정자
    SmartTV(int size=0,bool videoIn=true,string ipAddr=" ");//생성자 선언
    void setSmartTV(int size, bool videoIn, string ipAddr);//맴버함수 선언
    string getIpAddr();//맴버함수 선언
};
#endif//조건부 컴파일 지시자 끝