#include <stdint.h>
#include <stdbool.h>

typedef struct {
    bool eqz;
} EQZ;

void check_eqz(EQZ *eqz_module, uint32_t data) {
    if (data == 0) {
        eqz_module->eqz = true;  // eqz is 1 if data is 0
    } else {
        eqz_module->eqz = false; // eqz is 0 otherwise
    }
}
