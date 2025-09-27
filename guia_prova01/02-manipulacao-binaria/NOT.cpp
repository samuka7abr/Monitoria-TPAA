

uint8_t x = 170; // 0b1010'1010 
uint8_t y = ~x; // 0b0101'0101 (85)

/* ! a inversão não é troca de lugar. o que é zero vira um
    e vice e versa 
    */
    /* O operador ~ inverte os bits:
       1010 1010 (170)
       ↓↓↓↓ ↓↓↓↓
       0101 0101 (85)

       Como uint8_t é um número SEM SINAL, o valor final é 85.
    */
