#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void addition();
void substraction();
void multipication();
void division();
void power();
void modul();
unsigned long long int factorial();
void logarithm10();
void logarithme();
void squareroot();
void absolute();
void percentage();
void sinus();
void cosinus();
void tanjant();
void arcsin();
void arccos();
void arctan();
void reversingnumber();
void asagiyuv();
void yukariyuv();
void cubicroot();
void hypotenus();
void gauss();
void prime();
void temperature();
void denklem();
void armstrongnumber();
void decimaltobinary();
void binarytodecimal();
void fibonaccisequence();
void palindrome();
void leapyear();
void greatestcommondivisior();
void lowestcommonmultiple();
void perfectnumber();

int main() {
	
	char op;
	
	printf("addition => +\n");
    printf("substraction => -\n");
    printf("multipication => * \n");
    printf("division => / \n");
	printf("power => ^\n");
    printf("modul => ?\n");
    printf("factorial => !\n");
    printf("logarithm base 10 => 1\n");
    printf("logarithm base e => 2\n");
	printf("square root => 3\n");
	printf("absolute => 4\n");
	printf("percentage => y\n");
	printf("sinus => s\n");
	printf("cosinus => c\n");
	printf("tanjant => t\n");
	printf("arcsinus => a\n");
	printf("arccosinus => b\n");
	printf("arctanjant => d\n");
	printf("reverse number => 5\n");
	printf("floor => 6\n");
	printf("ceiling => 7\n");
	printf("cubic root => k\n");
	printf("hypotenus => h\n");
	printf("gauss summation => g\n");
	printf("prime number => p\n");
	printf("convert degree to fahrenheit =>e\n");
	printf("ax^2+bx+c=0 => f\n");
	printf("armstrong number => 8\n");
	printf("decimal to binary => o\n");
	printf("binary to decimal => i\n");
	printf("fibonacci sequence => 9\n");
	printf("palindrom number => 0\n");
	printf("leap year => l\n");
	printf("greatest common divisior => m\n");
	printf("lowest common multiple =>n\n");
	printf("perfect number =>x\n");
	
	printf("\nwelcome to calculator.choose an opeator: ");
	scanf("%c",&op);

	
	switch (op) {
		case '+': addition();
		    break;
		case '-': substraction();		    
			break;
		case '*': multipication();
			break;
		case '/': division();
			break;
		case '^': power();
			break;
		case '?': modul();
			break;
		case '!': factorial();
			break;
		case '1': logarithm10();
		    break;
		case '2': logarithme();
		    break;
		case '3': squareroot();
		    break;
		case '4': absolute();
			break;
		case 'y': percentage();
		    break;
		case 's': sinus();
		    break;
		case 'c': cosinus();
		    break;
		case 't': tanjant();
		    break;
		case 'a': arcsin();
		    break;
		case 'b': arccos();
		    break;
		case 'd': arctan();
		    break;
		case '5': reversingnumber();
		    break;
		case '6': asagiyuv();
		    break;
		case '7': yukariyuv();
		    break;
		case 'k': cubicroot();
		    break;
		case 'h': hypotenus();
		    break;
		case 'g': gauss();
		    break;
		case 'p': prime();
		    break;
		case 'e': temperature();
		    break;
		case 'f': denklem();
		    break;
		case '8': armstrongnumber();
		    break;
		case 'o': decimaltobinary();
		    break;
		case 'i': binarytodecimal();
		    break;
		case '9': fibonaccisequence();
		    break;
		case '0': palindrome();
		    break;
		case 'l': leapyear();
		    break;
		case 'm': greatestcommondivisior();
		    break;
		case 'n': lowestcommonmultiple();
		    break;
		case 'x': perfectnumber();
		    break;
	}
	
	return 0;
}

