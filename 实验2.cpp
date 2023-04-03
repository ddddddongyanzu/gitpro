#include <stdio.h>
int main()
{
	while(1) {
		int a,b,c;
    	printf("请输入三条边的长度：");
    	scanf("%d%d%d",&a,&b,&c);
		if(a<=0||b<=0||c<=0||a+b<=c||a+c<=b||b+c<=a) // 判断是否构成三角形
	    {
	        printf("不能构成三角形\n");
	    }
	    else if(a==b&&b==c) // 判断是否等边三角形
	    {
	        printf("等边三角形\n");
	    }
	    else if(a==b||b==c||a==c) // 判断是否等腰三角形
	    {
	        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) // 判断是否直角三角形
	        {
	            printf("等腰直角三角形\n");
	        }
	        else
	        {
	            printf("等腰三角形\n");
	        }
	    }
	    else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) // 判断是否直角三角形
	    {
	        printf("直角三角形\n");
	    }
	    else // 其他情况为一般三角形
	    {
	        printf("一般三角形\n");
	    }
	} 
    return 0;
}

