#include "otter/slice/slice.h"

#include "otter/slice.h"

struct otter_slice otter_slice_slice(struct otter_slice slice,
                                     unsigned long int start,
                                     unsigned long int end) {
  struct otter_slice result;

  result.len = end - start;
  result.ptr = (void *)(((char *)slice.ptr) + start);

  return result;
}
