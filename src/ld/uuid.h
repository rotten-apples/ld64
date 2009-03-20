#ifndef _UUID_H
#define _UUID_H

typedef unsigned char uuid_t[16];

#ifdef __cplusplus
extern "C" {
#endif

void uuid_generate_random(uuid_t);
void uuid_generate(uuid_t);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _UUID_H */
