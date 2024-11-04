#include <iostream>//헤더파일 포함
#include "color.hpp"//헤더파일 포함
using namespace std;//std생략
int main(){//메인함수 정의
    Color red(255, 0, 0), blue(0, 0, 255),c;//객체 생성
    c= red + blue;//연산자 함수 호출후 리턴값 대입
    c.show();//함수 호출
    Color fuchsia(255, 0, 255);//객체 생성
    if(c == fuchsia)//연산자 함수 호출
        cout<<"보라색 맞음" << endl;//출력문
    else//조건문이 거짓일때
        cout << "보라색 아님" << endl;//출력문
}