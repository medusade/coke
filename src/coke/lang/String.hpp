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

namespace coke {
namespace lang {

typedef ObjectImplements StringTImplements;
typedef Object StringTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: StringT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = StringTImplements, class TExtends = StringTExtends>

class _EXPORT_CLASS StringT: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    StringT(const StringT& copy) {
    }
    StringT() {
    }
    virtual ~StringT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef StringT<> String;
typedef String::Implements StringImplements;

typedef StringImplements NullStringTImplements;
typedef String NullStringTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: NullStringT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = NullStringTImplements, class TExtends = NullStringTExtends>

class _EXPORT_CLASS NullStringT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    NullStringT(const NullStringT& copy): Extends(copy) {
    }
    NullStringT() {
    }
    virtual ~NullStringT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef NullStringT<> NullString;
typedef NullString::Implements NullStringImplements;
typedef NullString::Extends NullStringExtends;

} // namespace lang 
} // namespace coke 

#endif // _COKE_LANG_STRING_HPP 

        

