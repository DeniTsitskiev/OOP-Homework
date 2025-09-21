#include "../include/replace_a_b.h"

using namespace std;

string replace_a_b(string str_before){
    string str_after;
    int len_str;
    int i = 0;
    len_str = str_before.length();
    while (i < len_str){
        if (str_before[i] == 'a') str_after = str_after + "b";
        else if (str_before[i] == 'b') str_after = str_after + "a";
        else str_after = str_after + str_before[i];
        i++;
    }
    return str_after;
}