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


    month season = static_cast<month>(1);
    static_cast<int>(season);


    int x;
    std::cout << "Введите число от 1 до 12: ";
    std::cin >> x;

    switch (x) {
    case 0:
        std::cout << "До свидания!";
    case 1:
        std::cout << "Январь";
        break;
    case 2:
        std::cout << "Февраль";
        break;
    case 3:
        std::cout << "Март";
        break;
    case 4:
        std::cout << "Апрель";
        break;
    case 5:
        std::cout << "Май";
        break;
    case 6:
        std::cout << "Июнь";
        break;
    case 7:
        std::cout << "Июль";
        break;
    case 8:
        std::cout << "Август";
        break;
    case 9:
        std::cout << "Сентябрь";
        break;
    case 10:
        std::cout << "Октябрь";
        break;
    case 11:
        std::cout << "Ноябрь";
        break;
    case 12:
        std::cout << "Декабрь";
        }
        if (x > 12) {
            std::cout << "Неправильный номер!";
        }
    }

/*
#include <iostream>

enum class months
{
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
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Ru");

    
    months m1 = months::January;
    months m2 = months::February;
    months m3 = months::March;
    months m4 = months::April;
    months m5 = months::May;
    months m6 = months::June;
    months m7 = months::July;
    months m8 = months::August;
    months m9 = months::September;
    months m10 = months::October;
    months m11 = months::November;
    months m12 = months::December;
    
    
    int x = 0;

    std::cout << "Введите число от 1 до 12: ";
    std::cin >> x;

    //months m1 = static_cast<months>(1);
    months m1 = static_cast<months>(1);
    static_cast<int>(m1);
    
    months m2 = static_cast<months>(2);
    static_cast<int>(m2);

    months m3 = static_cast<months>(3);
    static_cast<int>(m3);

    months m4 = static_cast<months>(4);
    static_cast<int>(m4);

    months m5 = static_cast<months>(5);
    static_cast<int>(m5);

    months m6 = static_cast<months>(6);
    static_cast<int>(m6);

    months m7 = static_cast<months>(7);
    static_cast<int>(m7);

    months m8 = static_cast<months>(8);
    static_cast<int>(m8);

    months m9 = static_cast<months>(9);
    static_cast<int>(m9);

    months m10 = static_cast<months>(10);
    static_cast<int>(m10);

    months m11 = static_cast<months>(11);
    static_cast<int>(m11);

    months m12 = static_cast<months>(12);
    static_cast<int>(m12);

    
    if (m1 == months::January) {
        std::cout << "Сейчас Январь!";
    }
    else if (m2 == months::February) {
        std::cout << "Сейчас Февраль!";
    }

    else if (m3 == months::March) {
        std::cout << "Сейчас Март!";
    }

    else if (m4 == months::April) {
        std::cout << "Сейчас Апрель!";
    }

    else if (m5 == months::May) {
        std::cout << "Сейчас Май!";
    }

    else if (m2 == months::June) {
        std::cout << "Сейчас Июнь!";
    }

    else if (m2 == months::July) {
        std::cout << "Сейчас Июль!";
    }

    else if (m2 == months::August) {
        std::cout << "Сейчас Август!";
    }

    else if (m2 == months::September) {
        std::cout << "Сейчас Сентябрь!";
    }

    else if (m2 == months::October) {
        std::cout << "Сейчас Октябрь!";
    }
}

/*
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


    month season = static_cast<month>(1);
    std::cout << static_cast<int>(season);


    int x;
    std::cout << "Введите число от 1 до 12: ";
    std::cin >> x;

    switch (x) {
    case 0:
        std::cout << "До свидания!";
    case 1:
        std::cout << "Январь";
        break;
    case 2:
        std::cout << "Февраль";
        break;
    case 3:
        std::cout << "Март";
        break;
    case 4:
        std::cout << "Апрель";
        break;
    case 5:
        std::cout << "Май";
        break;
    case 6:
        std::cout << "Июнь";
        break;
    case 7:
        std::cout << "Июль";
        break;
    case 8:
        std::cout << "Август";
        break;
    case 9:
        std::cout << "Сентябрь";
        break;
    case 10:
        std::cout << "Октябрь";
        break;
    case 11:
        std::cout << "Ноябрь";
        break;
    case 12:
        std::cout << "Декабрь";
    }
    if (x > 12) {
        std::cout << "Неправильный номер!";
    }
}
*/