#include <iostream>

int main()
{
    // arithmetic operations
    /*
    int a{ 28 };
    int b{ 12 };

    std::cout << a << " + " << b << " = " << a + b << "\n";
    std::cout << a << " - " << b << " = " << a - b << "\n";
    std::cout << a << " * " << b << " = " << a * b << "\n";
    std::cout << a << " / " << b << " = " << a / b << "\n";
    std::cout << a << " % " << b << " = " << a % b << "\n";

    
    std::cout << ++a << "\n"; // 29
    std::cout << a << "\n";   // 29

    std::cout << a++ << "\n"; // 30
    std::cout << a << "\n";   // 30

    int c = ++a; // a <- 31
    std::cout << c << "\n"; // 31

    int d = a++; // a <- 32
    std::cout << d << " " << a << "\n"; // 31

    int n = 5;
    int m = -n;
    */

    /*
    int number;
    std::cout << "input number with 4 digits: ";
    std::cin >> number;

    int sum{};

    sum = sum + number % 10;
    number = number / 10;

    sum = sum + number % 10;
    number = number / 10;

    sum = sum + number % 10;
    number = number / 10;

    sum = sum + number % 10;
    number = number / 10;

    std::cout << "summa of all digits of number = " << sum << "\n";
    */

    int a{ 28 };
    int b{ 11 };

    // modifications operators
    a += b; // a = a + b;
    a -= b; // a = a - b;
    a *= b; // a = a * b;
    a /= b; // a = a / b;
    a %= b; // a = a % b;

    // compare operations
    // >, <, >=, <=, ==, !=
    // // logic operators
    // &&, ||, !
    /*
    int n;
    std::cout << "input number: ";
    std::cin >> n;

    std::cout << std::boolalpha << (n > 0) << "\n";
    */
    
    /*
    int begin{ 8 };
    int end{ 20 };
    int lunchBegin{ 13 };
    int lunchEnd{ 15 };

    int time;
    std::cout << "input time: ";
    std::cin >> time;

    //std::cout << std::boolalpha << ((time >= begin) && (time < end)) << "\n";
    //bool answer = (time >= begin && time < lunchBegin)
    //           || (time >= lunchEnd && time < end);
    bool answer = time >= begin && time < end
             && !(time >= lunchBegin && time < lunchEnd);
    
    std::cout << std::boolalpha << answer << "\n";

    int num1;
    std::cin >> num1;
    std::cout << std::boolalpha << (num1 % 2 == 0) << "\n";
    */

    //int d{ 3 };
    //std::cout << !(d % 2) << "\n";

    int x;
    int y;
    std::cout << "input coors x and y: ";
    std::cin >> x >> y;

    if (y > 0)
    {
        if (x > 0)
            std::cout << "I quard\n";
        else
            std::cout << "II quard\n";
    }
    else
    {
        if (x > 0)
            std::cout << "VI quard\n";
        else
            std::cout << "III quard\n";
    }

    if(x > 0 && y > 0)
        std::cout << "I quard\n";
    else if(x < 0 && y > 0)
        std::cout << "II quard\n";
    else if (x < 0 && y < 0)
        std::cout << "III quard\n";
    else if(x > 0 && y < 0)
        std::cout << "VI quard\n";
    else
        std::cout << "point on axis\n";



}
