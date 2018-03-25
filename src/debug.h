#pragma once

#include <stdio.h>

#ifdef DEBUG
#define print printf
#define error printf("[ERROR]:");printf
#endif