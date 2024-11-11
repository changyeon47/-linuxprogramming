#Makefile
#this is comment
CX = g++ #컴파일러 설장
CXFLAGS = -g -Wall #컴파일러 플래그 설정
OBJS = main.o  point.o #컴파일할 오브젝트 파일 목록
TARGET = pointer #생성할 최종 실행파일 이름
$(TARGET) : $(OBJS) #실행 파일 생성 규칙
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp point.cpp#파일을 컴파일 하여 오브젝트 파일 생성
	$(CX) $(CXFLAGS) -c main.cpp
point.o : point.cpp point.hpp#파일을 컴파일하여 오브젝트 파일 생성
	$(CX) $(CXFLAGS) -c point.cpp
.PHONY: clean#실제파일이 아닌 명령어 임을 표시
clean:#생성된 실행 파일과 오브젝트 파일을 삭제
	rm $(TARGET) $(OBJS)