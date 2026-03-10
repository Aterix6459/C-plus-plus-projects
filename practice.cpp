#include <iostream>
using std::endl;

int main() {
    int rand_numb;    
    int user_numb;
    int user_wins = 0;

    for(int i = 10; i > 1;) {
        for(int i = 10; i > 1;) {
        
            std::cout << "|   --угадывание числа--  |\n";
            std::cout << "|     угадайте число,     |\n|которое загадал компьютер|\n|        от 1 до 15       |\n";
            std::cout << "         победы: " << user_wins << endl;

            srand(time(NULL));
            rand_numb = 1 + rand() % 15;
            std::cout << rand_numb;

            std::cout << "       ваш вариант: ";
            std::cin >> user_numb;

            if(user_numb == rand_numb) {
                std::cout << "       \033[31m||вы угадали||\033[0m\n";
                user_wins++;

                std::string user_quest;
                std::cout << "хотите поиграть ещё? (да/нет) ";
                std::cin >> user_quest;

                if(user_quest == "да")
                    break;
                else if(user_quest == "нет")
                    return 0;
                else
                    return 0;
            }
            else
                std::cout << "       вы не угадали\n";

        }

    }
    return 0;
}