/* #include<stdio.h>
int main() {
	int a, b, sum;
	a = 123;
	b = 456;
	sum = a + b;
	printf("sum is %d", sum);  //%d ʮ����������ʽ�����
	return 0;
}*/
#include<stdio.h>
#include<math.h>
#include<string.h>
/*int main() {
	
	int max(int x, int y);
	int a, b, c;
	scanf("%d,%d",&a,&b); //�������ab��ֵ�� &��ַ��  ���Ǳ���a�ĵ�ַ��
	c = max(a, b); //����max������
	printf("max=%d\n", c);
	return 0;
}
int max(int x,int y) {
	int z;
	if (x > y)z = x;
	else z = y;
	return(z); //��z��ֵ��Ϊmax�ĺ��� ���ص�����max�ĺ���λ��
}*/

/*int main() {
	printf("***************\n");
	printf("Very good\n");
	printf("***************\n");
}*/
/*int main() {
	int a, b, c, max;
	scanf("%d,%d,%d", &a, &b, &c);
	max = b;
	if (a > max) 
		max = a;
	
	if (c > max) 
		max = c;
	
	printf("max=%d\n", max);
	return 0;

}*/
/*int main() {
	float f,c;
	scanf("%f",&f);
	c = (5.0 / 9)*(f - 32);
	printf("f=%f,c=%f",f,c);  //%f �ǵ����ȸ����ͱ���%f����С����ʽ�������˫���ȶ���,�������6λС��

 }*/

/* �����Ϊp0 �� ���ڴ��һ���ı�Ϣ��Ϊp1=p0��1+r1��*/
/*               һ���ڶ��ڴ���ı�Ϣ��Ϊp2=p0��1+r2��*/
/*               ���ΰ��궨�ڶ��ڴ���ı�Ϣ��Ϊp3=p0��1+r3/2����1+r3/2��*/

/*int main() {

	float r1, r2, r3, p0,p1,p2,p3;
	p0 = 1000; r1 = 0.0036, r2 = 0.0225, r3 = 0.0198;
	p1 = p0*(1 + r1);
	p2 = p0*(1 + r2);
	p3 = p0*(1 + r3 / 2) * (1 + r3 / 2);
	printf("���ڴ��һ��ı�Ϣ��Ϊ%f\n,һ�궨�ڴ��ı�Ϣ��Ϊ%f\n,���ΰ��궨�ڴ���ı�Ϣ��Ϊ%f\n", p1, p2, p3);

 }*/
/*int main() {
	double a, b, c, s, area;
	a = 3.67;
	b = 5.43;
	c = 6.21;
	s = (a + b + c) / 2;
	area = sqrt(s*(s - a) * (s - b) * (s - c));
	printf("������������Ϊ%f", area);
}*/
/*int main() {
	
	float r, n, p; //p ʮ��ǰ�����ڵİٷֱ� ʮ��� r��������
	r = 0.09;
	n = 10;
	p = pow(1+r, n);
	printf("ʮ����ҹ�������ֵΪ:%f",p);

}*/

/*int main() {
	float a, b, c, d, e,f,P1,P2,P3,P4,P5,Pa,Pb,Pc,Pd,r,n; //a-f �����ʣ�
	a = 0.0414;
	b = 0.0468;
	c = 0.054;
	d = 0.0585;
	f = 0.0072;
	
//	P = 1000 * (1 + r); һ���ڱ�Ϣ��
	//P = 1000 * (1 + n*r); n��ϵ���ں�
	//P = 1000*pow(1 + r, n);n��һ��ϵ���ںͣ�
	//P = 1000 * pow(1 + r / 4.0, n);���ڴ����Ϣ һ������
	//�����ڱ�Ϣ�ͣ�
	P1 = 1000 * (1 + 5*d);

	P2 = 1000 * (1 + 2 * b);
	Pb = P2 * (1 + 3 * c);
	P3 = 1000 * (1 + 3 *c);
	Pc = P3 * (1 + 2 *b);
	P4 = 1000 * pow(1 + a, 5);
	P5 = 1000 * pow(1 + f / 4.0, 20);
	
	printf("һ�������ڵı�Ϣ��Ϊ��%f\n�ȴ������ٴ�����ı��ں�Ϊ��%f\n�ִ������ٴ�����ı��ں�Ϊ��%f\n�ִ�һ�굽�ں��ٴ�һ�� ������α�Ϣ��Ϊ��%f\n,���ڴ�������Ϊ��%f\n", P1, Pb, Pc, P4, P5);
}*/


