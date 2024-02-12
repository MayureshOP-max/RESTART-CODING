#include<iostream>

void bakePizza(std::string topping1, std::string topping2);

int main(){
    bakePizza("Pepperoni", "mushroom");

}

void bakePizza(){
    std::cout<<"Here is your Pizza!";
}
void bakePizza(std::string topping1){
    std::cout<<"Here is your "<< topping1<<" Pizza!"<<std::endl;
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout<<"Here is your "<< topping1 << " and " <<topping2 <<" Pizza!"<<std::endl;
}