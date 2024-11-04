#include "power.hpp"//헤더파일 포함
#include <iostream>//헤더파일 포함
using namespace std;//std생략
Power::Power(int kick,int punch){//생성자 정의
    this->kick = kick;//맴버변수 값을 초기화
    this->punch = punch;//맴버변수 값을 초기화
}
void Power::show(){//맴버함수 정의
    cout<< "kick = " << kick << ", punch = " <<punch <<endl;//출력문
}
Power operator*(int x,Power op){//맴버 함수 정의
    Power tmp;//객체생성
    tmp.kick = x * op.kick;//객체 값을 초기화
    tmp.punch = x * op.punch;//객체 값을 초기화
    return tmp;//객체 리턴
}