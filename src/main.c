#include <otter_slice.h>

otter_slice_t
otter_slice_init(void *ptr, size_t len) {
  otter_slice_t slice;
  slice.ptr = ptr;
  slice.len = len;
  return slice;
}

otter_slice_result_t
otter_slice_get(otter_slice_t slice, size_t index, void **out) {
  if (index >= slice.len) {
    return OTTER_SLICE_INDEX_OUT_OF_RANGE;
  }

  *out = ((char *)slice.ptr) + index;

  return OTTER_SLICE_OK;
}

otter_slice_result_t
otter_slice_slice(otter_slice_t slice, size_t start, size_t end, otter_slice_t *out) {
  otter_slice_t result;

  if (start >= slice.len || end > slice.len) {
    return OTTER_SLICE_INVALID_RANGE;
  }

  result.ptr = ((char *)slice.ptr) + start;
  result.len = end - start;
  *out = result;

  return OTTER_SLICE_OK;
}
