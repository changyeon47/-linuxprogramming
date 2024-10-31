#include <iostream>//헤더파일 포함
#include "power.hpp"//헤더파일 포함
using namespace std;//std생략
int main() {//메인함수 정의
    Power a(3, 5), b;//객체 생성후 값을 초기화
    a.show();//맴버함수 호출
    b.show();//맴버함수 호출
    b = a - 2; // 파워 객체와 정수 빼기
    a.show();//맴버함수 호출
    b.show();//맴버함수 호출
    return 0;//함수 종료
}
