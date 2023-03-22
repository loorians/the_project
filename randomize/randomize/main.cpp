//
//  main.cpp
//  randomize
//
//  Created by Noah H. on 22.03.2023.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    // Установка генератора случайных чисел
    std::random_device rd;
    std::mt19937 gen(rd());
    
    // Задание диапазона чисел
    int min_number = 1;
    int max_number = 100;
    
    // Генерация случайных чисел
    int number_of_elements = 10;
    std::vector<int> numbers(number_of_elements);
    for (int i = 0; i < number_of_elements; ++i) {
        numbers[i] = std::uniform_int_distribution<>(min_number, max_number)(gen);
    }
    
    // Вывод случайных чисел
    std::cout << "Случайные числа: ";
    for (int i = 0; i < number_of_elements; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    // Сортировка чисел
    std::sort(numbers.begin(), numbers.end());
    
    // Вывод отсортированных чисел
    std::cout << "Отсортированные числа: ";
    for (int i = 0; i < number_of_elements; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
