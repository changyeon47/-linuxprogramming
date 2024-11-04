#ifndef BOOK_HPP//조건부 컴파일 지시자 저정의
#define BOOK_HPP//매크로 상수 선언
#include <string>//헤더파일 포함
using namespace std;//std생략
class Book;//클래스 선언
bool operator<(string & b, Book& book);//연산자 함수 선언
class Book{//클래스 선언
    string title;//맴버변수 선언
    int price,pages;//맴버변수 선언
public://접근지정자
    Book(string title="", int price = 0,int pages=0);//생성자 선언
    void show();//맴버함수 선언
    string getTitle();//맴버함수 선언
    friend bool operator<(string& b, Book& book);//프랜드 함수 선언
};
#endif//조건부 컴파일 지시자 끝