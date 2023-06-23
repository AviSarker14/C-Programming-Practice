#include <stdio.h>
int main() {
    unsigned long int value;
    int start;
    int end;
    printf("input a number: ");
    scanf("%lu",&value);
    printf("input start and end for the value of bits: ");
    scanf("%d%d", &start, &end);
    for(int i=0;i<32;i++) {
        int mask;
        if(i < start || i > end) {
            mask=1<<i;
            value=value&(~mask);
        }
    }
    printf("Range of bits value : %lu\n", value>>start);
}
