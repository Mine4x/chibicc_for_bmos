#ifndef BMOS_H
#define BMOS_H

#include <stdint.h>
#include <stdbool.h>

#define BM_SYSCALL_CREATE 303

uint64_t create(const char *path, bool is_dir);

#endif