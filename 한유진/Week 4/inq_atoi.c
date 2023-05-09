#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX - 1)

int is_digit (char c) { 
return c >= '0' && c <= '9';
}

int inq_atoi(char *str){ 
    int sign = 1;
    int num = 0; 

    // 공백 제거
    while (*str == ' ') { 
        str++;
    }

    if (*str == '-') {
        sign = -1;
        str++;
    }
    else if (*str == '+') {
        str++;
    }

    // 숫자 처리
    while (is_digit (*str)) {
        num = num * 10 + (*str - '0');
        str++;
    }

    return num * sign;
}