void addition() {
	
	float a;
	float b;
	float sum;
	printf("first num: ");
	scanf("%f",&a);
	printf("second num: ");
	scanf("%f",&b);
	sum = a + b;
	printf("%.2f + %.2f = %.2f",a,b,sum);
	
	
}

void substraction() {
	float a, b;
	float c = 0;
	
	printf("first num: ");
	scanf("%f",&a);
	printf("second num: ");
	scanf("%f",&b);
	
	c = a - b;
	
	printf("\n%.2f - %.2f = %.2f",a,b,c);
	
}

void multipication() {
	
	float a;
	float b;
	float result;
	printf("first num: ");
	scanf("%f",&a);
	printf("second num: ");
	scanf("%f",&b);
	result = a * b;
	printf("%.3f * %.3f = %.3f",a,b,result);



}

void division() {
	float a,b;
	float c = 0;
	
	printf("first num: ");
	scanf("%f",&a);
	printf("second num: ");
	scanf("%f",&b);
	
	c = a / b;
	
	printf("%f / %f = %f",a,b,c);
	
}

void power() {
	float base,exp;
	float result ;
	
	printf("base: ");
	scanf("%f",&base);
	printf("exponent: ");
	scanf("%f",&exp);
	
	result = pow(base,exp);
	
	printf("%.4f ^ %.4f = %.4f",base,exp,result);
	
}

void modul() {
	int a,b;
	int result = 0;
	
	printf("first num: ");
	scanf("%d",&a);
	printf("second num: ");
	scanf("%d",&b);
	
	result = a % b;
	
	printf("%d mod %d = %d",a,b,result);
}



unsigned long long int factorial() {
	int i;
	unsigned long long int result = 1;
	int  number;
	
	printf("num: ");
	scanf("%d",&number);

	if(number < 0) {
		printf("error");
	}

	else {
	
	for (i = 1; i <= number; i++) {
		result *= i;
	}
	
	printf("%d! = %llu",number,result);

	}
	
}

void logarithm10() {
	float a;
	float result ;
	
	printf("log10(x):  ");
	scanf("%f",&a);
	
	result = log10(a);
	
	printf("log(%f) = %f",a,result);
	
}

void logarithme() {
	int a;
	float result;
	
	printf("loge(x):  ");
	scanf("%d",&a);
	
	result = log(a);
	
	printf("loge(%d) = %f",a,result);
}

void squareroot() {
	float a;
	float result;
	
	printf("num: ");
	scanf("%f",&a);
	
	result = sqrt(a);
	
	printf("sqrt(%f) = %f",a,result);
}

void absolute() {
	float a;
	float result;
	
	printf("num: ");
	scanf("%f",&a);
	
	result = fabs(a);
	
	printf("|%.3f| = %.3f",a,result);
}

void percentage() {
	float a,b;
	float result;
	
	printf("num: ");
	scanf("%f",&a);
	printf("percentage: ");
	scanf("%f",&b);
	
	result = a * (b/100);
	
	printf("%f percentage %f = %f",a,b,result);

}

void sinus() {
	
	const double PI = 3.14159265;
	float angle;
	float radian;
	float result;
	
	printf("angle: ");
	scanf("%f",&angle);
	
	radian = angle * PI / 180;
	result = sin(radian);
	
	printf("%.2f degree (%.4f radian) sinus value: %.8f",angle,radian,result);
}

void cosinus() {
	const double PI = 3.14159265;
	float angle;
	float radian;
	float result;
	
	printf("angle: ");
	scanf("%f",&angle);
	
	radian = angle * PI / 180;
	result = cos(radian);
	
	printf("%.2f degree (%.4f radian) cosinus value: %.8f",angle,radian,result);
}

void tanjant() {
	const double PI = 3.14159265;
	float angle;
	float radian;
	float result;
	
	printf("angle: ");
	scanf("%f",&angle);
	
	radian = angle * PI / 180;
	result = tan(radian);
	
	printf("%.2f degree (%.4f radian) tanjant value: %.8f",angle,radian,result);
}

