#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 15				// ���� �ִ� ��(Location ��) 
#define TRUE 1				// TRUE�� 1�� ���� 
#define FALSE 0				// FALSE�� 0���� ���� 
#define LOOP 10000			// ���Ѵ�(LOOP)�� 10000���� ���� 
#define strMAX 10			// ���� �̸� �ִ� ���� 

typedef struct fast{		// Dijkstra ���̺� ������ ����ü 
	int fast_long[MAX];		// �ִ� �Ÿ� 
	int fast_way[MAX];		// �ִܰ���� ���� Location �ٷ� ���� ��ġ 
}FAST;

char name[MAX][strMAX]={"����","��õ","õ��","����","����",			//0~4�� ���� �̸� 
						"����","����","���","����","����",			//5~9�� ���� �̸� 
						"�뱸","����","����","����","�λ�"};	//10~14�� ���� �̸� 

void creat_dijkstra(FAST *, int);			// Dijkstra ���̺� ���� 
void find_way(FAST *,int, int);				// �ִܰ�� ������ 

/********** �⺻ �Է� �� Dijkstra ���̺� ����ü ���� **********/ 
int main(){
	FAST fastSet;							// Dijkstra ���̺� ���� 
	int start, end;							// ���� ��ġ, ���� ��ġ (��ġ) 
	int i;							// �ݺ��� �� �ӽ� ���� ���� 
	char str[100], *strStart, *strEnd;
	
	while(gets(str)!=NULL) {	
		strStart=strtok(str," ");
		strEnd=strtok(NULL," ");
			
			/***** Exception Ȯ�� *****/ 
			for(i=0;i<MAX;i++){
				if(!strcmp(name[i], strStart)){
					start=i;					// ��� ��ġ(��ġ) �Է� 
					break;
				} 
			}

			/***** Exception Ȯ�� *****/ 
			for(i=0;i<MAX;i++){
				if(!strcmp(name[i],strEnd)){
					end=i;						// ���� ��ġ(��ġ) �Է� 
					break;
				} 
			}				

		/***** Exception Ȯ�� *****/ 
		if(start!=end){							// ���,���� ������ �ٸ� ��� 
			creat_dijkstra(&fastSet,start);		// Dijkstra ���̺� ����  
			// ���������� ���� �ִܰŸ� ��� 
			printf("�ִܰŸ� %dkm ",fastSet.fast_long[end]);
			find_way(&fastSet,start,end);  		// �ִܰ�� ���			
		}
		else{									// ���, ���� ������ ���� ��� 
			printf("  [ERR] ���� ��Ҵ� ���� �����ϴ�.\n");
		}
	}
	return 0;
}



