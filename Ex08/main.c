#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void print_lottofile(int num_set ,int counter,char lotto_file[])
{
    time_t curtime;
    time(&curtime);
    srand(time(0));
    
}

int is_duplicate(int numbers[], int count, int num) {
    for (int i = 0; i < count; i++) {
        if (numbers[i] == num) {
            return 1; 
        }
    }
    return 0; 
}


int main() {
    FILE *fp;

    fp = fopen("lotto.txt", "w");
    fprintf(fp, "========= lotto649 =========\n");
    for (int i = 1; i <= 5; i++) {
        if (i <= n) {
            int lotto_numbers[7];
            int count = 0;
            int rand_num;

            while (count < 7) {
                rand_num = (rand() % 69) + 1;
                if (!is_duplicate(lotto_numbers, count, rand_num)) {
                    lotto_numbers[count] = rand_num;
                    count++;
                }
            }

            fprintf(fp, "[%d]: ", i);
            for (int j = 0; j < 7; j++) {
                fprintf(fp, "%02d", lotto_numbers[j]);
                if (j < 6) {
                    fprintf(fp, " "); 
                }
            }
            fprintf(fp, "\n");
        } else {
            fprintf(fp, "[%d]: __ __ __ __ __ __ __\n", i);
        }
    }
    fprintf(fp, "========= csie@CGU =========\n");
    fclose(fp);
    
    scanf("請輸入中獎號碼三個 : ");
    scanf("輸入中獎號碼為 : ",n);
    scanf("以下為中獎彩卷 : ");
    scanf("售出時間  : ",&curtime);
    scanf("售出時間  : ",&curtime);
    return 0;
}
