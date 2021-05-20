/* Copyright (C) Chenyue Zhou (zcy.chenyue.zhou@gmail.com) */
#ifndef SIPHASH_H
#define SIPHASH_H

uint64_t siphash(const uint8_t *in, const size_t inlen, const uint8_t *k);
uint64_t siphash_nocase(const uint8_t *int, const size_t inlen,
                        const uint8_t *k);

#endif /* SIPHASH_H */
