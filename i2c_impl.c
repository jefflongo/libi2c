#include "i2c_impl.h"

#include "i2c.h"

bool _i2c_master_init_impl(void) {
    // USER TODO:
    // initialize i2c interface
}

bool _i2c_master_write_impl(const uint8_t device, const uint8_t reg, const void* buf, size_t len) {
    // USER TODO:
    // write `len` bytes from `buf` to i2c device with slave address `device` starting at `reg`

    return true;
}

bool _i2c_master_read_impl(const uint8_t device, const uint8_t reg, void* buf, size_t len) {
    // USER TODO:
    // read `len` bytes to `buf` from i2c device with slave address `device` starting at `reg`

    return true;
}