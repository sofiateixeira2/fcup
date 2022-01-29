#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <limits.h>
#include <math.h>

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
void seq_simple(double start, double incr, double end, char *format) {
    for(; ((incr > 0 && start < end + incr/10)  || (incr < 0 && start > end + incr/10)); start += incr){
        printf(format, start);
    }
}
void seq_double(double start, double incr, double end, char *format, char *str2_temp, bool s_flag, bool f_flag) {
    for(; ((incr > 0 && start <= end - incr)  || (incr < 0 && start >= end - incr)); start += incr){
        printf(format, start);
    }
    if(f_flag == true && s_flag == true)
        printf(str2_temp, start);
    else
        printf(format, start);
}

void seq(int start, int incr, int end, char *format, char *str1_temp, bool s_flag, bool w_flag) {
    for(; ((incr > 0 && start <= end - incr)  || (incr < 0 && start >= end - incr)); start += incr){
        printf(format, start);
    }
    if(s_flag == true && w_flag == true)
        printf(str1_temp, start);
    else if(s_flag == true && w_flag == false)
        printf("%d\n", start);
    else if(s_flag == false && w_flag == true)
        printf(format, start);
}

 int main(int argc, char **argv) {
    if (argc == 1) {
        printf("my_seq: missing operand\n");
        return 1;
    }
    int first = 1, stop = 1, nums[3];
    double first_1 = 1, stop_1 = 1, inc_1 = 1, nums_1[3];
    int j = 0, count = 0, inc = 1, opt;
    int max = INT_MIN, len;
    char format[255] = ""; char str1[255] = ""; char str1_temp[255] = "d"; char str2[255] = ""; char str2_temp[255] = ""; char str3[255] = "0"; char str4[255] = "%"; char str5[255] = "%";
    bool s_flag = false, w_flag = false, f_flag = false;

    opterr = 0;
    while((opt = getopt(argc, argv, "-s:wf:")) != -1){
        switch(opt){
            case 's':
                count++;
                strcat(str1, optarg); //str1 = "d,"
                s_flag = true; break;
            case 'w':
                count++;
                w_flag = true; break;
            case 'f':
                count++;
                strcat(str2, optarg);
                strcat(str2_temp, str2);
                strcat(str2_temp, "\n");
                f_flag = true; break;
        }
    }
    //-s -w | -s -f

    if(s_flag == true && f_flag == true){
        strcat(str2, str1);
        strcat(format, str2);
        for (int i = 5; i < argc; i ++) {
            nums_1[j++] = atof(argv[i]);
        }
    }else if(s_flag == true && w_flag == true){
        for (int i = 4; i < argc; i ++) {
            nums[j++] = atoi(argv[i]);
            if(argc == 7 && i == 5) continue;
                len = strlen(argv[i]);
            if(len > max)
                max = len;
        }
        str3[1] = max + '0'; //str3 = 02
        strcat(str3, str1_temp); //02d
        strcpy(str1_temp, str3);
        strcat(str5, str1_temp);
        strcat(str5, "\n");
        strcat(str3, str1); //str3 = 02d,
        strcat(str4, str3); //str4 = %02d,
        strcpy(format, str4);

        //printf("format = %s\n", format);
    }else if(s_flag == true && f_flag == false && w_flag == false){
        strcat(format, "%d");
        strcat(format, argv[2]);
        for (int i = 3; i < argc; i ++) {
            nums[j++] = atof(argv[i]);
        }
    }else if(s_flag == false && f_flag == true && w_flag == false){
        for (int i = 3; i < argc; i ++) {
            nums_1[j++] = atof(argv[i]);
        }
        strcat(format, argv[2]);
        strcat(format, "\n");
    }else if(s_flag == false && f_flag == false && w_flag == true){
        strcat(format, "%0");
        for (int i = 2; i < argc; i ++) {
            nums[j++] = atoi(argv[i]);
            if(argc == 5 && i == 3) continue;
            len = strlen(argv[i]);
            if(len > max)
                max = len;
        }
        format[2] = max + '0';
        format[3] = 'd';
        format[4] = '\n';
    }else{
        strcat(format, "%.");
        for (int i = 1; i < argc; i ++) {
            nums_1[j++] = atof(argv[i]);
            int temp = countDecimal(argv[i]);
            if(temp > max)
                max = temp;

        }
        format[2] = max + '0';
        format[3] = 'f';
        format[4] = '\n';
    }

    if (j == 0) {
        printf("Missing operand");
        return 2;
    }else if (j == 1){
        if(f_flag == true)
            stop_1 = nums_1[0];
        else if(f_flag == false && w_flag == false && s_flag == false)
            stop_1 = nums_1[0];
        else
            stop = nums[0];
    }else if (j == 2){
        if(f_flag == true){
            first_1 = nums_1[0];
            stop_1 = nums_1[1];
        }else if(f_flag == false && w_flag == false && s_flag == false){
            first_1 = nums_1[0];
            stop_1 = nums_1[1];
        }else{
            first = nums[0];
            stop = nums[1];
        }
    }else{
        if(f_flag == true){
            first_1 = nums_1[0];
            inc_1 = nums_1[1];
            stop_1 = nums_1[2];
        }else if(f_flag == false && w_flag == false && s_flag == false){
            first_1 = nums_1[0];
            inc_1 = nums_1[1];
            stop_1 = nums_1[2];
        }else{
            first = nums[0];
            inc = nums[1];
            stop = nums[2];
        }

    }

    if(f_flag == true)
        seq_double(first_1, inc_1, stop_1, (char*)format, (char*)str2_temp, s_flag, f_flag);
    else if(f_flag == false && s_flag == false && w_flag == false)
        seq_simple(first_1, inc_1, stop_1, (char*)format);
    else
        seq(first, inc, stop, (char*)format, (char*)str5, s_flag, w_flag);

    return 0;
}
