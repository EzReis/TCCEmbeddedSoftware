
#include <stdint.h>
#include "dio_cfg.h"
#include "pic18f4520.h"


volatile unsigned char * ptrPort[DIO_MAXPORTS]{
    &PORTA,
    &PORTB,
    &PORTC,
    &PORTD,
    &PORTE
}

uint8_t * ptrLat[DIO_MAXPORTS]{
    &LATA,
    &LATB,
    &LATC,
    &LATD,
    &LATE
}

