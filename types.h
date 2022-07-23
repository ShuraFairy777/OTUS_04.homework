#pragma once
#include <vector>
#include "shape.h"

using Document = std::vector<std::unique_ptr<IShape>>;
