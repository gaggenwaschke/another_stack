
#include <catch2/catch.hpp>

#include <bit_utilities>
#include <ethernet>


TEST_CASE("Ethernet reader") {
  auto raw_data =
      bit::get_byte_vector(0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF, 0x00, 0x11, 0x22,
                           0x33, 0x44, 0x55, 'H', 'e', 'l', 'l', 'o');
  ethernet::reader reader{raw_data};
  CHECK(reader.destination() == ethernet::address{bit::get_byte_vector(
                                    0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF)});
  CHECK(reader.source() == ethernet::address{bit::get_byte_vector(
                               0x00, 0x11, 0x22, 0x33, 0x44, 0x55)});
}