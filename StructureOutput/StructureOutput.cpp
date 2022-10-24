#include <iostream>

struct Address {
    std::string country;
    std::string city;
    std::string street;
    int house;
    int Flat;
    int index;
};


void func(Address& A) {
    std::cout << "Страна: " << A.country << std::endl;
    std::cout << "Город: " << A.city << std::endl;
    std::cout << "Улица: " << A.street << std::endl;
    std::cout << "Дом: " << A.house << std::endl;
    std::cout << "Квартира: " << A.Flat << std::endl;
    std::cout << "Индекс: " << A.index << std::endl;
}


int main() {
    setlocale(LC_ALL, "Ru");
    Address v1;
    std::cout << "Первая структура: " << std::endl;
    std::cout << "Страна: ";
    std::cin >> v1.country;

    std::cout << "Город: ";
    std::cin >> v1.city;

    std::cout << "Улица: ";
    std::cin >> v1.street;

    std::cout << "Дом:";
    std::cin >> v1.house;

    std::cout << "Квартира: ";
    std::cin >> v1.Flat;

    std::cout << "Индекс: ";
    std::cin >> v1.index;
    std::cout << "\n\n";
    std::cout << "Вывод функции: " << std::endl;
    func(v1);

    Address v2;
    std::cout << "\nВторая структура: \n" << std::endl;
    std::cout << "Страна: ";
    std::cin >> v2.country;

    std::cout << "Город: ";
    std::cin >> v2.city;

    std::cout << "Улица: ";
    std::cin >> v2.street;

    std::cout << "Дом:";
    std::cin >> v2.house;

    std::cout << "Квартира: ";
    std::cin >> v2.Flat;

    std::cout << "Индекс: ";
    std::cin >> v2.index;
    std::cout << "\n\n";
    std::cout << "Вывод второй функции: ";

    func(v2);
}
