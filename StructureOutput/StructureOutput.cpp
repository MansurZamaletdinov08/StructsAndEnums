#include <iostream>

struct Address {
    std::string county;
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

    std::cout << A.county << " " << A.city;
    
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

    std::cout << "\n" << std::endl;

    Address r;
    r.county = "Россия";
    r.city = "Ижевск";
    r.street = "Пушкина";
    r.house = 59;
    r.Flat = 143;
    r.index = 983769;


    std::cout << "Страна: " << r.county << "\n" << "Город: " << r.city << "\n" << "Улица" << r.street << "\n"
        << "Дом: " << r.house << "\n" << "Квартира: " << r.Flat << "\n" << "Индекс: " << r.index;
}