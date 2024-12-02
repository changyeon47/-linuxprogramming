#include<iostream>//헤더파일 포함
#include "Book.hpp"//헤더파일 포함
int main(){//메인함수 정의
    Book a("청춘", 20000,300);//객체 생성
    string b;//string객체 생성
    cout << "책 이름을 입력하세요 >>";//출력문
    getline(cin,b);//키보드로부터 입력받아 b에 대입
    if(b < a)//연산자 함수 호출
        cout << a.getTitle() << "이 " << b<< "보다 뒤에 있구나!" << endl;//함수 호출및 출력문
}