void arcsin() {
	const double PI = 3.14159265;
	float value;
	float radian;
	float degree;
	
	printf("sinus value: ");
	scanf("%f",&value);
	
	radian = asin(value);
	degree = radian * 180 / PI;
	
	printf("the angle that sinus value is %.4f : radian: %.4f derece: %.2f",value,radian,degree);
}

void arccos() {
	const double PI = 3.14159265;
	float value;
	float radian;
	float degree;
	
	printf("cosinus value: ");
	scanf("%f",&value);
	
	radian = acos(value);
	degree = radian * 180 / PI;
	
	printf("the angle that sinus value is %.4f : radian: %.4f degree: %.2f",value,radian,degree);
}

void arctan() {
	const double PI = 3.14159265;
	float value;
	float radian;
	float degree;
	
	printf("tanjant value: ");
	scanf("%f",&value);
	
	radian = atan(value);
	degree = radian * 180 / PI;
	
	printf("the angle that sinus value is %.4f : radian: %.4f derece: %.2f",value,radian,degree);
}

void reversingnumber() {
	float a;
	float result;
	
	printf("number: ");
	scanf("%f",&a);
	
	result = 1 / a;
	
	printf("reverse of %f: %f",a,result);
	
}

void asagiyuv() {
	float a;
	float result;
	
	printf("number: ");
	scanf("%f",&a);
	
	result = floor(a);
	
	printf("floor %f: %f",a,result);
}

void yukariyuv() {
	float a;
	float result;
	
	printf("number: ");
	scanf("%f", &a);
	
	result = ceil(a);
	
	printf("ceil %f: %f",a,result);
}

void cubicroot() {
	float a;
	float result;
	
	printf("number: ");
	scanf("%f",&a);
	
	result = cbrt(a);
	
	printf("cubic root %f: %f",a,result);
}

void hypotenus() {
	float a,b;
	float result;
	
	printf("1. edge: ");
	scanf("%f",&a);
	printf("2. edge: ");
	scanf("%f",&b);
	
	result = hypot(a,b);
	
	printf("hypotenus value: %f",result);
}

void gauss(){
    int i;
	int number;
	int sum;
	int result;
	
	printf("number: ");
	scanf("%d",&number);
	
	result = ((number) * (number + 1)) / 2;
	
	printf("gauss sumation: %d",result);
}

void prime() {
	int i;
	int number;
	int count = 0;
	
	printf("number: ");
	scanf("%d",&number);
	
	for (i= 2; i < number;i++) {
		if (number % i == 0){
		    count++;
		}
	}
	
	if (count > 0) {
		printf("%d is not prime",number);
		
	}
	else {
		printf("%d is prime",number);
	}
}

void temperature() {
	float derece;
	float fahrenheit;
	
	printf("degree: ");
	scanf("%f",&derece);
	
	fahrenheit = (derece*1.8) + 32;
	
	printf("%f degree = %f fahrenheit",derece,fahrenheit);
	
}

void denklem() {
	double a,b,c,delta,x1,x2,realpart,imaginarypart;
	
	printf("a,b,c value for ax2+bx+c=0: ");
	scanf("%lf %lf %lf",&a, &b, &c);
	delta = b * b - 4 * a * c;
	                                          
    if (delta > 0) {
    	x1 = (-b + sqrt(delta)) /2 * a;
    	x2 = (-b - sqrt(delta)) /2 * a;
    	printf("(%.1f)x^2+(%.1f)x+(%.1f)=0  1. root = %.2f, 2. root = %.2f",a,b,c,x1,x2);
	}
	else if (delta < 0) {
		realpart = (-b) / 2 * a;
		imaginarypart = sqrt(-delta) / 2 * a;
		printf("(%.1f)x^2+(%.1f)x+(%.1f)=0  1. root = %.2lf + %.2lfi, 2. root = %.2lf - %.2lfi",a,b,c,realpart,imaginarypart,realpart,imaginarypart);
	}
	else {
		x1 = x2 = (-b) / 2 * a;
		printf("(%.1f)x^2+(%.1f)x+(%.1f)=0 equal root and %.2f value",a,b,c,x1);
	}
}

