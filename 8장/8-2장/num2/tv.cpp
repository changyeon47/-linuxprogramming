#include <iostream>//헤더파일 포함
#include <string>//헤더파일 포함
#include "tv.hpp"//헤더파일 포함
using namespace std;//std생략
TV::TV(int size){//생성자 정의
    this->size = size;//맴버변수의 값을 초기화
    cout << "TV생성"<< endl;//출력문
}
void TV::settv(int size){this->size = size;}//맴버함수 정의
int TV::getSize(){return size;}//생성자 정의
WideTV::WideTV(int size, bool videoIn):TV(size){//생성자 정의
    this->videoIn = videoIn;//맴버변수 값 초기화
    cout<< "WideTV 생성"<<endl;//출력문
}
void WideTV::setwide(bool videoIn){this->videoIn = videoIn;}//맴버함수 정의
bool WideTV::getVideoIn(){return videoIn;}//맴버함수 정의
SmartTV::SmartTV(int size, bool videoIn,string ipAddr) : WideTV(size, videoIn) {//생성자 정의
    this->ipAddr = ipAddr;//맴버변수값 초기화
    cout << "Smart 생성" << endl;//출력문
}
void SmartTV::setSmartTV(int size, bool videoIn,string ipAddr){//맴버함수 정의
    settv(size);//맴버함수 호출
    setwide(videoIn);//맴버함수 호출
    this->ipAddr = ipAddr;//맴버변수 초기화
}
string SmartTV::getIpAddr() { return ipAddr; }//맴버변수 정의