/*int main() {
	float d, p, r,m;
11	d = 300000;
	p = 6000;
	r = 0.01;
	m = (log10(p) - log10(p - d * r)) / log10(1 + r);
	printf("m=%6.2f", m);
	return 0;
}*/

/*int main() {
	int c1, c2;
	c1 = 122;
	c2 = 198; //c1  ��Ϊһ��վ�ֽڶ���������ݸ�һ��վ�ֽ��ٵ����ͱ��������ַ������� ֽ������ֽ�ԭ�ⲻ�����͵�����ֵ�ñ����� �������ضϡ�
	printf("c1=%c,c2=%c\n",c1, c2);
	printf("c1=%d,c2=%d\n",c1, c2);       
	return 0;
}*/
/*int main()
{
	int a, b;
	float x, y;
	char c1, c2;
	scanf("a=%d b=%d", &a, &b);
	scanf("%f %e", &x, &y); //���� %f%e �����޿ո�
	scanf("%c%c", &c1, &c2);
	printf("a=%d,b=%d,x=%4.2f,y=%5.2f,c1=%c,c2=%c\n", a, b, x, y, c1, c2);
	return 0;
}*/

/*int main() {
	char c1, c2, c3, c4, c5;
	c1 = 'C';
	c2 = 'h';
	c3 = 'i';
	c4 = 'n';
	c5 = 'a';
	putchar(c1 + 4);
	putchar(c2 + 4);
	putchar(c3 + 4);
	putchar(c4 + 4);
	putchar(c5 + 4);
	printf("%c%c%c%c%c",c1+4,c2 + 4,c3 + 4,c4 + 4,c5 + 4);
}
*/
/*int main() {
	int a, b;
	scanf("%d:%d",&a, &b); //scanf�����Ҫ�ӻ�����������ʽ �ո����:
	printf("%d%d", a, b); //printf ���ʱ�� ���üӶ��� �Ӷ������������
}*/
/*
int main() {
	int year;
	scanf("%d", &year);
	if (year % 4 == 0 || year % 100 == 0 && year % 400 == 0)
	printf("%d������", year);
	else printf("%d��������", year);
}*/
/*
int main() {
	char a;
	scanf("%c", &a);
	a= (a >= 'A' && a <= 'Z')?printf("%c", a+32) :	printf("%c", a);

}*/
/*int main() {
	int x ,y;
	scanf("%d", &x);
	if (x < 0) y = -1;
	if (x == 0) y = 0; //��Ҫд��=  
	if (x > 0)y = 1;
	printf("%d", y);


} */
/*int main() {
	int x, y;
	scanf("%d", &x);
	if (x < 0)
		y = -1;
	else if (x = 0)
		y = 0;
	else y = 1;
	printf("%d", y);
}*/
/*int main() {
	char a;
	scanf("%c", &a);
	switch (a) {
	case'A':printf("85-100\n"); break;
	case'B':printf("70-84\n"); break;
	case'C':printf("60-69\n"); break;
	case'D':printf("<60\n"); break;
	default:printf("enter data error!\n");
	}
	return 0;
}*/
/*int main() {
	bool leap;
	int year;
	scanf("%d", &year);
	if (year % 4 == 0 || year % 100 == 0 & year % 400 == 0)
	leap = 1;
	else
		leap = 0;

	if (leap)
		printf("%d������", year);
	 else 
		printf("%d��������",year);
}*/
/*int main() {
	int a, b, c,max;
	scanf("%d,%d,%d", &a, &b, &c);
	max = a;
	if (a < b)
		if (b < c)
			max = c;
		else
			max = b;
	else if (a < c)
		max = c;
	else
		max = a;
	printf("max=%d", max);
}*/
/*int main() {
	int x, y;
	printf("enter x:");
	scanf("%d", &x);
	y = -1;
	if (x != 0)
		if (x > 0)
			y = 1;
		else
			y = 0;
	printf("x=%d,y=%d\n", x, y);
	return 0;
 }*/
/*int main() {
	int x, y;
	printf("enter x:");
	scanf("%d", &x);
	y = 0;
	if (x >= 0)
		if (x > 0)y = 1;
		else y = -1;
	printf("x=%d,y=%d\n", x, y);
	return 0;
 }*/

/*int main() {
	float score;
	char grade;
	scanf("%f", &score);
	switch ((int)(score / 10))
	{
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0: grade = 'E'; break;
	default:printf("data error!");
	
	
		return 0;
		
   }printf("%c", grade); 
}*/