/********** Dijkstra ���̺� ���� **********/ 
void creat_dijkstra(FAST *fastSet, int start){
	/***** �⺻ ���� ���� *****/ 
	int location[MAX][MAX]={
		0, 26, 83, LOOP, LOOP, LOOP, LOOP, LOOP, LOOP, 138, LOOP, 152, LOOP, LOOP, LOOP ,
		26, 0, LOOP, 124, LOOP, LOOP, LOOP, LOOP, LOOP ,LOOP ,LOOP ,LOOP ,LOOP ,LOOP ,LOOP ,
		83,  LOOP, 0,   86, LOOP, LOOP, LOOP, LOOP, 37, LOOP, LOOP, LOOP, LOOP, LOOP, LOOP ,
		LOOP, 124,    66,  0,  37,   LOOP,   LOOP, LOOP ,LOOP ,LOOP ,LOOP ,LOOP ,LOOP ,LOOP ,LOOP ,
		LOOP,  LOOP,  LOOP,  37, 0, 128,  LOOP, 34, LOOP, LOOP, LOOP, LOOP, LOOP, LOOP, LOOP ,
		LOOP,  LOOP,  LOOP,  LOOP,   128, 0,  56, LOOP, LOOP, LOOP, LOOP, LOOP, LOOP, LOOP, LOOP ,
		LOOP,  LOOP,  LOOP,  LOOP,   LOOP, 56,  0, 113, LOOP, LOOP, 170, LOOP, LOOP, LOOP, 197 ,
		LOOP,  LOOP,  LOOP,  LOOP,   34, LOOP,  113, 0 , 25, LOOP, 137, LOOP, LOOP, LOOP, LOOP ,
		LOOP,  LOOP,  37,  LOOP,   LOOP, LOOP,  LOOP, 25, 0, 28, LOOP, LOOP, LOOP, LOOP, LOOP ,
		138,  LOOP,  LOOP,  LOOP,   LOOP, LOOP,  LOOP, LOOP, 28, 0, 120, LOOP, 195, LOOP, LOOP ,
		LOOP,  LOOP,  LOOP,  LOOP,   LOOP, LOOP,  170, 137, LOOP, 120, 0, LOOP, LOOP, LOOP, 88 ,
		152,  LOOP,  LOOP,  LOOP,   LOOP, LOOP,  LOOP, LOOP, LOOP, LOOP, LOOP, 0, 85, LOOP, LOOP ,
		LOOP,  LOOP,  LOOP,  LOOP,   LOOP, LOOP,  LOOP, LOOP, LOOP, 195, LOOP, 85, 0, 164, LOOP ,
		LOOP,  LOOP,  LOOP,  LOOP,   LOOP, LOOP,  LOOP, LOOP, LOOP, LOOP, LOOP, LOOP, 164, 0, 93 ,
		LOOP,  LOOP,  LOOP,  LOOP,   LOOP, LOOP,  197, LOOP, LOOP, LOOP, 88, LOOP, LOOP, 93, 0  							
	};
	
	int visited[MAX],next,temp;
	int i, j, k;
	
	/***** ���� �ʱ�ȭ *****/ 
	for(i=0;i<MAX;i++){
		visited[i]=0;				// �湮�� ���� ���� 
		fastSet->fast_way[i]=start;	// �ִܰ���� ���� Location �ٷ� ���� ��ġ 
	}
	next=start;						// ���� ���� �Է��� ���̺� ���� (ó�� ���� ��ġ) 
	
	/***** Dijstra ���̺� ���� *****/
	for(i=0;i<MAX;i++){				
		for(j=0;j<MAX;j++){
			/***** ù �ִܰ�� ���̺� ���� ������ġ������ ������ �Է� *****/ 
			if(i==0){
				fastSet->fast_long[j]=location[start][j];	// ������ġ������ �� �Է� 
				visited[start]=TRUE;						// ������ġ �湮 ó�� 
			}
			else{
				// ���� ã�� �Ÿ��� ���� �Ÿ����� ����� ��� �� ���� 
				if((fastSet->fast_long[j])>(fastSet->fast_long[next]+location[next][j])){
					// ���� ã�� �Ÿ� �Է� 
					fastSet->fast_long[j]=fastSet->fast_long[next]+location[next][j];
					// ���� ã�� ����(����� ��� �ٷ� ���� ���� ��ġ �Է�)
					fastSet->fast_way[j]=next;
				}
			}
		}
		temp=LOOP;		// �񱳿� ���� LOOP�� �ʱ�ȭ 

		for(k=0;k<MAX;k++){
			/***** �湮���� ���� ������ ���� temp(�ٸ� ���� ��)���� ���� ��� *****/ 
			if((temp>fastSet->fast_long[k])&&(visited[k]==FALSE)){
				temp=fastSet->fast_long[k];		// ���� �Ÿ� �� �Է� 
				next=k;							// ���� �̵��� ���� �Է� 
			}
		}
		visited[next]=TRUE;						// ���� �̵��� ���� �湮���� ó�� 
	}
}

/********** �ִܰ�� ������ **********/ 
void find_way(FAST *fastSet,int start,int find){
	int i, set, way[MAX];
	
	printf("(�ִܰ��: "); 
	/***** �ִܰ�� ���� �ʱ�ȭ *****/ 
	way[0]=start;			// ���� ����(��ġ)�� ��ó�� �迭�� ���� 
	for(i=1;i<MAX;i++){
		way[i]=-1;			// ��� ������ �迭 ���� -1�� �ʱ�ȭ 
	}
	set=MAX-1;				// �迭 �ִ밳�� ����
	/***** �������� �� ��θ� �������� ���� *****/ 
	while(find!=start){
		way[set]=find;		// �迭 �޺κк��� ��� �Է� (�������� ���� ����) 
		set--;				// set -1 (�ڿ��� ������ 1ĭ �̵�) 
		find=fastSet->fast_way[find];	// find�� ������ġ�� ���� ����� ��� �� �Է�
	}
	
	/***** �������� �� ��θ� ��� *****/ 
	for(i=0;i<MAX;i++){
		if(way[i]!=-1){						// �迭���� -1�� �ƴѰ�츸 ���  
			printf("%s",name[way[i]]);		// ��ġ���� ���� ���� �̸�(���ڿ�) ��� 
			if(i!=(MAX-1)){					// ������ ��ΰ� �ƴѰ�� -> ��� 
				printf(" - ");
			} 
		}
	}
	printf(")\n\n");		
}

