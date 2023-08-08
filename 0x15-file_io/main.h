#ifndef MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif

ssize_t read_textfile(const char *filename, size_t letters);


#endif
