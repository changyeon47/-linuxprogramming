    #include "complex.hpp"//헤더파일 포함
    #include <iostream>//헤더파일 포함
    using namespace std;//std생략
    Complex::Complex(int real,int img){//생성자 정의
        this->real = real;//맴버변수 값을 초기화
        this->img = img;//맴버변수 값을 초기화
        cout << "복소수 " << real << " + " <<img <<"j 생성"<<endl;//출력문
    }
    void Complex::show(){//맴버함수 정의
        cout << real << " + " <<img <<"j"<<endl;//출력문
    }
    Complex& operator++(Complex& op){//맴버함수 정의
        op.real++;//맴버변수 1증가
        op.img++;//맴버변수 1증가
        return op;//변경된 객체를 리턴
    }
    Complex operator--(Complex& op,int a){//맴버함수 정의
        op.img--;//맴버변수 1감소
        op.real--;//맴버변수 1감소
        return op;//변경된 객체를 리턴
    }
