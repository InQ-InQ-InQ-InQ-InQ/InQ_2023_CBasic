#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX - 1)

int inq_atoi(char* str) 
{
    int result = 0;
    int plus_minus = 1;
    
    while (*str == ' ') 
        str++;

    if (*str == '-') 
    {
        plus_minus = -1;
        str++;
    }
    else if (*str == '+') 
        str++;
    

    while (*str >= '0' && *str <= '9') 
    {
        if (plus_minus == 1 && (result * 10 > INT_MAX || (result == INT_MAX && *str - '0' > INT_MAX % 10)))
        {
            return INT_MAX;
        }
        else if ( plus_minus == -1 && (result * 10 < -INT_MAX || (result == INT_MAX && *str - '0' > INT_MAX % 10)))
        {
            return INT_MIN;
        }
        result = (result * 10) + (*str - '0');
        str++;
    }
    return plus_minus * result;
}