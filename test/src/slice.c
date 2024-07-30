#include <test.h>

void slice_int_array(void) {
  otter_slice_t slice;
  otter_slice_result_t result;
  int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  slice = otter_slice_init_t(int, array, 10);

  result = otter_slice_slice_t(slice, int, 0, 5, &slice);
  test_assert(result == OTTER_SLICE_OK);
  test_assert(slice.ptr == array);
  test_assert(slice.len == 5 * sizeof(int));
}

void slice_errors(void) {
  int array[3] = {0, 1, 2};
  int *ptr;

  test_assert(otter_slice_slice_t(otter_slice_init_t(int, 0, 0), int, 0, 0, 0) == OTTER_SLICE_INVALID_RANGE);

  test_assert(otter_slice_get_t(otter_slice_init_t(int, array, 3), int, 4, ptr) == OTTER_SLICE_INDEX_OUT_OF_RANGE);
  
  test_assert(otter_slice_slice_t(otter_slice_init_t(int, array, 3), int, 4, 5, 0) == OTTER_SLICE_INVALID_RANGE);
}

void slice_get_int(void) {
  int array[3] = {0, 1, 2};
  int *ptr;
  otter_slice_t slice = otter_slice_init_t(int, array, 3);

  test_assert(otter_slice_get_t(slice, int, 0, ptr) == OTTER_SLICE_OK);
  test_assert(*ptr == 0);
  test_assert(otter_slice_get_t(slice, int, 1, ptr) == OTTER_SLICE_OK);
  test_assert(*ptr == 1);
  test_assert(otter_slice_get_t(slice, int, 2, ptr) == OTTER_SLICE_OK);
  test_assert(*ptr == 2);

  test_assert(otter_slice_get_t(slice, int, 3, ptr) == OTTER_SLICE_INDEX_OUT_OF_RANGE);
}
