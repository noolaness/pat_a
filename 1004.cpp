#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
const int N=110;
int leaf[N]={0};				//���ÿ���Ҷ�ӽڵ���
vector<int> G[N];				//�ڽӾ�������
int max_h=1;					//��ʼ�������Ϊ1
void DFS(int index,int h){
	max_h=max(h,max_h);
	if(G[index].size()==0){		//�����Ҷ�ӽڵ㣬����������鲢����
		leaf[h]++;
		return;
	}
	for(int i=0;i<G[index].size();i++)//�������Ҷ�ӽڵ㣬��ö�����������ӽڵ㲢�����+1
		DFS(G[index][i],h+1);
}
int main(){
	int m,n,parent,child,k;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d%d",&parent,&k);
		for(int j=0;j<k;j++){
			scanf("%d",&child);
			G[parent].push_back(child);
		}
	}
	DFS(1,1);
	printf("%d",leaf[1]);
	for(int i=2;i<=max_h;i++)
		printf(" %d",leaf[i]);
	return 0;
}