 #include <stdio.h>
int main(){
    float radius, area;


    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);


    area = 3.14 * radius * radius;
    printf("Area of the circle is: %.2f", area);
    return 0;
}
