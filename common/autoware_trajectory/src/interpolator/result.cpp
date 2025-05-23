// Copyright 2025 TIER IV, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "autoware/trajectory/interpolator/result.hpp"

#include <iostream>
#include <sstream>

namespace autoware::experimental::trajectory::interpolator
{

InterpolationFailure operator+(
  const InterpolationFailure & primary, const InterpolationFailure & nested)
{
  std::stringstream ss;
  ss << primary.what << "." << std::endl << "\tReason: " << nested.what << std::endl;
  return InterpolationFailure{ss.str()};
}

}  // namespace autoware::experimental::trajectory::interpolator
