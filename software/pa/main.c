/*
 * AMP1 PA Firmware
 * Copyright 2012 Adam Greig
 *
 * Control the amp chip's MUTE, SHUTDOWN, GAIN0 and GAIN1 pins.
 */

#include <avr/io.h>

#define GAIN0       PA0
#define GAIN1       PA1
#define MUTE        PA2
#define SHUTDOWN    PA3

int main() {
    DDRA  = (1<<GAIN0) | (1<<GAIN1) | (1<<MUTE) | (1<<SHUTDOWN);
    PORTA = (0<<GAIN0) | (0<<GAIN1) | (0<<MUTE) | (1<<SHUTDOWN);
    for(;;);
    return 0;
}
