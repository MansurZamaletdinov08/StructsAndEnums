#include <iostream>


enum month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};




int main() {
    setlocale(LC_ALL, "Ru");
    month m1 = month::January;
    month m2 = month::February;
    month m3 = month::March;
    month m4 = month::April;
    month m5 = month::May;
    month m6 = month::June;
    month m7 = month::July;
    month m8 = month::August;
    month m9 = month::September;
    month m10 = month::October;
    month m11 = month::November;
    month m12 = month::December;


    int x;
    do {
        std::cout << "Введите число от 1 до 12: ";
        std::cin >> x;

        static_cast<month>(x);
        if (x <= 12) {
            switch (x) {
            case January:
                std::cout << "Сейчас Январь" << std::endl;
                break;
            case February:
                std::cout << "Сейчас Февраль" << std::endl;
                break;
            case March:
                std::cout << "Сейчас Март" << std::endl;
                break;
            case April:
                std::cout << "Сейчас Апрель" << std::endl;
                break;
            case May:
                std::cout << "Сейчас Май" << std::endl;
                break;
            case June:
                std::cout << "Сейчас Июнь" << std::endl;
                break;
            case July:
                std::cout << "Сейчас Июль" << std::endl;
                break;
            case August:
                std::cout << "Сейчс Август" << std::endl;
                break;
            case September:
                std::cout << "Сейчас Сентбрь" << std::endl;
                break;
            case October:
                std::cout << "Сейчас Октябрь" << std::endl;
                break;
            case November:
                std::cout << "Сейчас Ноябрь" << std::endl;
                break;
            case December:
                std::cout << "Сейчас Декабрь!" << std::endl;
                break;
                if (x == 0) {
                    std::cout << "До свидания!" << std::endl;
                }
            }
        }
        if (x == 0) {
            std::cout << "До свидания!";
            return 0;
        }
        if (x > 12 || x < 0) {
            std::cout << "Не правильный номер" << std::endl;
        }
    } while (x < 12 || x > 0);
}
