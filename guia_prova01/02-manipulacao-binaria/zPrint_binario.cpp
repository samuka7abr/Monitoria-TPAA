//as funções a seguir printam o valor em binário de um número
void printBinary(uint32_t value) {
   for (int i = 31; i >= 0; --i) {
       cout << ((value >> i) & 1u);
       if (i % 8 == 0 && i != 0) cout << ' ';  // deixa um espaço a cada byte
   }
}

void printBinary8(uint8_t value) {
   for (int i = 7; i >= 0; --i) {
       cout << ((value >> i) & 1u);
       if (i == 4) cout << '\''; // separa os dois nibbles (4 bits)
   }
}
