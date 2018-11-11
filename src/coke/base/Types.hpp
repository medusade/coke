///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2018 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: Types.hpp
///
/// Author: $author$
///   Date: 1/31/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKE_BASE_TYPES_HPP
#define _COKE_BASE_TYPES_HPP

#include "xos/base/string.hpp"
#include "xos/base/array.hpp"
#include "xos/base/base.hpp"

namespace coke {

typedef int8_t byte_t;
typedef int16_t short_t;
typedef int64_t long_t;
typedef int32_t int_t;
typedef uint8_t ubyte_t;
typedef uint16_t ushort_t;
typedef uint64_t ulong_t;
typedef uint32_t uint_t;
typedef int_t signed_t;
typedef uint_t unsigned_t;
typedef float float_t;
typedef double double_t;
typedef bool boolean_t;
typedef wchar_t char_t;

enum { array_default_size = 128 };
typedef xos::base::array_implements array_implements;
typedef xos::base::array_extends array_extends;
///////////////////////////////////////////////////////////////////////
///  Class: array
///////////////////////////////////////////////////////////////////////
#if defined(USE_CPP_11)
template
<typename TWhat = char_t, 
 typename TSize = size_t, TSize VSize = array_default_size,
 class TExtends = array_extends, class TImplements = array_implements>

using array = xos::base::arrayt
<TWhat, TSize, VSize, TExtends, TImplements>;
#else // defined(USE_CPP_11)
template
<typename TWhat = char, 
 typename TSize = size_t, TSize VSize = array_default_size,
 class TExtend = array_extends, class TImplements = array_implements,
 class TExtends = xos::base::arrayt<TWhat, TSize, VSize, TExtend, TImplements> >

class _EXPORT_CLASS array: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    typedef TWhat what_t;
    typedef TSize size_t;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    array(const char *chars) {
        if ((chars)) {
            for (char c = *chars; c; c = *++chars) {
                what_t what = ((what_t)c);
                this->append(&what, 1);
            }
        }
    }
    array(const wchar_t *chars) {
        if ((chars)) {
            for (wchar_t c = *chars; c; c = *++chars) {
                what_t what = ((what_t)c);
                this->append(&what, 1);
            }
        }
    }
    array(ssize_t length): Extends(length) {
    }
    array(const array& copy): Extends(copy) {
    }
    array() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
#endif // defined(USE_CPP_11)

typedef array<char_t> char_array;
typedef array<byte_t> byte_array;
typedef array<short_t> short_array;
typedef array<long_t> long_array;
typedef array<int_t> int_array;
typedef array<float_t> float_array;
typedef array<double_t> double_array;

typedef xos::base::string_implements stringt_implements;
typedef xos::base::string stringt_extends;
///////////////////////////////////////////////////////////////////////
///  Class: string
///////////////////////////////////////////////////////////////////////
#if defined(USE_CPP_11)
template
<typename TChar = char, 
 typename TEnd = TChar, TEnd VEnd = 0,
 class TExtends = std::basic_string<TChar>, 
 class TImplements = string_implements>

using string = typename xos::base::stringt
<TChar, TEnd, VEnd, TExtends, TImplements>;
#else // defined(USE_CPP_11)
template
<typename TChar = char, 
 typename TEnd = TChar, TEnd VEnd = 0,
 class TExtend = std::basic_string<TChar>, class TImplements = stringt_implements,
 class TExtends = xos::base::stringt<TChar, TEnd, VEnd, TExtend, TImplements> >

class _EXPORT_CLASS string: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    
    typedef TChar char_t;
    typedef TEnd end_char_t;
    enum { end_char = VEnd };
    
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    string(const char_t* chars, size_t length): Extends(chars, length) {
    }
    string(const char_t* chars): Extends(chars) {
    }
    string(const string& copy): Extends(copy) {
    }
    string() {
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
#endif // defined(USE_CPP_11)

typedef string<char_t> string_t;

} // namespace coke 

#endif // _COKE_BASE_TYPES_HPP 
