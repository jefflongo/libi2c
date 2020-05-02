# libi2c

A platform-independent wrapper library for i2c. This library provides wrapper methods for generic i2c function calls. A platform-specific implementation is meant to be defined as `i2c_impl.h` and `i2c_impl.c` which must define the init, read, and write primitives.