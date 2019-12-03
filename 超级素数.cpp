//求超级素数（github）
#include <stdio.h>

int prime(int n){//判断素数,素数函数值返回1,否则函数值返回0
    int i;
    if(n>2 && !(n&1) || n<2)
        return 0;
    for(i=3;i*i<=n;i+=2)
        if(!(n%i))
            return 0;
    return 1;
} 

int main(void){
	int k;
	for(k=100;k<=999;k++){
		int a,b,c;
		a=k/100,b=k/10%10,c=k%10;
		int t;
		t=k;
		prime(t);
		int q;
		q=a*a+b*b+c*c;
		prime(q);
		int r;
		r=a+b+c;
		prime(r);
		if(prime(t)&&prime(q)&&prime(r)) {printf("%d\n",k);}
	}
	for(k=1000;k<=9999;k++){
		int a,b,c,d;
		a=k/1000,b=k/100%10,c=k/10%10,d=k%10;
		int t;
		t=k;
		prime(t);
		int q;
		q=a*a+b*b+c*c+d*d;
		prime(q);
		int r;
		r=a+b+c+d;
		prime(r);
		if(prime(t)&&prime(q)&&prime(r)) {printf("%d\n",k);}
		
}
}

