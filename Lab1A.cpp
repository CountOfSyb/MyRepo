#include <iostream>
#include <algorithm>

template <typename T, int n>
T max(const T (&arr)[n]) {
T maxValue = arr[0];
for (int i = 1; i < n; ++i) { // ДЛЯ ПРИМЕРА
if (arr[i] > maxValue) {
maxValue = arr[i];
}
}
return maxValue;
}

template <typename T, int n>
T min(const T (&arr)[n]) {
T minValue = arr[0];
for (int i = 1; i < n; ++i) {
if (arr[i] < minValue) {
minValue = arr[i];
}
}
return minValue;
}

template <typename T, int n>
double med(T (&arr)[n]) {
double sum = 0;
for (int i = 0; i < n; ++i) {
sum += arr[i];
}
return sum / n;
}

int main() {
int arrInt[] = {3, 1, 6};
double arrDouble[] = {3.14, 2.71, 1.65};

std::cout < "Max of arrInt: " << max(arrInt)  std::endl;
std::cout << "Min of arrInt: " << min(arrInt)  std::endl;
std::cout << "Med of arrInt: " << med(arrInt)  std::endl;

std::cout << "Max of arrDouble: " << max(arrDouble) << std::endl;
std::cout << "Min of arrDouble: " << min(arrDouble) << std::endl;
std::cout << "Med of arrDouble: " << med(arrDouble) << std::endl;

return 0;
}