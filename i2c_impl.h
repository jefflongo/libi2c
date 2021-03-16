#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

bool _i2c_master_init_impl(void);
bool _i2c_master_write_impl(const uint8_t device, const uint8_t reg, const void* buf, size_t len);
bool _i2c_master_read_impl(const uint8_t device, const uint8_t reg, void* buf, size_t len);