/*int main()
{
	float score;
	char grade;
	printf(" ������ѧ���ɼ� :");
	scanf("%f", &score);

	switch ((int)(score / 10))
	{
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0: grade = 'E';
	}
	printf(" �ɼ��� %5.1f,��Ӧ�ĵȼ��� %c\n ", score, grade);
	return 0;
}*/

/*int main() {
	int i;
	double bonus, bon1, bon2, bon4, bon6, bon10;
	bon1 = 100000 * 0.1;
	bon2 = bon1 + 100000 * 0.075;
	bon4 = bon2 + 100000 * 0.05;
	bon6 = bon4 + 100000 * 0.03;
	bon10 = bon6 + 400000 * 0.015;
	scanf("%d", &i);
	if (i <= 10000)
		bonus = i * 0.1;
	else if (i <= 200000)
		bonus = bon1 + (i - 100000) * 0.075;
	else if (i <= 400000)
		bonus = bon2 + (i - 200000) * 0.05;
	else if (i <= 600000)
		bonus = bon4 + (i - 400000) * 0.03;
	else if (i <= 1000000)
		bonus = bon6 + (i - 600000) * 0.015;
	else  
		bonus = bon10 + (i - 1000000) * 0.01;
	printf("����%dԪ�ɷ��ŵĽ�����%10.2f", i, bonus);
	return 0;
}
*/
/*int main() {
	int i,branch;
	double bonus, bon1, bon2, bon4, bon6, bon10;
	bon1 = 100000 * 0.1;
	bon2 = bon1 + 100000 * 0.075;
	bon4 = bon2 + 100000 * 0.05;
	bon6 = bon4 + 100000 * 0.03;
	bon10 = bon6 + 400000 * 0.015;
	scanf("%d", &i);
	branch = i / 100000;
	if (branch > 10)branch = 10;
	switch (branch) {
	case 0:bonus = i * 0.1; break;
	case 1:bonus = bon1 + (i - 100000) * 0.075; break;
	case 2:
	case 3:bonus = bon2 + (i - 200000) * 0.05; break;
	case 4:
	case 5:bonus = bon4 + (i - 400000) * 0.03; break;
	case 6:
	case 7:
	case 8:
	case 9: bonus = bon6 + (i - 600000) * 0.015; break;
	case 10: bonus = bon10 + (i - 1000000) * 0.01;
	}
	printf(" ������ %10.2f\n", bonus);
	printf("branch����%d", branch);
	return 0;
	}
	*/ 

/*int main() {
	int a, b, c, d, t;
	scanf("%d,%d,%d,%d", &a, &b, &c, &d);
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	if (a > c) {
		t = a;
		a = c;
		c = t;
		
	}
	if (a > d) {
		t = a;
		a = d;
		d = t;
	}
	if (b > c) {
		t = b;
		b = c;
		c = t;
	}
	if (b > d) {
		t = b;
		b = d;
		d = t;
	}
	if (c > d) {
		t = c;
		c = d;
		d = t;
	}
	printf("%d,%d,%d,%d",a,b,c,d);
	return 0;
}*/
/*int main() {
	int n = 1;
	int sum = 0;
	while (n <= 100)
	{
		sum = sum + n;
		n = n+1;
	}
	printf("%d", sum);
	return 0;
 }*/
/*int main() {
	int n = 1;
	int sum = 0;
	do {
		sum = sum + n;
		n++;
	} while (n <= 100);
	printf("%d", sum);
}*/

/*#define SUM 100000
int main() {
	float amount, aver, total;
	int i;
	for (i = 1, total = 0; i <= 1000; i++) {
		printf("please enter amount:");
		scanf("%f", &amount);
		total = total + amount;
		if (total >= SUM) break;
	}
	aver = total / i;
	printf("num=%d\naver=%10.2f\n", i, aver);
	return 0;
}*/
/*int main() {
	int sum;
	int i;
	int f1, f2,f3;
		f1 = 1; f2 = 1;
		printf("%d\n%d\n	", f1,f2);
		for (i = 1; i <=38; i++)
		{
			f3 = f1 + f2;
			printf("%d\n", f3);
			f1 = f2;
			f2 = f3;
		}
		return 0;
}*/
/*int main() {
	int n, i, k,m=0;
	for (n = 101; n <= 200; n = n + 2) {
		k = sqrt(n);
		for (i = 2; i <= k; i++)
			if (n % i == 0)break;
		if (i >= k + 1)
		{
			printf("%d", n);
			m = m + 1;
		}
		if (m % 10 == 0)printf("\n");
	}
	printf("\n");
		return 0;
}*/
/*int main() {
	char c;
	c = getchar();
	while (c != '\n')
	{if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			if(c>='W'&&c<='Z'||c>='w'&&c<='z')c=c-22;
			else c=c+4;
		}
		printf("%c",c);
			c=getchar();
	}
	printf("\n");
		return 0;
}*/

