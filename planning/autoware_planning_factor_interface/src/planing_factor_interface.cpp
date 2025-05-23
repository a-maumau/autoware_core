// Copyright 2024 TIER IV, Inc.
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

#include <autoware/planning_factor_interface/planning_factor_interface.hpp>

#include <string>
#include <vector>

namespace autoware::planning_factor_interface
{
template void
PlanningFactorInterface::add<autoware_internal_planning_msgs::msg::PathPointWithLaneId>(
  const std::vector<autoware_internal_planning_msgs::msg::PathPointWithLaneId> &, const Pose &,
  const Pose &, const uint16_t behavior, const SafetyFactorArray &, const bool, const double,
  const double, const std::string &);
template void PlanningFactorInterface::add<autoware_planning_msgs::msg::PathPoint>(
  const std::vector<autoware_planning_msgs::msg::PathPoint> &, const Pose &, const Pose &,
  const uint16_t behavior, const SafetyFactorArray &, const bool, const double, const double,
  const std::string &);
template void PlanningFactorInterface::add<autoware_planning_msgs::msg::TrajectoryPoint>(
  const std::vector<autoware_planning_msgs::msg::TrajectoryPoint> &, const Pose &, const Pose &,
  const uint16_t behavior, const SafetyFactorArray &, const bool, const double, const double,
  const std::string &);

template void
PlanningFactorInterface::add<autoware_internal_planning_msgs::msg::PathPointWithLaneId>(
  const std::vector<autoware_internal_planning_msgs::msg::PathPointWithLaneId> &, const Pose &,
  const Pose &, const Pose &, const uint16_t behavior, const SafetyFactorArray &, const bool,
  const double, const double, const double, const double, const std::string &);
template void PlanningFactorInterface::add<autoware_planning_msgs::msg::PathPoint>(
  const std::vector<autoware_planning_msgs::msg::PathPoint> &, const Pose &, const Pose &,
  const Pose &, const uint16_t behavior, const SafetyFactorArray &, const bool, const double,
  const double, const double, const double, const std::string &);
template void PlanningFactorInterface::add<autoware_planning_msgs::msg::TrajectoryPoint>(
  const std::vector<autoware_planning_msgs::msg::TrajectoryPoint> &, const Pose &, const Pose &,
  const Pose &, const uint16_t behavior, const SafetyFactorArray &, const bool, const double,
  const double, const double, const double, const std::string &);
}  // namespace autoware::planning_factor_interface
