#### 실습과제 1번

#### 예제 8-3에서 SmartTV 객체 htv가 생성될 때 자동으로 호출되는 생성자를 순서대로 자세히 설명하시오.
#### htv 생성시 지정된 인수가 각 생성자에 어떻게 전달되는지도 자세히 설명하시오.

1. TV클래스는 클래스 생성자가 가장 먼저 호출된다.
- smartTV클래스는 wideTV클래스를 상속받고 wideTV클래스는 TV클래스를 상속 받기 때문에
- SmartTV클래스에서 widthTV(size,true)를 호출하여 wideTV클래스 생성자가 호출되고 wideTV클래스 생성자에서 TV(int size)생성자를 호출하여 size의 값이 전달된다.
2. TV클래스 다음으로는 wideTV클래스가 호출된다.
- smartTV클래스는 wideTV클래스를 상속 받기 때문에
- SmartTV클래스에서 widthTV(size,true)를 호출하여 wideTV클래스 생성자가 호출되어 인수가 videoIn변수에 전달된다. 
3. wide클래스 다음으로는 smartTV클래스가 호출된다.
- smartTV클래스는 다른 클래스에 상속하지 않기 때문에 마지막에 호출된다.
- smartTV클래스 생성자가 호출되면 인수가 ipAdder변수에 전달된다.
