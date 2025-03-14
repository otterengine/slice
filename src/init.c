#include "otter/slice/init.h"

#include "otter/slice.h"

struct otter_slice otter_slice_init(unsigned long int len, void *ptr) {
  struct otter_slice result;

  result.len = len;
  result.ptr = ptr;

  return result;
}
