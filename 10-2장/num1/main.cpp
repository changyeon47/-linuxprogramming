#include <iostream>//헤더파일 포함
using namespace std;//std생략
template <class T1, class T2>//템플릿 클래스 선언
class GClass {//클래스 선언
    T1 a;//맴버변수 선언
    T2 b;//맴버변수 선언
public://접근지정자
    GClass(){ this->a = 0; this->b = 0; };//생성자 선언
    void set(T1 a, T2 b){ this->a = a; this->b = b; }//맴버함수 정의
    void get(T1& a, T2& b){ a = this->a; b = this->b; }//함버함수 정의
    void swap();//맴버함수 선언
};
template <class T1, class T2>//템플릿 클래스 정의
void GClass<T1, T2>::swap(){//맴버함수 정의
    T1 tmp;//맴버변수 선언
    tmp = a;//변수 초기화
    a = b;//변수 값 변경
    b = tmp;//변수 값 변경
} 
int main() {//메인함수 정의
    int a, b;//변수 선언
    GClass<int, int> x;//템플릿 객체 생성
    x.set(2, 5);//맴버함수 호출
    x.get(a, b);//맴버함수 호출
    cout << "a=" << a << '\t' << "b=" << b << endl;//출력문
    x.swap();//맴버함수 호출
    x.get(a, b);//맴버함수 호출
    cout << "a=" << a << '\t' << "b=" << b << endl;//출력문
    double c, d;//변수 선언
    GClass<double, double> y;//템플릿 객체 생성
    y.set(3.14, 6.28);//맴버함수 호출
    y.get(c, d);//맴버함수 호출
    cout << "c=" << c << '\t' << "d=" << d << endl;//출력문
    y.swap( );//맴버함수 호출
    y.get(c, d);//맴버함수 호출
    cout << "c=" << c << '\t' << "d=" << d << endl;//출력문
}
