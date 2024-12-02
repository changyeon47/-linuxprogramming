#include <iostream> //헤더파일 포함
#include "shape.hpp" //헤더파일 포함
using namespace std; //std생략
int main() {//메인함수 정의
    Circle x(0,0,2);//객체 생성
    Rect y(1,1,5,10);//객체 생성
    Triangle z(2,2,5,10);//객체 생성
    x.show();//맴버함수 호출
    y.show();//맴버함수 호출
    z.show();//맴버함수 호출
}
