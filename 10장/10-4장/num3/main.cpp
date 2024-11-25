#include <iostream>//헤더파일 포함
#include <vector>//헤더파일 포함
#include <string>//헤더파일 포함
#include <algorithm>//헤더파일 포함
using namespace std;//std생략
int main(){//메인 함수
    vector<string> v;//벡터 클래스 객체 생성
    vector<string>::iterator it;//이터레이터 객체 생성
    for(int i=0;i<5;i++){//반복문
        cout << "문자열을 입력하시오";//출력문
        string n;//변수선언
        cin >> n;//입력받은 값 변수에 대입
        v.push_back(n);//벡터 객체에 값을 대입
    }
    sort(v.begin(),v.end());//벡터 원소를 오름차순으로 정리
    cout << "사전에 나오는 순서" << endl ;//출력문
    for(it = v.begin(); it< v.end();it++)//반복문
        cout << *it << endl;//출력문
}