#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX - 1)

int let_me_know(char c) { //문자열이 숫자인지 아닌지를 판단하는 함수
    return c >= '0' && c <= '9';
}

int inq_atoi(char* str) { // 코드의 목적 - char에서 숫자만 뽑아서 return
    int sign = 1; // 부호를 저장할 변수, 나중에 num과 곱해서 return
    int num = 0; // 변환된 숫자를 저장할 변수

    // 공백 제거
    while (*str == ' ') { //*str이 공백일 때, str++하기
        str++;
    }

    // 부호 처리, 비정상적인 문자열 입력시 0으로 반환
    if (*str == '-') {
        sign = -1;
        str++;
    }
    else if (*str == '+') {
        str++;
    }

    // 숫자 처리, num 도출
    while (let_me_know(*str)) {
        num = num * 10 + (*str - '0');
        str++;  // 이미 여기서 터져버리는것..!!
    }

    //overflow, underflow solution
    if (sign > 0 && num >= INT_MIN ) {
        return INT_MAX;
        }
    else if (sign < 0 && num <= INT_MAX ) {
        return INT_MIN;
        }
    else
        return num * sign; 
   
}
