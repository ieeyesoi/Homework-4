#include<stdio.h>
#include<stdlib.h>
void main() {       //메인 함수의 시작

int **x;    //정수형 이중 포인터 x 선언

printf("sizeof(x) = %lu\n", sizeof(x)); //sizeof(x) = x의 사이즈 출력(주소를 담고 있으므로 8bytes 출력)
printf("sizeof(*x) = %lu\n", sizeof(*x));   //sizeof(*x) = x가 가리키는 곳(포인터)의 사이즈 출력(주소를 담고 있으므로 마찬가지로 8bytes 출력)
printf("sizeof(**x) = %lu\n", sizeof(**x)); //sizeof(**x) = x의 이중포인터, *(*x)는 값을 나타내므로 4bytes 출력

printf("[----[Lee yesol]  [2023070002]-----]"); //학번과 이름 출력
}   //메인 함수의 종료