#include<iostream>//헤더파일 포함
#include "Book.hpp"//헤더파일 포함
int main(){//메인함수 정의
    Book book("벼룩시장", 0,50);//객체 생성
    book.show();//함수 호출
    if(!book) cout<< "공짜다" << endl;//연산자 함수 호출후 참이면 출력문 실행
}