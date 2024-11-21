#include <iostream>//헤더파일 포함
#include <vector>//헤더파일 포함
using namespace std;//std생략
int main(){//메인함수 정의
    int max;//변수 선언
    int min;//변수 선언
    vector<int> v;//객체 생성
    cout << "정수 4개를 입력하시오:";//출력문
    for(int i =0;i<4;i++){//반복문
        int a;//변수선언
        cin >> a;//키보드로부터 입력받은 값 변수에 저장
        v.push_back(a);//벡터 객체에 값을 대입
    }
    max = v.at(0);//변수값 초기화
    min = v.at(0);//변수값 초기화
    for(int i =0; i<v.size();i++){//반복문
        if(max<v.at(i))//조건문
            max = v.at(i);//변수값 초기화
        else if(min> v.at(i))//조건문
            min = v.at(i);//변수값 초기화
    }
    cout << "최대값 " << max<<", 최소값 " << min <<"입니다." <<endl;//출력문
}