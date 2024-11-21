#include <iostream>//헤더파일 포함
#include <vector>//헤더파일 포함
#include <string>//헤더파일 포함
using namespace std;//std생략
int main(){//메인함수 정의
    int sum=0, count=0;//변수선언 및 초기화
    double avg;//변수선언
    vector<int> v;//객체 생성
    vector<int>::iterator it;//백터 v의 원소에 대한 인터레이터 객체 선언
    cout << "숫자를 입력하시요:";//출력문
    for(int i =0;i<5;i++){//반복문
        int a;//객체 생성
        cin >> a;//키보드로 부터 입력받은 값 저장
        v.push_back(a);//벡터 객체에 값을 저장
    }
    cout << "초기상태:";//출력문
    for(it = v.begin();it!=v.end();it++)//반복문
        cout << *it << " ";//출력문
    cout << endl;//줄바꿈
    for(it = v.begin(); it != v.end();){//반복문
        if(*it < 0) it = v.erase(it);//조건문
        else it++;//이 외의 상황
    }
    cout << "음수를 지운 후:";//출력문
    for(it = v.begin(); it != v.end();it++){//반복문
        sum += *it;//변수에 값을 합
        cout << *it << " ";//출력문
        count++;//변수값 1증가
    }
    cout << endl;//줄바꿈
    avg = (double)sum / count;//변수값 초기화
    cout << "평균값" << avg << endl;//출력문
}