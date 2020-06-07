/*
	<5층 아파트의 층별, 호수별 거주자 숫자 구하기>
	한 층에 3집(1, 2, 3호)으로 되어 있는 5 층짜리 아파트가 있다.
	2차원 배열을 사용하여 101호부터 503호까지 각 집에 살고 있는 사람의 숫자를 입력받아 보관하라.
	그리고 이 아파트에 사는 거주가의 숫자를 층별(1층~5층)로 합산하여 출력하고,
	호수별(1호~3호)로 합산하여 출력하라.
	예를 들어 1층 거주자의 수는 101호, 102호, 103호 거주자의 수를 합한 것이고,
	2호라인 거주자의 수는 102호, 202호, 302호, 402호, 502호의 거주자의 수를 합한 것이다.

	변수는 다음과 같이 사용하라.
	int number[5][3]; // 각 집의 거주자 수
	int floor_total[5]; // 층별 거주자 합계 (1층, 2층, 3층, 4층, 5층)
	int line_total[3];  // 호수별 거주자 합계 (1호라인, 2호라인, 3호라인)
	int total;  // 아파트의 총 거주자 수
	int ho;  // 아파트 호를 나타내는 변수
	int i, j; // 반복문 사용을 위한 변수 
*/
#include <stdio.h>

int main(){
	int number[5][3]; // 각 집의 거주자 수
	int floor_total[5] = {0}; // 층별 거주자 합계 (1층, 2층, 3층, 4층, 5층)
	int line_total[3] = {0};  // 호수별 거주자 합계 (1호라인, 2호라인, 3호라인)
	int total;  // 아파트의 총 거주자 수
	int ho;  // 아파트 호를 나타내는 변수
	int i, j; // 반복문 사용을 위한 변수

	for(i = 0; i < 5; i++)
		for(j = 0; j < 3; j++){
			printf("%d0%d호에 살고있는 사람의 수?", i+1, j+1);
			scanf("%d", &number[i][j]);

			floor_total[i] += number[i][j];
			line_total[j] += number[i][j];
		}
	
	printf("\n");

	for(i = 0; i < 5; i++)
		printf("%d층에 살고 있는 사람의 수: %d명\n", i+1, floor_total[i]);
	
	printf("\n");

	for(j = 0; j < 3; j++)
		printf("%d호 라인에 살고 있는 사람의 수: %d명\n", j+1, line_total[j]);

	return 0;
}