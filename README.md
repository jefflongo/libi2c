# libi2c

A platform-independent wrapper library for i2c. This library provides wrapper methods for generic i2c function calls. A platform-specific implementation is expected to be defined in `i2c_impl.c` which must contain the init, read, and write primitives.
