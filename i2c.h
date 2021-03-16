#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// initialize i2c interface
// TODO: configuration
bool i2c_master_init(void);

// write `len` bytes from `buf` to i2c device with slave address `device` starting at `reg`
bool i2c_master_write(const uint8_t device, const uint8_t reg, const void* buf, size_t len);

// read `len` bytes to `buf` from i2c device with slave address `device` starting at `reg`
bool i2c_master_read(const uint8_t device, const uint8_t reg, void* buf, size_t len);

// helper functions to write literals
bool i2c_master_write_u8(const uint8_t device, const uint8_t reg, const uint8_t data);
bool i2c_master_write_u16(const uint8_t device, const uint8_t reg, const uint16_t data);
bool i2c_master_write_u32(const uint8_t device, const uint8_t reg, const uint32_t data);

// helper functions to read literals
bool i2c_master_read_u8(const uint8_t device, const uint8_t reg, uint8_t* data);
bool i2c_master_read_u16(const uint8_t device, const uint8_t reg, uint16_t* data);
bool i2c_master_read_u32(const uint8_t device, const uint8_t reg, uint32_t* data);
