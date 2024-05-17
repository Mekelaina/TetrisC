#!/usr/bin/bash

gcc -Wall -Wextra -I/lib/raylib -o tetrisc src/*.c -L/lib/raylib -lraylib -lm