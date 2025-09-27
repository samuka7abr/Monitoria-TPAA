 //OPERADOR SHIFT LEFT (<<) - desloca bits para a esquerda e multiplica por 2ⁿ
   uint8_t x = 5;      // 0000 0101
   uint8_t y = x << 1; // 0000 1010 = 10
   //em termos de multiplicação, seria 2¹
   //outro exemplo:
   int x = 3;
   int y = x << 4; // 3 * 2⁴ = 3 * 16 = 48


   //OPERADOR SHIFT RIGHT (<<) - desloca bits para a direita e divide por 2ⁿ
   uint8_t x = 20;     // 0001 0100
   uint8_t y = x >> 2; // 0000 0101 = 5

}
