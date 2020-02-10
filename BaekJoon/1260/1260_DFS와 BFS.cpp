#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//==========================================
int N;//������ ����
int M;//������ ����
int V;//���� ������ ��ȣ
int graph[1001][1001] = {0,};
int visited[1001];

//==========================================
void inputGraph(void)
{
	for (int i = 0; i < M; i++)
	{
		int p, q = 0;
		scanf_s("%d %d", &p, &q);
		graph[p-1][q-1] = 1;	//�������� ������ 1���� �����ϹǷ� �̸� ����.
		graph[q-1][p-1] = 1;
	}
}

//ť========================================
typedef struct { // ť Ÿ��
	int data[1001];
	int front, rear;
} QUEUE;

//ť �ʱ�ȭ �Լ�
void init_queue(QUEUE * q)
{
	q->front = 0;
	q->rear = 0;
}

// ���� ���� ���� �Լ�
int is_empty(QUEUE *q)
{
	return (q->front == q->rear);
}

// ��ȭ ���� ���� �Լ�
int is_full(QUEUE *q)
{
	return ((q->rear + 1) % 1001 == q->front);
}

// ���� �Լ�
void enqueue(QUEUE *q, int item)
{
	if (is_full(q))
	{
		printf("ť�� ��ȭ�����Դϴ�");
	}
	q->rear = (q->rear + 1) % 1001;
	q->data[q->rear] = item;
}

// ���� �Լ�
int dequeue(QUEUE *q)
{
	if (is_empty(q))
	{
		printf("ť�� ��������Դϴ�");
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
	visited[s] = 1;			// ���� ���� s�� �湮������ ǥ��
	printf("%d ", s+1);		// �湮�� ���� ���

	for (num = 0; num < N; num++)		// ��� ���� ������ ���Ͽ�
	{
		if (g[s][num] && !visited[num]) // �湮���� �ʾҴٸ�
		{
			DFS(g, num); // ���� num���� DFS ���� ����
		}
	}
}

//==========================================

void BFS(int g[1001][1001], int s)
{
	int num;
	QUEUE q;
	init_queue(&q); // ť �ʱ�ȭ
	visited[s] = 1;			// ���� v �湮 ǥ��
	printf("%d ", s+1);		// ���� v ���

	enqueue(&q, s); // ���� v�� ť�� ����
	while (!is_empty(&q)) {
		s = dequeue(&q); // s = ť���� ���� ����
		for (num = 0; num < N; num++) // ��� ���� ���� num�� ���Ͽ�
			if (g[s][num] && !visited[num]) { // num�� �湮���� �ʾҴٸ�
				visited[num] = 1; // ���� num �湮 ǥ��
				printf("%d ", num+1); // ���� num ���
				enqueue(&q, num); // ���� num�� ť�� ����
			}
	}
}

//==========================================
int main(void)
{
	scanf_s("%d %d %d", &N, &M, &V);
	V -= 1;
	inputGraph();
	resetVisited();	//�湮�迭 �ʱ�ȭ
	DFS(graph, V);
	printf("\n");
	resetVisited();
	BFS(graph, V);
}
