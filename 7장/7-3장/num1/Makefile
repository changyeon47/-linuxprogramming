#Makefile
#this is comment
CX = g++ #컴파일러 설정
CXFLAGS = -g -Wall # 컴파일할 오브젝트 파일
OBJS = main.o  complex.o # 생성할 최종 실행 파일
TARGET = complexer #생성할 최종 실행 파일
$(TARGET) : $(OBJS) #실행 파일 생성 규칙
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp complex.cpp#파일을 컴파일 하여 오브젝트 파일을 생성
	$(CX) $(CXFLAGS) -c main.cpp
complex.o : complex.cpp complex.hpp#파일을 컴파일 하여 오브젝트 파일을 생성
	$(CX) $(CXFLAGS) -c complex.cpp 
.PHONY: clean#실제파일이 아닌 명령어임을 표시
clean: # 생성된 실행파일,오브젝트 파일 삭제
	rm $(TARGET) $(OBJS)
