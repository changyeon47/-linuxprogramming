#include <iostream>//헤더파일 포함
#include "tv.hpp"//헤더파일 포함
using namespace std;//std생략
int main() {//메인함수 정의
    SmartTV htv;//객체 생성
    htv.setSmartTV(50, false, "192.0.0.2");//맴버함수 호출
    cout << "size =" << htv.getSize() << endl;//출력및 맴버함수 호출
    cout << "videoIn =" << boolalpha << htv.getVideoIn() << endl;//출력및 맴버함수 호출
    cout << "IP ="<< htv.getIpAddr() << endl;//출력및 맴버함수 호출
}