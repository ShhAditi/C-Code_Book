#include <stdio.h>

int getBit(int num, int pos) {
    int bitmask=1<<pos;
    int res=num&bitmask;
    int bit=pos>>res;
    return bit;
}

int setBit(int num, int pos) {
    int bitmask=1<<pos;
    int res=num|bitmask;
    return res;
}

int resetBit(int num, int pos) {
    int bitmask=1<<pos;
    int nmask=~bitmask;
    int res=num&nmask;
    return res;
}

int main() {
    int num = 42;

    int bit3 = getBit(num, 3);
    printf("Get bit at position 3 is: %d\n", bit3);

    int numSet = setBit(num, 5);
    printf("Set bit at position 5: %d \n", numSet, numSet);

    int numReset = resetBit(num, 1);
    printf("Reset bit at position 1: %d\n", numReset, numReset);

    return 0;
}
