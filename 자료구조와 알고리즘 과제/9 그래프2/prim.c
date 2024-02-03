#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX_VERTICES 100
#define INF 1000L

typedef struct GraphType {
	int n;	// ������ ����
	int weight[MAX_VERTICES][MAX_VERTICES];
} GraphType;

int selected[MAX_VERTICES];
int distance[MAX_VERTICES];

// �ּ� dist[v] ���� ���� ������ ��ȯ
int get_min_vertex(int n)
{
	int v, i;
	for (i = 0; i <n; i++)
		if (!selected[i]) {		// �湮 ���� ���� �߿��� 
			v = i;				// �ּҰŸ��� ã������ ������ �񱳴�� v�� �ʱ� ���� 
			break;
		}
	for (i = 0; i < n; i++)
		if (!selected[i] && (distance[i] < distance[v])) v = i;		// ������ v���� �Ÿ� ����ġ�� ���� i�� ã�� �ٽ� v�� ���� 
	return (v);			// �ᱹ �Ÿ��� �ּҰ��� �Ǵ� ���v�� ���� ���õ� 
}
//
void prim(GraphType* g, int s)
{
	int i, u, v;

	for (u = 0; u < g->n; u++)
		distance[u] = INF;		// ��� ����� �Ÿ��� INF�� �ʱ�ȭ 
	distance[s] = 0;			// 0���� �ʱ�ȭ�Ͽ� ť���� s�� ���ϸ��� ���õ� 
	for (i = 0; i<g->n; i++) {
		u = get_min_vertex(g->n);		// �켱���� ť���� u�� ���� 
		selected[u] = TRUE;				// u�� �湮�� ����̹Ƿ� ǥ�� 
		if (distance[u] == INF) return;		// u���� �Ÿ��� INF��� ������尡 ���� ��� 
		printf("���� %d �߰�\n", u);
		for (v = 0; v<g->n; v++)
			if (g->weight[u][v] != INF)		// u���忡�� v�� ��������� 
				if (!selected[v] && g->weight[u][v]< distance[v])	// �湮 ���� ������尡 ��ȿ ����ġ�� ������
					distance[v] = g->weight[u][v];	// ������� �Ÿ� å�� 
	}
}

int main(void)
{
	GraphType g = { 7, 
	{{ 0, 29, INF, INF, INF, 10, INF },
	{ 29,  0, 16, INF, INF, INF, 15 },
	{ INF, 16, 0, 12, INF, INF, INF },
	{ INF, INF, 12, 0, 22, INF, 18 },
	{ INF, INF, INF, 22, 0, 27, 25 },
	{ 10, INF, INF, INF, 27, 0, INF },
	{ INF, 15, INF, 18, 25, INF, 0 } }
	};
	prim(&g, 0);
	return 0;
}