/*int main() {
	int i; double n = 1, s = 0;
	for (i = 1; i <=20; i++)
	{
		n = n * i;
		s = s + n;
	}
	printf("%lf",s);
	return 0;
}*/ //Ҫע���ַ����ͣ�����̫��治�³��ָ���

/*int main()
{
	double s = 0, t = 1;
	int n;
	for (n = 1; n <= 20; n++)
	{
		t = t * n;
		s = s + t;
	}
	printf("1!+2!+...+20!=%22.15e\n", s);
	return 0;
}*/













/*int main() {
	int a, b, c,max;
	scanf("%d,%d,%d", &a, &b, &c);
	if (a > b) {
		max = a;
		a = b;
		b = max;
	}
	if (a > c) {
		max = a;
		a = c;
		c = max;
	}
	if (b > c) {
		max = b;
		b = c;
		a = max;
	}



printf("%d", c); //���ֵ������ð�ݷ�   ������� ����������ʹ�� if��� ��max����ĳ���� Ȼ������
}/*int main() {
	int a, b, c, max;
	scanf("%d,%d,%d", &a, &b, &c);
	max = b;
	if (a > max) 
		max = a;
	
	if (c > max) 
		max = c;
	
	printf("max=%d\n", max);
	return 0;

}*/	/*int main() {
	int a, b, c,max;
	scanf("%d,%d,%d", &a, &b, &c);
	max = a;
	if (a < b)
		if (b < c)
			max = c;
		else
			max = b;
	else if (a < c)
		max = c;
	else
		max = a;
		//else if (c > max)
		//max = c; ����дҲ����

	printf("max=%d", max);
}*/

/*int main() {
	int i, j, a[10], t;
	printf("����ʮ������");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	printf("\n");
	for (j = 0; j < 9; j++)
	 for (i = 0; i < 9 - j; i++)
		if (a[i] > a[i + 1]) {
			t = a[i]; a[i] = a[i + 1]; a[i + 1] = t;}		
		printf("�ɴ�С������Ϊ");
		for (i = 0; i < 10; i++)
			printf("%d", a[i]);
		printf("\n");
		return 0;
}*/
/*int main() {
	int a[2][3] = { { 1,2,3 },{ 4,5,6 } };
	int b[3][2], i, j;
	for (i = 0; i <= 1; i++) {
		for (j = 0; j <= 2; j++)
		{ 
			printf("%3d", a[i][j]);
			b[j][i] = a[i][j];
		
		}
		printf("\n");
	}
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 1; j++) 
			printf("%3d", b[i][j]);
		
		printf("\n");
	}
	return 0;
}*/
//for �Ļ�������ִֻ��һ�����ʱ����Բ��� �����������ʱ����ʹ�÷��򱨴�


/*int main() {
	int i, j, row = 0, colum = 0, max;
	int a[3][4] = { {1,2,3,4},{9,8,7,6},{-10,10,-5,2} };
	max = a[0][0];
	for (i = 0; i <= 2; i++) 
		for (j = 0; j <= 3; j++) 
			if (a[i][j] > max) {
				max = a[i][j];
				row = i;
				colum = j;
			}
	printf("max=%d\nrow=%d\ncolum=%d\n",max,row,colum);
}*/
/*int main() {
	char str[13];
	scanf("%s", str); //��Ӧ���ڼӵ�ַ��& ��Ϊ���ַ�����������C�д�����������ʼ��ַ��
	printf("%s", str);
}*/
/*int main() {
	char str1[30] = { "People's Republic of " };
	char str2[] = { "China" };//[] ���Բ�д����Ϊ���Ը��ݸ�ֵȷ������ ����ѵ�һ��дΪ[] ��Ϊpro�ĳ��Ⱦ�Ϊ��ô�������ַ��������ϡ�
	printf("%s", strcat(str1, str2));
}*/
/*int main() {
	char str1[32] = { "i am peopel" };
	char str2[20];
	strcpy(str2, str1);
	printf("%s",str2);
}*/\



