void armstrongnumber() {
	int num, originalnum, remainder, n = 0;
	float result = 0.0;
	
	printf("number: ");
	scanf("%d",&num);
	
	originalnum = num;
	
	for (; num != 0; n++) {
		num /= 10;
		
	}
	num = originalnum;
	
	for (; num != 0; num /= 10) {
		remainder = num % 10;
		result += pow(remainder,n);
	}
	
	if ((int)result == originalnum) {
		printf("%d is armstrong number.",originalnum);
	}
	else {
		printf("%d is not armstrong number.",originalnum);
	}
}

void decimaltobinary() {
	int num;
	int n;
	int i= 1,rem;
	long long bin = 0;
	
	printf("decimal number: ");
	scanf("%d",&num);
	
	n = num; 
	
	while (num != 0) {
		rem = num % 2;
		num /= 2;
		bin += rem * i;
		i *= 10;
	}
	
	printf("decimal %d = binary %d",n,bin);
}

void binarytodecimal() {
	int dec = 0, i = 0, rem; 
	int num, n;
	
	printf("binary number: ");
	scanf("%d",&num);
	
	n = num;
	
	while (num != 0) {
		rem = num % 10;
		num /= 10;
		dec += rem * pow(2,i);
		i++;
	}
	
	printf("binary %d= decimal %d",n,dec);
}

void fibonaccisequence() {
	
	int limit, a = 0, b = 1,c;
	
	printf("term number for fibonacci sequence: ");
	scanf("%d",&limit);

    printf("%d\n%d\n",a,b);
	int i;
	for (i=1; i<=limit-2;i++) {
        c = a + b;
		printf("%d\n",c);
        a = b;
        b = c;
	}
}

void palindrome() {
	int n, reversed = 0, remainder, original;
	
	printf("number: ");
	scanf("%d",&n);
	
	original = n;
	
	while (n != 0) {
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}
	if (original == reversed) {
		printf("%d is palinrome number.",original);
	}
	else {
		printf("%d is not palindrome number.",original);
	}
	
}

void leapyear() {
	
	int yil;
	
	printf("year value: ");
	scanf("%d",&yil);
	
	if ((yil % 4 == 0) && (yil % 100 != 0)) {
		printf("%d year is leap year",yil);
	}
	else if (yil % 400 == 0) {
		printf("%d year is leap year",yil);
	}
	else {
		printf("%d year is not leap year",yil);
	}
}

void greatestcommondivisior() {
	int n1,n2,i,gcd;
	
	printf("two number: ");
	scanf("%d %d",&n1,&n2);
	
	for (i = 1; i <= n1 && i <= n2; i++) {
		if (n1%i==0 && n2%i==0) {
			gcd = i;
		}
	}
	printf("gcd(%d,%d)=%d",n1,n2,gcd);
}

void lowestcommonmultiple() {
	int n1,n2,i;
	int max;
	
	printf("two number: ");
	scanf("%d %d",&n1,&n2);
	
	max = (n1 > n2) ? n1 : n2;
	
	while(1) {
		if (max % n1 == 0 && max % n2 == 0) {
			printf("lcm(%d,%d) = %d ",n1,n2,max);
		    break;
		}
		max++;
	}
}

void perfectnumber() {
	int number,n;
	int sum = 0;
	
	printf("number: ");
	scanf("%d",&n);
	number = n;
	int j;
	for (j = 1; j < n; j++) {
		if (n%j == 0) {
			sum = sum + j;
		}
	}
	
	if (sum == number) {
		printf("%d is perfect number.",number);
	}
	else {
		printf("%d is not perfect number.",number);
	}
}