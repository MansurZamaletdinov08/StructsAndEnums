#include <iostream>


enum month {
    January,
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


int print_months(int mon_id) {
    return mon_id;
}


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
    std::cout << "Введите число от 1 до 12: ";
    std::cin >> x;
    x = x - 1;

    static_cast<month>(x);
    if (x <= 12) {
        switch (x) {
        case January:
            std::cout << "Сейчас Январь";
            break;
        case February:
            std::cout << "Сейчас Февраль";
            break;
        case March:
            std::cout << "Сейчас Март";
            break;
        case April:
            std::cout << "Сейчас Апрель";
            break;
        case May:
            std::cout << "Сейчас Май";
            break;
        case June:
            std::cout << "Сейчас Июнь";
            break;
        case July:
            std::cout << "Сейчас Июль";
            break;
        case August:
            std::cout << "Сейчс Август";
            break;
        case September:
            std::cout << "Сейчас Сентбрь";
            break;
        case October:
            std::cout << "Сейчас Октябрь";
            break;
        case November:
            std::cout << "Сейчас Ноябрь";
            break;
        case December:
            std::cout << "Сейчас Декабрь!";
            break;
            if (x == 0) {
                std::cout << "До свидания!";
            }
        }
    }
    else {
        std::cout << "Неправильный номер!";
        return -1;
    }

    int mon_id = x;
}
