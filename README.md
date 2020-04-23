### 레퍼런스
##### - 어떤 다른 변수를 참고하는 것이다. C++에서는 참고자 라고도 한다.
##### - 한번 초기화되면 다른 변수의 별명이 될 수 없다.

#### 초기화
``cpp
int num;
int& ref = num;
ref = 3;
``
##### 위 결과 ref 값도 3 이되고 num도 3의 값을 같는다.

##### *포인터와는 다르다.
#####  선언을 해주게 되면 포인터는 주소값을 가르키지만
#####  레퍼런스는 number와 동일한 값을 같는다.

