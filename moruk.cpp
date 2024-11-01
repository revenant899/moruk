//#include <iostream>
//#include <algorithm>
//#include <numeric>
//
//using namespace std;
//
//int findMax(int* arr, int size) {
//    return *max_element(arr, arr + size);
//}
//
//int findMin(int* arr, int size) {
//    return *min_element(arr, arr + size);
//}
//
//double findAvg(int* arr, int size) {
//    return accumulate(arr, arr + size, 0) / static_cast<double>(size);
//}
//
//double Action(int* arrA, int sizeA, int* arrB, int sizeB, double (*func)(int*, int)) {
//    double resultA = func(arrA, sizeA);
//    double resultB = func(arrB, sizeB);
//    return (resultA + resultB) / 2;
//}
//
//int main() {
//    int arrA[] = { 1, 3, 5, 7, 9 };//можна поставити любі числа
//    int arrB[] = { 2, 4, 6, 8, 10 };//можна поставити любі числа
//    int sizeA = sizeof(arrA) / sizeof(arrA[0]);
//    int sizeB = sizeof(arrB) / sizeof(arrB[0]);
//
//    int choice;
//    cout << "Select operation:\n1. Max\n2. Min\n3. Avg\nChoice: ";
//    cin >> choice;
//
//    double result;
//    switch (choice) {
//    case 1:
//        result = Action(arrA, sizeA, arrB, sizeB, [](int* arr, int size) { return static_cast<double>(findMax(arr, size)); });
//        break;
//    case 2:
//        result = Action(arrA, sizeA, arrB, sizeB, [](int* arr, int size) { return static_cast<double>(findMin(arr, size)); });
//        break;
//    case 3:
//        result = Action(arrA, sizeA, arrB, sizeB, findAvg);
//        break;
//    default:
//        cout << "Invalid choice." << endl;
//        return 1;
//    }
//
//    cout << "Result: " << result << endl;
//    return 0;
//}

