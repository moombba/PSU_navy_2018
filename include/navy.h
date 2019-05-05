/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** navy
*/

#ifndef NAVY_H_
#define NAVY_H_
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <ucontext.h>
#include "in_game.h"
#include <struct.h>

int my_strlen(char *);
int player_1(char **);
void receve_from_pid(void);
void send_to_pid(pid_t pid, char *mes);
int my_printf(const char *str, ...);
int player_2(char **, char *);
int my_getnbr(char const *str);
char **create_map(char **);
char *my_strdup(char *src);
char **add_boat(char **, char *);
char *get_next_line(int);
void disp_maps(char **dispable, char **pos);
char **get_pos(char **, int);
void display_help(void);
char **fill_pos_empty(char **pos);
char **add_boat(char **map, char *pos);
char **dispable(void);

#endif
