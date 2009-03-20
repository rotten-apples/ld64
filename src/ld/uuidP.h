#ifndef _UUIDP_H
#define _UUIDP_H

#include <sys/types.h>
#include "uuid.h"

struct uuid {
  u_int32_t time_low;
  u_int16_t time_mid;
  u_int16_t time_hi_and_version;
  u_int16_t clock_seq;
  u_int8_t node[6];
};

#ifdef __cplusplus
extern "C" {
#endif

void uuid_pack(const struct uuid*, uuid_t);
void uuid_unpack(const uuid_t, struct uuid*);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _UUIDP_H */
