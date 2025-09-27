/*
      Nesse caso, a comparação de bits resulta 1 apenas quando os dois bits comparados forem 1.

      0b1100'1100 (204)
      0b1010'1010 (170)
      ___________
      0b1000'1000 (136)
    */

    uint8_t a = 204;
    uint8_t b = 170;
    uint8_t c = a & b; // vai retornar 136
