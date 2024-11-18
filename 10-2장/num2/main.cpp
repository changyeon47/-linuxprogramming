#include <iostream>//헤더파일 포함
using namespace std;//std생략
template <class T>//템플릿 클래스 선언
class Container {//클래스 선언
    T *p;//맴버변수 선언
    int size;//맴버변수 선언
public://접근지정자
    Container(int n){ p = new T[n]; this->size = n;}//생성자 선언 동적 할당으로 배열 초기화
    ~Container(){delete[] p; cout << "소멸자 실행" << endl;}//소멸자 
    void set(int index, T value){ p[index] = value; }//맴버함수 정의
    T get(int index){ return p[index]; }//함버함수 정의
};
int main() {//메인함수 정의
    Container<int> c(10);//템플릿 객체 생성
    for(int i = 0; i < 10; i++)//반복문
        c.set(i, i);//맴버함수 호출
    for(int i = 9; i >= 0; i--)//반복문
        cout << c.get(i) << " ";//맴버함수 호출
    cout << endl; //줄바꿈
}

