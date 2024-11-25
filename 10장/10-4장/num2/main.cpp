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
    it = max_element(v.begin(),v.end());//최대값 주소를 저장
    cout << "사전에서 제일 뒤에 나오는 단어는 " << *it <<endl;//출력문
}