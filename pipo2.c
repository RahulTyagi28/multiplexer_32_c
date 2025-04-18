#include <stdint.h>
#include <stdbool.h>

typedef struct {
    uint32_t dout;
} PIPO2;

void load_PIPO2(PIPO2 *reg, uint32_t din, bool ld, bool clr) {
    if (clr) {
        reg->dout = 0;
    } else if (ld) {
        reg->dout = din;
    }
}
