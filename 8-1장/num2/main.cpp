#include <iostream>//헤더파일 포함
#include "shape.hpp"//헤더파일 포함
using namespace std;//std생략
int main() {//메인함수 정의
    Circle x; Rect y; Triangle z;//객체생성
    x.setCircle(0, 0, 2); //맴버 함수 호출 후 맴버변수 값 초기화
    y.setRect(1, 1, 5,10); //맴버 함수 호출 후 맴버변수 값 초기화
    z.setTriangle(2, 2, 3, 4); //맴버 함수 호출 후 맴버변수 값 초기화
    x.show(); y.show(); z.show(); //맴버 함수 호출
}
