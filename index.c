#include<stdio.h>
#define PI 3.1416

void area_perimeter_triangle();
void area_perimeter_rectangle();
void area_circumference_circle();
void temp_fahrenheit_celsius();
void num_odd_even();
void largest_num();
void roots_quadratic();
void factorial();
void fibonacci_numbers();
void sum_series();

int main()
{
    while(1)
    {
        int choice;


        printf("\n\n------------------------------------------------------------------------------------");
        printf("\nMenu of 10 Programs for Lab Tests(Section-01)\n\n");

        printf("1.Find the area and perimeter of a triangle (three sides given)\n");
        printf("2.find area and perimeter of a rectangle.\n");
        printf("3.find area and circumference of a circle (Use PI as a symbolic character)\n");
        printf("4.convert temperature in Fahrenheit to Celsius.\n");
        printf("5.Check a number is odd or even.\n");
        printf("6.determine the largest number among three numbers.\n");
        printf("7.find all possible roots of a quadratic equation.\n");
        printf("8.find the factorial of an integer\n");
        printf("9.find first n Fibonacci numbers\n");
        printf("10.find sum of series: 1/1! + 2/2! + 3/3! + ....  + n/n!\n");
        printf("--------------------------------------------------------------------------------------\n");
        printf("Enter a serial number for run a program: ");
        scanf("%d",&choice);


        switch(choice)
        {

        case 1:
        {
            area_perimeter_triangle();
            break;
        }

        case 2:
        {
            area_perimeter_rectangle();
            break;
        }

        case 3:
        {
            area_circumference_circle();
            break;
        }

        case 4:
        {
            temp_fahrenheit_celsius();
            break;
        }

        case 5:
        {
            num_odd_even();
            break;
        }

        case 6:
        {
            largest_num();
            break;
        }

        case 7:
        {
            roots_quadratic();
            break;
        }

        case 8:
        {
            factorial();
            break;
        }

        case 9:
        {
            fibonacci_numbers();
            break;
        }

        case 10:
        {
            sum_series();
            break;
        }
        default:
            printf("ERROR!!!. Please Enter Correct Serial Number");
        }

        getch();
    }

}

int num,i,first=0,second=1,n;
long long int fact=1,fibo;
float arm1,arm2,arm3,perimeter,area,s,length,width,radius,
      circumference,fahrenheit,celsius,num1,num2,num3;
double a,b,c,d,x1,x2,sum;




void area_perimeter_triangle()
{
    printf("\nEnter Three Arms: ");
    scanf("%f %f %f",&arm1,&arm2,&arm3);
    perimeter=arm1+arm2+arm3;
    s = perimeter/2 ;
    area = sqrt(s*(s-arm1)*(s-arm2)*(s-arm3));
    printf("\nPerimeter = %f",perimeter);
    printf("\nArea = %f",area);
}

void area_perimeter_rectangle()
{
    printf("\nEnter The length & width: ");
    scanf("%f %f",&length,&width);
    perimeter=2*(length+width);
    area = length*width;
    printf("\nPerimeter = %f",perimeter);
    printf("\nArea = %f",area);
}

void area_circumference_circle()
{
    printf("\nEnter The Value of Radius: ");
    scanf("%f",&radius);
    circumference=2*PI*radius;
    area = PI*radius*radius;
    printf("\ncircumference = %f",circumference);
    printf("\nArea = %f",area);
}

void temp_fahrenheit_celsius()
{
    printf("\nEnter a Temperature in Fahrenheit: ");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit-32)*5/9;
    printf("\nTemperature in Celsius is %f",celsius);
}

void num_odd_even()
{
    printf("\nEnter an Integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("\n%d is Even.", num);
    else
        printf("\n%d is Odd.", num);
}

void largest_num()
{
    printf("\nEnter Three Numbers: ");
    scanf("%f %f %f",&num1,&num2,&num3);
    if(num1 == num2 == num3)
        printf("Numbers are Equal");
    else if(num1>=num2 && num1>=num3)
        printf("%.2f is The Largest Number",num1);
    else if(num2>=num1 && num2>=num3)
        printf("%.2f is The Largest Number",num2);
    else if(num3>=num1 && num3>=num2)
        printf("%.2f is The Largest Number",num3);
    else
        printf("ERROR!!!");
}

void roots_quadratic()
{
    printf("\nEnter The Values of a b c: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    d = sqrt(b*b-4*a*c);
    x1 = (-b+d)/(2*a);
    x2 = (-b-d)/(2*a);

    printf("\nX1 = %lf",x1);
    printf("    X2 = %lf",x2);
}

void factorial()
{
    printf("\nEnter An Integer: ");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
        fact = fact * i;
    }
    printf("\nThe Factorial of %d is: %lld\n", num, fact);
}

void fibonacci_numbers()
{
    printf("\nEnter The number of terms in Fibonacci series: ");
    scanf("%d",&n);

    printf("\nFibonacci series: %d %d", first, second);

    for(i=3; i<=n; i++)
    {
        fibo = first + second;
        first = second;
        second = fibo;

        printf(" %lld",fibo);
    }

}

void sum_series()
{
    printf("\nEnter The number of terms in The series: ");
    scanf("%d",&n);
    num=1;
    while(num<=n)
    {
        for(i=1; i<=num; i++)
        {
            fact = fact * i;
        }
        sum = sum + (num/fact);
        num++;
    }
    printf("Sum of series is %lf\n", sum);
}



