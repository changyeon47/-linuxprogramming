#include <iostream>//헤더파일 포함
#include <vector>//헤더파일 포함
#include <algorithm>//헤더파일 포함
using namespace std;//std생략
int main(){//메인 함수
    vector<int> v;//벡터 클래스 객체 생성
    vector<int>::iterator it;//이터레이터 객체 생성
    cout << "4개의 정수를 입력하시오";//출력문
    for(int i=0;i<4;i++){//반복문
        int n;//변수선언
        cin >> n;//입력받은 값 변수에 대입
        v.push_back(n);//벡터 객체에 값을 대입
    }
    it = max_element(v.begin(),v.end());//최대값 주소를 저장
    cout << "최대값은 " << distance(v.begin(),it) << "번째" << *it <<endl;//출력문
    it = min_element(v.begin(),v.end());//최소값 주소를 저장
    cout << "최소값은 " << distance(v.begin(),it) << "번째" << *it <<endl;//출력문
    sort(v.begin(),v.end());//벡터 원소를 오름차순으로 정리
    cout << "오름차순 결과는";//출력문
    for(it = v.begin(); it< v.end();it++)//반복문
        cout << *it << ' ';//출력문
    cout << endl;//줄바꿈
    sort(v.begin(),v.end(),greater<int>());//벡터 원소를 내림차순으로 정리
    cout << "내림차순 결과는";//출력문
    for(it = v.begin(); it< v.end();it++)//반복문
        cout << *it << ' ';//출력문
    cout << endl;//줄바꿈
}