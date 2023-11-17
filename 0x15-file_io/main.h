#ifndef MAIN_H
#define MAIN_H

int fd, fd2, m, n, nbyte, num;
#define BUF_SIZE 1024
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _readelf(int args, char *argv[]);
int main(int argc, char *argv[]);

#endif /* MAIN */
