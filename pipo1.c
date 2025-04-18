#include <stdint.h>
#include <stdbool.h>

typedef struct {
    uint32_t dout;
} PIPO1;

void load_PIPO1(PIPO1 *reg, uint32_t din, bool ld) {
    if (ld) {
        reg->dout = din;
    }
}
