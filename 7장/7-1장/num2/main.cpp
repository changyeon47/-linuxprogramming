#include <iostream> //헤더파일 포함
#include "complex.hpp" //헤더파일 포함
using namespace std; //std생략
int main() {//메인함수 정의
    Complex x(2, 3), y(-5, 10), sum; //객체 생성후 값 초기화
    ComplexManager man; //객체 생성
    sum = man.ComplexAdd(x, y);//맴버함수 호출후 값을 대입
    cout << "두 복소수의 합은"; // 출력문
    sum.show();//맴버함수 호출
    return 0;//함수 종료
}
