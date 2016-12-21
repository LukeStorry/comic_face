#pragma once
#include <pebble.h>

static void init();
static void deinit();
static void main_window_load(Window *window);
static void main_window_unload(Window *window);
static void update_time();