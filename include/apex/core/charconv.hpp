#ifndef APEX_CORE_CHARCONV_HPP
#define APEX_CORE_CHARCONV_HPP

#include <string_view>
#include <string>
#include <charconv>

#include <apex/core/concepts.hpp>
#include <apex/core/prelude.hpp>

namespace apex {

using std::from_chars;

::std::from_chars_result from_chars (char const* str, size_t len, integral auto& value, int base = 10) noexcept {
  return ::std::from_chars(str, str + len, value, base);
}

::std::from_chars_result from_chars (std::string const& str, integral auto& value, int base = 10) noexcept {
  return ::std::from_chars(str.data(), str.size(), value, base);
}

::std::from_chars_result from_chars (std::string_view str, integral auto& value, int base = 10) noexcept {
  return ::std::from_chars(str.data(), str.size(), value, base);
}

} /* namespace apex */

#endif /* APEX_CORE_CHARCONV_HPP */
