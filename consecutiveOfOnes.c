#include <stdio.h>
#include <stdlib.h>
#include <math.h>
unsigned long int maxConsOnes(unsigned long int n) {
    int count = 0;
    while(n!=0) {
        n= (n& (n<<1));
        count++;
    }
    return count;
}
int setBit(int num, int pos) {
    if((num & (1<<pos))) {
        return 1;
    }
    return 0;
}
int main() {
    long unsigned int value;
    printf("Enter a number: ");
    scanf("%lu", &value);
    for(int i = 0; i< 32; i++) {
        
        printf("%u", setBit(value, i));
    }
    printf("\n");
    unsigned long int number=maxConsOnes(value);
    printf("Consecutive number of ones: %lu\n", number);
}
