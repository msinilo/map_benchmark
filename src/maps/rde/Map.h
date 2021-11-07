#pragma once

#include "Hash.h"
#include "rde/hash_map.h"

static const char* MapName = "rde::hash_map";

template <class Key, class Val>
using Map = rde::hash_map<Key, Val, Hash<Key>>;
