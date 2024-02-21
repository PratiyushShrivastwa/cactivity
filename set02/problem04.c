#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
    int n, a[n], sum=0;

    n=input_array_size();
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
    output(sum);

    return 0;
}

int input_array_size()
{
    int x;
    printf("How many numbers u want !!!  ");
    scanf("%d",&x);
    return x;
}

void input_array(int n, int a[n])
{
    int b;
    for(int i=0; i<n; i++)
    {
        printf("Enter the number %d",b+1);
        scanf("%d",a[i]);
    }
}

int sum_composite_numbers(int n, int a[n])
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            for(int j=0; j<=i; j++)
            {
                sum+=i;
            }
            printf("the factors are %d \n",i);
        }
    }
    return sum;
}

void output(int sum)
{
    printf("The sum is %d",sum);
}