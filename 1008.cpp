#include<cstdio>
int main(){
	int N,floor_,temp=0,sum=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&floor_);     			
		if((floor_-temp)>=0)			//ÿ����������Ļ�Ŀ��¥��floor��ȥĿǰ���ڵ�¥��temp
			sum+=(floor_-temp)*6+5;
		else sum+=(temp-floor_)*4+5;	//����½�Ŀǰ��¥��temp��ȥĿ��¥��floor
		temp=floor_;					//��Ŀǰ��¥����Ϊ�ѵ����Ŀ��¥��
	}
	printf("%d",sum);
	return 0;
}