#include <stdio.h>

typedef struct Queue {
	int data;
	struct Queue *next;
} Queue;

Queue *front;
Queue *rear;

void init(Queue *Q) {
	printf("hi");
}

void add(Queue Q, int *A) {
	printf(sizeof(Q));
}

void radixsort(int *A, int k, int n) {
	//Queue Q[10];
	Queue *Q;

	for (int d = 1; d <= k; d++)
	{
		init(Q);
		for (int i = 0; i < n; i++)
		{
			int b = digit(A[i], d);
			add(Q[b], A[i]);
		}
	}
}

int main() {
	int k, n;
	int *A;

	printf("자릿수 : ");
	scanf("%d", &k);

	printf("원소 개수 : ");
	scanf("%d", &n);

	A = (int *)malloc(sizeof(int) * n);

	radixsort(A, k, n);
}