#include <iostream>

int main(){
    float num1, num2;
    char znak;

    // std::cout << "введите первое число: ";
    // std::cin >> num1;

    // std::cout << "введите второе число: ";
    // std::cin >> num2;

    // std::cout << "введите знак(+, -, *, /): ";
    // std::cin >> znak;

    std::cout << "--калькулятор--\n";
    std::cout << ": ";
    std::cin >> num1 >> znak >> num2;
    if(znak==0){
        std::cout << "ошибка";
    }
    
    switch(znak) {
        case '+': std::cout << "ответ: " << num1+num2 << std::endl; break;
        case '-': std::cout << "ответ: " << num1-num2 << std::endl; break;
        case '*': std::cout << "ответ: " << num1*num2 << std::endl; break;
        case '/':
            if(num2 != 0) std::cout << "ответ: " << num1/num2 << std::endl;
            else std::cout << "делить на 0 нельзя!"; break;
        default: std::cout << "введите правильное значение.\n"; break;
        
    }
    return 0;
}
