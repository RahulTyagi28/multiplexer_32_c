#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void multiplier(uint32_t A, uint32_t B) {
    uint32_t X = A;         // Loaded into PIPO1 (Register A)
    uint32_t P = 0;         // Accumulator (PIPO2)
    uint32_t counter = B;   // Loaded into Counter B

    while (counter != 0) {
        P = P + X;          // ADD operation
        counter--;          // Decrement B (decB)
    }

    printf("Product: %u\n", P);
}

int main() {
    uint32_t A = 25;
    uint32_t B = 12;
    multiplier(A, B);
    return 0;
}
