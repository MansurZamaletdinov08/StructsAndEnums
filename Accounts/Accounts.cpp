#include <iostream>

struct acount {
    int number;
    std::string name;
    float balance;
};

void change_acount(acount& random) {
    int x = 0;
    std::cout << "Введите новый баланс: ";
    std::cin >> x;

    random.balance = x;
}

int main()
{
    setlocale(LC_ALL, "Ru");
    int number1 = 0;
    std::string name1;
    float balance1;

    std::cout << "Введите номер счёта: ";
    std::cin >> number1;

    std::cout << "Введите имя владельца: ";
    std::cin >> name1;

    std::cout << "Введите баланс: ";
    std::cin >> balance1;

    acount random = {number1, name1, balance1};
    change_acount(random);
    std::cout << "Изменённый баланс: " << random.balance << std::endl;

    std::cout << "Ваш счёт: " << random.name << ", " << random.number << ", " << random.balance;
}