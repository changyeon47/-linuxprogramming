#include "Book.hpp"//헤더파일 포함
#include <iostream>//헤더파일 포함
Book::Book(string title, int price, int pages){//생성자 정의
    this->title = title;//맴버변수 값 초기화
    this->price = price;//맴버변수 값 초기화
    this->pages = pages;//맴버변수 값 초기화
}
void Book::show(){//맴버함수 정의
    cout << title << ' ' <<price << "원" << pages << "페이지" << endl;//출력문
}
string Book::getTitle(){return title;}//맴버함수 정의 값을 리턴
bool operator<(string& b, Book& book){//연산자 함수 정의
    if(b < book.title) return true;//b가 더 뒤에 나올때 true를 리턴
    else return false;//아닐때 false 리턴
}
