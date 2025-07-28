#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void check_args(int argc);
int open_file_from(char *filename);
int open_file_to(char *filename);
void copy_file(int fd_from, int fd_to, char *file_from, char *file_to);
void close_file(int fd, int exit_code);


#endif /* MAIN_H */
