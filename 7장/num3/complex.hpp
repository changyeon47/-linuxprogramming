#ifndef COMPLEX_HPP //조건부 컴파일 지시자
#define COMPLEX_HPP //매크로 상수 정의
class Complex;//클래스 선언
class ComplexManager{//클래스 선언
public://접근지정자
	Complex ComplexSub(Complex &a, Complex &b);//멤버함수 선언
	Complex ComplexAdd(Complex &a, Complex &b);//멤버함수 선언
};
class Complex{ //클래스 선언
	int real, img;//맴버 변수 선언
public://접근지정자
	Complex();//위임생성자 선언
	Complex(int real, int img);//타겟생성자 선언
	void show();// 맴버함수 선언
	friend ComplexManager; //프렌드 함수 선언
};
#endif//조건부 컴파일 지시자 정의끝
