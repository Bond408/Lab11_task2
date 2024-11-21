#include <stdio.h>
#include <locale.h>
#include <math.h>

float calculate_element(float x) {
    return pow(2, x) - 2 * pow(x, 2) - 1;
}
int main(void) {
    setlocale(LC_ALL, "RUS");
    float array[100];
    int positive_count = 0, negative_count = 0;
    float positive_sum = 0, negative_sum = 0;
    float step;
    int index = 0;
    printf("Введите шаг: ");
    scanf_s("%f", &step);
    for (float x = 2; x <= 4 && index < 100; x += step) {
        array[index] = calculate_element(x);

        if (array[index] > 0) {
            positive_sum += array[index];
            positive_count++;
        }
        else {
            negative_sum += array[index];
            negative_count++;
        }
        index++;
    }
    printf("Имя массива: array\n");
    printf("Накопленное значение положительных элементов: %.2f\n", positive_sum);
    printf("Накопленное значение отрицательных элементов: %.2f\n", negative_sum);
    printf("Число положительных элементов: %d\n", positive_count);
    printf("Число отрицательных элементов: %d\n", negative_count);
    printf("Среднее значение положительных элементов: %.2f\n", positive_sum / positive_count);
}