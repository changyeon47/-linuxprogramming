#include "complex.hpp" //클래스와 함수가 선언된 헤더파일 포함
#include <iostream> //헤더파일 포함
using namespace std; //std생략
Complex::Complex(int real, int img){ //타겟생성자 정의
	this->real = real;//매개변수로 받은 값을 클래스 변수에 대입
	this->img = img; //매개변수로 받은 값을 클래스 변수에 대입
	cout << "복소수" << real << "+" << img << "j 생성" << endl;//출력문
}
Complex::Complex():Complex(0,0){}//위임생성자 정의
void Complex::show(){ //맴버함수 정의
	cout << real <<  "+" << img <<"j" << endl; //출력문
}
Complex ComplexManager::ComplexAdd(Complex &a,Complex &b){ //전역함수 선언
	Complex res; //객체생성후 변수값 초기화
	res.real = a.real + b.real; // 연산후 값을 대입
	res.img = a.img + b.img ; //연산후 값을 대입
	return res; //객체를 반환
}
Complex ComplexManager::ComplexSub(Complex &a,Complex &b){ //전역함수 선언
	Complex res; //객체생성후 변수값 초기화
	res.real = a.real - b.real; // 연산후 값을 대입
	res.img = a.img - b.img ; //연산후 값을 대입
	return res; //객체를 반환
}
