/*
	<원하는 구구단의 단 출력하기>
	2부터 9 사이의 숫자를 입력받아 이 숫자에 해당하는 구구단을 출력하라.
	단, 2부터 9사이의 숫자가 아닌 수를 입력하면
	"잘못 입력하였습니다"를 출력하고 바르게 입력할 때까지 다시 입력받아라.

	반복문은 적당하게 선택하고, 변수는 다음과 같이 사용하라.
	int dan; // 출력하려는 구구단의 단 수
	int i; // 반복문을 위한 변수
*/

#include <stdio.h>

int main(){
	int dan; // 출력하려는 구구단의 단 수
	int i; // 반복문을 위한 변수

	while(1){
		printf("출력하고 싶은 구구단의 단 수?(2~9)  ");
		scanf("%d", &dan);
		if(dan > 1 && dan < 10)
			break;
		printf("잘못 입력하였습니다.\n");
	}

	for(i = 1; i < 10; i++)
		printf("%d x %d = %d\n", dan, i, dan*i);
	
	return 0;
}

