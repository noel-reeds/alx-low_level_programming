#include "main.h"
#include <stdio.h>
/**
  * _atoi - converts string to integer.
  *
  *@s: string to be converted to integer.
  *
  *Return: The converted integer value.
  */
int _atoi(char *s) {
    int m, _dec, _n, nptr;

    _n = m = 0;
    _dec = 0;
    while (*(s + m) != '\0') {
        if (*(s + m) >= '0' && *(s + m) <= '9') {
            _dec *= 10;
            _dec += *(s + m) - 48;
			nptr = m + 1;
            if (!(*(s + nptr) >= 48 && *(s + nptr) <= 57)) {
                break;
            }
        }
        if (*(s + m) == 45) {
            _n += 1;
        }
        m++;
    }
    if (_n % 2 != 0) {
        _dec = -_dec;
    }
    return (_dec);
}
