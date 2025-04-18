#include <stdint.h>
#include <stdbool.h>

typedef struct {
    uint32_t dout;
} CNTR;

void load_CNTR(CNTR *counter, uint32_t din, bool ld, bool dec) {
    if (ld) {
        counter->dout = din;
    } else if (dec) {
        counter->dout -= 1;
    }
}
