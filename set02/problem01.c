

#include <stdio.h>

void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main()
{
    // Sumarising all the code
    float base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}

void input(float *base, float *height)
{
    // Getting base of the triangle
    printf("Please enter the base");
    scanf("%f",base);

    // Getting height of the triangle
    printf("please enter the height");
    scanf("%f",height);
}

void find_area(float base, float height, float *area)
{
    // putting area of the triangke
    *area=(0.5*base*height);
}

void output(float base, float height, float area)
{
    // printing the area of the triangle
    printf("the area of triangle is %f",area);
}




