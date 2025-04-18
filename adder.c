#include <stdint.h>

typedef struct {
    uint32_t out;
} ADD;

void add(ADD *adder, uint32_t in1, uint32_t in2) {
    adder->out = in1 + in2;
}