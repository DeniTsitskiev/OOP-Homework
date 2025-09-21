/* 
Домашнее задание №1
Выполнил студент группы М8О-203БВ-24
Цицкиев Дени

Условие:
Задана строка, состоящая из букв a, b и/или c, 
поменяйте местами буквы a и b 
(замените a на b и наоборот).
При этом все случаи появления буквы c остаьте нетронутыми.
Пример:
'acb' --> 'bca'
'aabacbaa' --> 'bbabcabb'
*/

#include <iostream>
#include <string>
#include "include/replace_a_b.h"
using namespace std;
int main()
{
    string str_before;
    string str_after;
    cout << "Enter the first string: ";
    getline(cin, str_before);
    str_after = replace_a_b(str_before);
    cout << "String before replace: " << str_before << endl;
    cout << "String after replace:  " << str_after << endl;
}
