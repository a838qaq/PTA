//���������õ��������£�
#include <stdio.h>

//�ж�һ�����Ƿ�Ϊ��ȫ���ĺ���
int        isPerfect(int);

//��ӡ��ȫ���ĺ��� 
void    printPerfact(int);

int main()
{
    int i,a,b,count;

    scanf("%d%d",&a,&b);
    count = 0 ;//a,b��������ȫ������������ʼ��Ϊ0 
    for(i=a;i<=b;i++)
    {
        if (isPerfect(i))  //�������ȫ�� 
        {
            printPerfect(i) ;//��ӡ����ȫ�� 
            count ++ ;  //��������1 
        }        
    }
    printf("The total number is %d.\n",count);//���a,b��������ȫ�������� 
    return 0 ;
}
/* ����������д�� */\

int isPerfect(int n){
    int sum = 0;
    if(n % 2) return 0;
    for(int j = 1; j < n; j++){
        if(!(n % j)) sum = sum + j;
    }
    if(sum == n) return 1;
    else return 0;
}

void printPerfect(int n){
    int sum = 0;
    printf("%d=1", n);
    for(int k = 1; k < n; k++){
        if(!(n % k) && k != 1) printf("+%d", k);
    }
    printf("\n");
}