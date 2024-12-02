#include "power.hpp"//헤더파일 포함
#include <iostream>//헤더파일 포함
using namespace std;//std 생략
Power::Power(int kick, int punch){//타겟 생성자 정의
    this->kick = kick;//맴버변수의 값을 초기화
    this->punch = punch;//맴버변수의 값을 초기화
}
void Power::show(){//맴버변수 정의
    cout << "kick = " << kick << " punch = " << punch <<endl; // 출력문
}
Power Power::operator- (int op2){//연산자 함수 정의
    Power tmp;//객체 생성
    tmp.kick = this->kick - op2;//객체 값 초기화
    tmp.punch = this->punch - op2;//객체 값 초기화
    return tmp;
}
