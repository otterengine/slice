# Otter Slice Module

This is a module that provides a slice data structure.

A slice is a contiguous sequence of zero or more elements of any type.
It can be seen as a fat pointer. It points to the first byte of the
sequence and holds the number of bytes in the sequence. It has convieniance
functions for accessing the elements of the slice, both the raw bytes and casted 
to a specific type.

## Dependencies
- [bake](https://github.com/SanderMertens/bake) for using the template and building moduules.

## How to use
First, ensure you have installed all the dependencies.

Then, clone the repository:
```sh
git clone https://github.com/otterengine/slice.git
```

Then, build the module for local usage.
```sh
bake
```