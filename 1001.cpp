#include<cstdio>
#include<cstring>
int main(){
	int a,b;
	char sum[10];
	scanf("%d%d",&a,&b);
	int total=a+b;
	if(total<0){			  //�����Ϊ���������ȰѸ������������Ϊ������������� 
		printf("-");
		total=-total;
	}
	sprintf(sum,"%d",total);  //���͵�ÿһλ���ִ�ŵ�sum�� 
	int len=strlen(sum);	
	for(int i=0;i<len;i++){
		if((len-i)%3==0&&i!=0)//��Ҫ�����Ԫ�ز��ǵ�һ���Һ�����3�ı�����Ԫ�ص�ʱ����Ӧ������֮ǰ���һ��',' 
		putchar(',');
		putchar(sum[i]);
	}
	return 0;
	
}
