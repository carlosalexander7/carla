// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#include "test.h"
#include "OpenDrive.h"

#include <carla/road/MapBuilder.h>
#include <carla/geom/Location.h>
#include <carla/geom/Math.h>
#include <carla/road/element/RoadInfoVisitor.h>
#include <carla/opendrive/OpenDriveParser.h>

using namespace carla::road;
using namespace carla::road::element;
using namespace carla::geom;
using namespace carla::opendrive;

TEST(road, parse_files) {
  for (const auto &file : util::OpenDrive::GetAvailableFiles()) {
    auto map = OpenDriveParser::Load(util::OpenDrive::Load(file));
    ASSERT_TRUE(map.has_value());
  }
}

/*
TEST(road, add_geometry) {

}

TEST(road, add_information) {

}

TEST(road, set_and_get_connections_for) {

}

TEST(road, geom_line) {

}

TEST(road, geom_arc) {

}

TEST(road, geom_spiral) {

}

TEST(road, get_information) {

}
*/