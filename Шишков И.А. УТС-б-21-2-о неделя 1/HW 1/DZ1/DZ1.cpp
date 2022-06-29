#include <iostream>
#include <cmath>

// 1 - буква
int main() {
    std::cout << "**********\n" <<
                 "    **    \n" <<
                 "    **    \n" <<
                 "    **    \n" <<
                 "    **    \n" <<
                 "    **    \n" <<
                 "    **    \n" <<
                 "**********\n" << std::endl;

    return 0;
}


// 2 - площадь эллипса
int main() {
    int a, b;

    std::cout << "Enter a, b :";
    std::cin >> a >> b;

    std::cout << "S = " << a * b * 3.14 << std::endl;

    std::cout << "P = " << 2 * 3.14 * sqrt((pow(a, 2) + pow(b, 2)) / 2) << std::endl;

    return 0;
}

// 3 - (6) - срзнач. и е разность удвоенной суммы первого и третьего чисел и утроенного второго
int main()
{
    int a, b, c;

    std::cout << "Enter a, b c:\n";
    std::cin >> a >> b >> c;

    std::cout << "1) " << (a + b + c) / 3 << std::endl;

    std::cout << "2) " << 2 * (a + c) - 3 * b << std::endl;

    return 0;
}