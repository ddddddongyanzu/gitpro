#include <stdio.h>
int main()
{
	while(1) {
		int a,b,c;
    	printf("�����������ߵĳ��ȣ�");
    	scanf("%d%d%d",&a,&b,&c);
		if(a<=0||b<=0||c<=0||a+b<=c||a+c<=b||b+c<=a) // �ж��Ƿ񹹳�������
	    {
	        printf("���ܹ���������\n");
	    }
	    else if(a==b&&b==c) // �ж��Ƿ�ȱ�������
	    {
	        printf("�ȱ�������\n");
	    }
	    else if(a==b||b==c||a==c) // �ж��Ƿ����������
	    {
	        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) // �ж��Ƿ�ֱ��������
	        {
	            printf("����ֱ��������\n");
	        }
	        else
	        {
	            printf("����������\n");
	        }
	    }
	    else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) // �ж��Ƿ�ֱ��������
	    {
	        printf("ֱ��������\n");
	    }
	    else // �������Ϊһ��������
	    {
	        printf("һ��������\n");
	    }
	} 
    return 0;
}

