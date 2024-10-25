#include <QCoreApplication>
#include <QVector>
#include <cstdlib> // Para rand y srand
#include <ctime>   // Para time
#include <algorithm>
#include <iostream>

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    QVector<int> numbers;
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    for (int i = 0; i < 100; ++i) {
        numbers.append(std::rand() % 51);
    }
    int count = std::count_if(numbers.begin(), numbers.end(), [](int n) {
        return n < 20 && n % 2 != 0;
    std::cout << "Cantidad de números impares y menores de 20: " << count << std::endl;
    return a.exec();
}
