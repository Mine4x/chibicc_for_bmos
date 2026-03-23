#ifndef BMOS_H
#define BMOS_H

#include <stdint.h>
#include <stdbool.h>

#define BM_SYSCALL_CREATE 303
#define BM_SYSCALL_WAIT   302
#define BM_SYSCALL_EXECVE 59

uint64_t create(const char *path, bool is_dir);
int bm_waitpid(uint64_t pid);
uint64_t bm_execve(const char *path, const char **argv, const char **envp);
uint64_t bm_execv(const char *path, const char **argv);

#endif