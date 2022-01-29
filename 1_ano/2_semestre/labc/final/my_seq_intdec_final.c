#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int MAX_LENGTH = 255;

void seq(double start, double incr, double end, char *format) {
    for(; ((incr > 0 && start < end + incr/10)  || (incr < 0 && start > end + incr/10)); start += incr){
        printf(format, start);
    }
}

int countDecimal(char *argv){
    int count = 0;
    bool flag = false;
    for(int i = 0; i < strlen(argv); i++){
        if(argv[i] == '.')
            flag = true;
        else if(flag)
            count++;

    }
    return count;
}

int main(int argc, char **argv) {
    if (argc == 1) {
        printf("my_seq: missing operand\n");
        return 1;
    }
    double first = 1.0, inc = 1.0, stop = 1.0, nums[3];
    char format[255] = "%.";
    int j = 0, max = 0;
    for (int i = 1; i < argc; i ++) {
        nums[j++] = atof(argv[i]);
        int temp = countDecimal(argv[i]);
        if(temp > max)
            max = temp;

    }
    format[2] = max + '0';
    format[3] = 'f';
    format[4] = '\n';

    if (j == 0) {
        printf("Missing operand");
        return 2;
    } else if (j == 1) {
        stop = nums[0];
    } else if (j == 2) {
        first = nums[0];
        stop = nums[1];
    } else {
        first = nums[0];
        inc = nums[1];
        stop = nums[2];
    }
    seq(first, inc, stop, (char*)format);

    return 0;
}
