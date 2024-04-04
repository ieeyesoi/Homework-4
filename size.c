#include<stdio.h>   //<stdio.h> 라이브러리를 포함
#include<stdlib.h>  //<stdib.h> 라이브러리 포함
void main() {       //메인 함수의 시작

int **x;    //(int(정수)형 이중 포인터 x 선언

printf("sizeof(x) = %lu\n", sizeof(x)); //sizeof(x) = x의 사이즈 출력(주소를 담고 있으므로 8bytes 출력)
printf("sizeof(*x) = %lu\n", sizeof(*x));   //sizeof(*x) = x가 가리키는 곳(포인터)의 사이즈 출력(주소를 담고 있으므로 마찬가지로 8bytes 출력)
printf("sizeof(**x) = %lu\n", sizeof(**x)); //sizeof(**x) = x의 이중포인터, x가 가리키는 포인터가 가리키는 값의 크기를 나타내므로 4bytes 출력

printf("[----[Lee yesol]  [2023070002]-----]"); //학번과 이름 출력
}   //메인 함수의 종료