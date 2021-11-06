#include <iostream>

auto main () -> int

int x, y, z;
std::cout << "Podaj 3 liczby calkowite" << std::endl;
std::cin >> x;
std::cin >> y;
std::cin >> z;

std::cout << "Srednia tych liczb wynosi " <<(x + y + z)/3 << std::endl;

return 0;

