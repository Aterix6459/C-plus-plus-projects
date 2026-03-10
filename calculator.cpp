// #include <iostream>

// int main(){

//     int num;
//     std::cout << "введите число: ";
//     std::cin >> num;
//     if(num > 3) {
//         std::cout << num << " больше 3\n";
//     }
//     else if(num == 3) {
//         std::cout << num << " равно 3\n";
//     }
//     else {
//         std::cout << num << " меньше 3\n";
//     }

//     return 0;
// }

#include <iostream>

int main() {
    long long num1, num2, help_num;
    std::string znak;

    std::cout << "введите первое число: ";
    std::cin >> num1;

    std::cout << "введите второе число: ";
    std::cin >> num2;

    std::cout << "введите знак(+, -, *, /): ";
    std::cin >> znak;

    // меньше памяти используется, но маленькие цифры
    // if(znak == "+"){
    //     std::cout << num1 + num2 << "\n";
    // }
    // else if(znak == "-"){
    //     std::cout << num1 - num2 << "\n";
    // }
    // else if(znak == "*"){
    //     std::cout << num1 * num2 << "\n";
    // }
    // else if(znak == "/"){
    //     std::cout << num1 / num2 << "\n";
    // }
    // else{
    //     std::cout << "введите правильное значение.\n";
    // }

    // больше памяти используется, но большие цифры
    if(znak == "+"){ 
        help_num = num1 + num2;
        std::cout << help_num << "\n";
    }
    else if(znak == "-"){
        help_num = num1 - num2;
        std::cout << help_num << "\n";
    }
    else if(znak == "*"){
        help_num = num1 * num2;
        std::cout << help_num << "\n";
    }
    else if(znak == "/" && num2 != 0){
        help_num = num1 / num2;
        std::cout << help_num << "\n";
    }
    else // если одна строка кода, то можно не писать фигурные скобки
        std::cout << "введите правильное значение.\n";
}