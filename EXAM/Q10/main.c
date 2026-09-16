#include <stdio.h>
#include <stdint.h>

int main(void){
    uint8_t rx_buffer[] = {0xAA, 0x10, 0x20, 0x30, 0x40, 0x55};
    for (int i = 0; i < 6; i++) {
        if (rx_buffer[i] != 0x55) {
            printf("%u\n", rx_buffer[i]);
        }
    }
}