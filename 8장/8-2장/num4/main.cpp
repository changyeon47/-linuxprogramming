#include <iostream>//헤더파일 포함
#include <string>//헤더파일 포함
#include "point.hpp"//헤더파일 포함
using namespace std;//std생략
int main() {//메인함수 정의
	ColorPoint cp(5, 5, "RED");//객체 생성
	cp.setPoint(10, 20);//맴버함수 호출
	cp.setColor("BLUE");//맴버함수 호출
	cp.show();//맴버함수 호출
	return 0;//함수 종료
}
