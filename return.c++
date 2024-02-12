#include<iostream>

double square(double length);
double cube(double length);

int main(){
    double length = 5.5 ; //cm
    double area= square(length);
    double volume= cube(length);
    std::cout << "The area of the rectangle is: " << area << "^cm." << std::endl;
    std::cout << "The volume of the cube is: " << volume << "^cm." << std::endl;

}


double square(double length){
    return length * length;
}

double cube(double length){
    return length * length *length;
}