#include <iostream>//헤더파일 포함
#include "complex.hpp"
using namespace std;//std생략
int main() {//메인함수 정의
    Complex x(2, 3);//객체 생성
    ++x;//함수 호출
    cout << "증가결과 ";//출력문
    x.show();//함수 호출
    x--;//함수 호출
    cout << "감소결과 ";//출력문
    x.show();//함수 출력
}
