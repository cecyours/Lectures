#include<stdio.h>

// function declaration
int areaRectangle(int, int);

int main() {
    int length, breadth, area;
    
    // function pointer declaration
    // note that our pointer declaration has identical 
    // arguments as the function it will point to
    int (*fp)(int, int); 
    
    printf("Enter length and breadth of a rectangle\n");
    scanf("%d%d", &length, &breadth);
    
    // pointing the pointer to functions memory address
    fp = areaRectangle;
    
    // calling the function using function pointer
    area = (*fp)(length, breadth); 
    
    printf("Area of rectangle = %d", area);
    return 0;
}

// function definition 
int areaRectangle(int l, int b) {
    int area_of_rectangle = l * b;
    return area_of_rectangle;
}
