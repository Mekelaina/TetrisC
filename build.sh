#!/usr/bin/bash

gcc -Wall -Wextra -I/lib/raylib -o tetrisc src/*.c src/*.h -L/lib/raylib -lraylib -lm
