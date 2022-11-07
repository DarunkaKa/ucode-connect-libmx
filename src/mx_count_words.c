#include "../inc/libmx.h"

int mx_count_words(const char *str, char c) {
    if (str == NULL)
        return -1;

    int i = 0;
    int count_words = 0;
    bool temp = false;
    
    if (str[i++] == c) {
        temp = true;
    } 
    else {
        count_words++;
    }

    while (str[i] != '\0') {
        if (str[i] == c && str[i + 1] != c) {
            temp = true;
        }
        else if (temp) {
            temp = false;
            count_words++;
        }

        i++;
    }
    
    return count_words;
}

