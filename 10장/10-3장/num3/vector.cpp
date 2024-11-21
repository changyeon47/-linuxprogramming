#include <iostream>//헤더파일 포함
#include <vector>//헤더파일 포함
#include <string>//헤더파일 포함
using namespace std;//std생략
int main(){//메인함수 정의
    string late, a;//객체 생성
    vector<string> v;//객체 생성
    for(int i =0;i<5;i++){//반복문
        cout << "문자열을 입력하시오:";//출력문
        cin >> a;//키보드로 부터 입력받은 값 저장
        v.push_back(a);//벡터 객체에 값을 저장
    }
    late = v.at(0);//변수값 초기화
    for(int i =0; i<v.size();i++){//반복문
        if(late<v.at(i))//조건문
            late = v.at(i);//변수값 초기화
    }
    cout << "사전에서 제일 뒤에 나오는 단어는" << late <<"입니다."<<endl; //출력문
}