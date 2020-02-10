#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//==========================================
int N;//정점의 개수
int M;//간선의 개수
int V;//시작 정점의 번호
int graph[1001][1001] = {0,};
int visited[1001];

//==========================================
void inputGraph(void)
{
	for (int i = 0; i < M; i++)
	{
		int p, q = 0;
		scanf_s("%d %d", &p, &q);
		graph[p-1][q-1] = 1;	//문제에서 정점이 1부터 시작하므로 이를 위함.
		graph[q-1][p-1] = 1;
	}
}

//큐========================================
typedef struct { // 큐 타입
	int data[1001];
	int front, rear;
} QUEUE;

//큐 초기화 함수
void init_queue(QUEUE * q)
{
	q->front = 0;
	q->rear = 0;
}

// 공백 상태 검출 함수
int is_empty(QUEUE *q)
{
	return (q->front == q->rear);
}

// 포화 상태 검출 함수
int is_full(QUEUE *q)
{
	return ((q->rear + 1) % 1001 == q->front);
}

// 삽입 함수
void enqueue(QUEUE *q, int item)
{
	if (is_full(q))
	{
		printf("큐가 포화상태입니다");
	}
	q->rear = (q->rear + 1) % 1001;
	q->data[q->rear] = item;
}

// 삭제 함수
int dequeue(QUEUE *q)
{
	if (is_empty(q))
	{
		printf("큐가 공백상태입니다");
	}
	q->front = (q->front + 1) % 1001;
	return q->data[q->front];
}
//==========================================
void resetVisited(void)
{
	memset(visited,0,sizeof(visited));
}

//==========================================
void DFS(int g[1001][1001], int s)
{
	int num;
	visited[s] = 1;			// 시작 정점 s를 방문했음을 표시
	printf("%d ", s+1);		// 방문한 정점 출력

	for (num = 0; num < N; num++)		// 모든 인접 정점에 대하여
	{
		if (g[s][num] && !visited[num]) // 방문하지 않았다면
		{
			DFS(g, num); // 정점 num에서 DFS 새로 시작
		}
	}
}

//==========================================

void BFS(int g[1001][1001], int s)
{
	int num;
	QUEUE q;
	init_queue(&q); // 큐 초기화
	visited[s] = 1;			// 정점 v 방문 표시
	printf("%d ", s+1);		// 정점 v 출력

	enqueue(&q, s); // 정점 v를 큐에 저장
	while (!is_empty(&q)) {
		s = dequeue(&q); // s = 큐에서 정점 추출
		for (num = 0; num < N; num++) // 모든 인접 정점 num에 대하여
			if (g[s][num] && !visited[num]) { // num를 방문하지 않았다면
				visited[num] = 1; // 정점 num 방문 표시
				printf("%d ", num+1); // 정점 num 출력
				enqueue(&q, num); // 정점 num를 큐에 저장
			}
	}
}

//==========================================
int main(void)
{
	scanf_s("%d %d %d", &N, &M, &V);
	V -= 1;
	inputGraph();
	resetVisited();	//방문배열 초기화
	DFS(graph, V);
	printf("\n");
	resetVisited();
	BFS(graph, V);
}
