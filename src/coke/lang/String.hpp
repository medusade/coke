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
///   File: String.hpp
///
/// Author: $author$
///   Date: 1/31/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKE_LANG_STRING_HPP
#define _COKE_LANG_STRING_HPP

#include "coke/lang/Object.hpp"
#include "coke/lang/IndexOutOfBoundsException.hpp"

namespace coke {
namespace lang {

typedef ObjectImplements StringImplements;
typedef Object StringExtends;
///////////////////////////////////////////////////////////////////////
///  Class: String
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS String: virtual public StringImplements, public StringExtends {
public:
    typedef StringImplements Implements;
    typedef StringExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    String(const char_t* value, int_t offset, int_t count) {
        if ((value) && (offset >= 0) && (count >= 0)) {
            _string.assign(value + offset, count);
        } else {            
            throw IndexOutOfBoundsException();
        }
    }
    String(const char_t* value): _string(value) {
    }
    String(const String& copy): _string(copy._string) {
    }
    String() {
    }
    virtual ~String() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual String& clear() {
        _string.clear();
        return *this;
    }
    virtual String& copy(const String& str) {
        _string.assign(str._string.chars());
        return *this;
    }
    virtual String& concat(const String& str) {
        _string.append(str._string.chars());
        return *this;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int_t compareTo(const String& to) const {
        return _string.compare(to._string.chars());
    }
    virtual int_t compareToIgnoreCase(const String& to) const {
        return _string.compare_case(to._string.chars());
    }
    virtual int_t length() const {
        return _string.length();
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual char_t charAt(int_t index) const {
        int_t length = 0;
        const char_t *chars = 0;
        if ((index >= 0) && (index < (length = _string.length())) 
            && (chars = _string.chars())) {
            return chars[index];
        } else {
            throw IndexOutOfBoundsException();
        }
        return 0;
    }
    virtual const char_t* chars() const {
        return _string.chars();
    }
    virtual const char_t* hasChars() const {
        return _string.has_chars();
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    string_t _string;
};
typedef array<String> String_array;

typedef StringImplements NullStringImplements;
typedef String NullStringExtends;
///////////////////////////////////////////////////////////////////////
///  Class: NullString
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS NullString: virtual public NullStringImplements , public NullStringExtends {
public:
    typedef NullStringImplements Implements;
    typedef NullStringExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    NullString(const NullString& copy): Extends(copy) {
    }
    NullString() {
    }
    virtual ~NullString() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};

} // namespace lang 
} // namespace coke 

#endif // _COKE_LANG_STRING_HPP 

        

