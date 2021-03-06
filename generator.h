#pragma once

#include <limits.h>
#include "trie.h"
#include <stdio.h>
#include "config.h"

void generateRainbowTable(Configuration *config, size_t listCount);

void exportToTrie(Trie *trie);

void exportToFile(FILE *output, char separator, char lineEnd);

void destroyRawData();