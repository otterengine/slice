#ifndef OTTER_SLICE_H_
#define OTTER_SLICE_H_

/* This generated file contains includes for project dependencies */
#include "otter-slice/bake_config.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef int otter_slice_result_t;

#define OTTER_SLICE_OK (0)
#define OTTER_SLICE_INDEX_OUT_OF_RANGE (-1)
#define OTTER_SLICE_INVALID_RANGE (-2)

typedef struct otter_slice otter_slice_t;
struct otter_slice {
  void *ptr;
  unsigned long len;
};

OTTER_SLICE_API
otter_slice_t
otter_slice_init(void *ptr, unsigned long len);

OTTER_SLICE_API
otter_slice_result_t
otter_slice_get(otter_slice_t slice, unsigned long index, void **out);

OTTER_SLICE_API
otter_slice_result_t
otter_slice_slice(otter_slice_t slice, unsigned long start, unsigned long end, otter_slice_t *out);

#define otter_slice_len(slice) ((slice).len)
#define otter_slice_len_t(slice, T) ((slice).len / sizeof(T))

#define otter_slice_init_t(T, array, len) otter_slice_init((void *)array, len * sizeof(T))
#define otter_slice_get_t(slice, T, index, out) otter_slice_get(slice, index * sizeof(T), (void **)out)

#define otter_slice_slice_t(slice, T, start, end, out) otter_slice_slice(slice, start * sizeof(T), end * sizeof(T), out)

#define otter_slice_set_len_t(slice, T, len) ((slice).len = (len) * sizeof(T))

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* OTTER_SLICE_H_ */