/*int main() {
	int i, num = 0, word = 0;
	char string[81];
	char c;
	gets_s(string); //gets ��vs���Ƴ� ��Ϊ����ȫ ���ǿ���ʵ�ʻ���Ҫgets
	for (i = 0; (c = string[i]) != '\0'; i++)
		if (c == ' ')word = 0;
		else if (word == 0) {
			word = 1;
			num++;
		}
	printf("������%d������", num);
	return 0;

}*/




	/*int main() {
	char str[3][20];
	char string[20];
	int i;
	for (i = 0; i < 3; i++)
		gets_s(str[i]);
	if (strcmp(str[0], str[1]) > 0)
		strcpy(string, str[0]);
	else
		strcpy(string, str[1]);
	if (strcmp(str[2], string) > 0)
	strcpy(string, str[2]);
	printf("�����ַ�����%s", string);
	return 0;
}*/
/*int main() {
	int i, j, min, temp, a[11];
	for (i =1
		; i <=10; i++) {
		scanf("%d", &a[i]);
	}
	printf("\n"); printf("ԭ������Ϊ:");
	for (i = 1; i <=10; i++)
		printf("%5d", a[i]);

for (i = 1; i <=10; i++) {
	min = i;
	for (j = i + 1; j <= 10; j++)
		if (a[min] > a[j])
	min = j;
	temp = a[i];
	a[i] = a[min];
	a[min] = temp;

}
printf("����õ�ʮ������");
for (i =1; i <=10; i++) {
	printf("%5d", a[i]);
}

}*/
/*int main(){
	int a[10], b, i, j;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9 - i; j++) {

			if (a[j] > a[j + 1]) {
				b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}
	for (j = 0; j < 10; j++) {
		printf("%5d", a[j]);
		
	}


}*/
/*int main() {
	int a[2][3] = { {1,2,3},{4,5,6} }, b[3][2], i, j;
	for (i = 0; i <2; i++) {
		printf("\n");

		for (j = 0; j < 3; j++) {
			printf("%5d", a[i][j]);
			b[j][i] = a[i][j];
			
		}
	 }
	printf("\n");

	for (i = 0; i < 3; i++) {
		printf("\n");
		for (j = 0; j < 2; j++) {
			printf("%5d", b[i][j]);
		}
	}
}*/


/*int main() {
	int a[3][4] = { {2,3,233,243},{7,8,-80},{5,44,-111} };
	int max, row, colum,i,j;
	max = a[0][0];
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			if (max < a[i][j]) {
				max = a[i][j], row =i; colum = j;
			}
		}
	}
	printf("����ֵ%d,������%d,��%d", max, row, colum);
	return 0;
}*/
/*int main() {
	int a[3][3], i, j, d, e;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("a[%d][%d]", i, j);
			scanf("%d", &a[i][j]);
			
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i == 1 || j == 1) 
			{
				printf("%-6d", a[i][j]);
			
		
			}
			else {
				printf("%-6c", ' ');
			}
		}
		printf("\n");
	}
}*/
/*int main() {
	char str[3][20] ; int i, j;
	char string[20];
	for (i = 0; i < 3; i++) {
		scanf("%s", str[i]);
			
		
	}	if (strcmp(str[0], str[1]) > 0) {
				strcpy(string, str[0]);
			}
			else {
				strcpy(string, str[1]);
			}
			if (strcmp(str[0], str[2]) > 0) {
				strcpy(string, str[0]);
			}
			else {
				strcpy(string, str[2]);
			}
	printf("%s", string);
}*/
/*int main() {
	void hand_some();
	void boy();
	hand_some();
	boy();
	return 0;
}
void hand_some() {
	printf("���Ϲ��Ǵ�˧��");
}
void boy() {
	printf("�����Ǹ�ͦ�ߵ��к��ӣ�");
}*/

/*float add(float x, float y) {
	float z;
	z = x + y;
	return (z);
}
int main() {
	float add(float x, float y);//Dui ADD ����
	float a, b, c;
	printf("������������");
	scanf("%f%f", &a, &b);
	c=add(a,b);//����add
	printf("%2f+%2f=%5f",a,b ,c);
	return 0;
}*/
/*int main() {
	int a, b, c, d, max;
	printf("�������ĸ�������");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int max4(int,int,int,int);//��max����
	max = max4(a, b, c, d);//����max4����
	printf("�ĸ�������������%d", max);
}
int max4(int a, int b, int c, int d) {
	int max2(int x,int y);
	int m;
	m = max2(a,b);
	m = max2(m, c);
	m = max2(m, d);
	return (m);
}
int max2(int a, int b) {
	if (a >= b) {
		return (a);
	}
	else return (b);
}*/