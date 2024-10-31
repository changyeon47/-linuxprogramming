#include <iostream>//헤더파일 포함
#include "complex.hpp" //헤더파일 포함
using namespace std;//std생략
Complex::Complex(int real, int img){//타겟생성자 정의
    this->real = real;//맴버 변수의 값을 초기화
    this->img = img;//맴버 변수의 값을 초기화
}
Complex::Complex():Complex(0,0){}//위임생성자 정의
void Complex:: show(){//맴버 함수 정의
    cout << real<< " + " << img <<"j"<<endl;//출력문 
}
Complex Complex::operator + (Complex op2){//연산자 함수
    Complex tmp;//객체 생성
    tmp.real = this->real + op2.real;//생성한 객체에 real값을 초기회
    tmp.img = this->img + op2.img;//생성한 객체에 img값을 초기회
    return tmp;//객체 반환
}