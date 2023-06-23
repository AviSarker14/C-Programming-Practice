#include <stdio.h>
#include <stdlib.h>

void toBinary(unsigned int num, int binary[])
{
    int i;
    for(i=31;i>=0;i--) {
        binary[i] = num %2;
        num = num /2;
    }
}

void print(unsigned int num) {
    int binary[32];
    int i = 0;
    toBinary(num,binary);
    for(i=0; i<32; i++) {
        if(i%4 == 0) {
            printf(" ");
        }
        printf("%d",binary[i]);
    }
    printf("\n");

}
unsigned int reverseBits(unsigned int num)
{
    unsigned int result = 0;
    int i = 0;
    for( i=0; i<32; i++) {
        result <<=1;
        if ((num & 1) == 1)
            result++;
        num>>=1;
    }
    return result;
}

int main(int argc,char *argv[]) {
    unsigned num;
    unsigned reverse;
    num = atoi(argv[1]);
    printf("\n%u: ",num);
    print(num);
    printf("\n");
    reverse = reverseBits(num);
    printf("%u: ", reverse);
    print(reverse);
    printf("\n");

    printf("\n");

    return 0;
}
