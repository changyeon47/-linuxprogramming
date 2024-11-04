#include <iostream>//헤더파일 포함
#include "power.hpp"//헤더파일 포함
using namespace std;//std생략
int main() {//메인함수 정의
    Power a(3, 5), b;//객체 생성
    a.show();//맴버함수 호출
    b.show();//맴버함수 호출
    b = 2*a; // 파워 객체와 정수 곱하기
    a.show();// 맴버함수 호출
    b.show();//맴버함수 호출
}
