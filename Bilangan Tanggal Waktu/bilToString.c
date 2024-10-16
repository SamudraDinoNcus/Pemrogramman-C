#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
char *inttostr (long long n){
    int digits = 20 + 1;
    char *result = malloc(digits);
    snprintf (result, digits, "%lld", n);
    return result;
}