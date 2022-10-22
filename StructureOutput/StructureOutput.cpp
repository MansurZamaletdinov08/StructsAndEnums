#include <iostream>

struct Address {
    std::string country;
    std::string city;
    std::string street;
    int house;
    int Flat;
    int index;
};


void func(Address& A, std::string country, std::string city, std::string street, int house, int Flat, int index) {

    std::cout << "Страна: " << country << std::endl;
    std::cout << "Город: " << city << std::endl;
    std::cout << "Улица: " << street << std::endl;
    std::cout << "Дом: " << house << std::endl;
    std::cout << "Квартира: " << Flat << std::endl;
    std::cout << "Индекс: " << index << std::endl;
}


int main() {
    setlocale(LC_ALL, "Ru");
    std::string country;
    std::string city;
    std::string street;
    int house;
    int Flat;
    int index;


    std::cout << "Страна: ";
    std::cin >> country;

    std::cout << "Город: ";
    std::cin >> city;

    std::cout << "Улица: ";
    std::cin >> street;

    std::cout << "Дом: ";
    std::cin >> house;

    std::cout << "Квартира: ";
    std::cin >> Flat;

    std::cout << "Индекс: ";
    std::cin >> index;
    std::cout << std::endl;


    Address r;
    func(r, country, city, street, house, Flat, index);
    
}
