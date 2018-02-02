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
///   File: Locale.hpp
///
/// Author: $author$
///   Date: 2/1/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKE_UTIL_LOCALE_HPP
#define _COKE_UTIL_LOCALE_HPP

#include "coke/lang/Object.hpp"

namespace coke {
namespace util {

typedef lang::ObjectImplements LocaleTImplements;
typedef lang::Object LocaleTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: LocaleT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = LocaleTImplements, class TExtends = LocaleTExtends>

class _EXPORT_CLASS LocaleT: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    LocaleT() {
    }
    virtual ~LocaleT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef LocaleT<> Locale;
typedef Locale::Implements LocaleImplements;

} // namespace util 
} // namespace coke 

#endif // _COKE_UTIL_LOCALE_HPP 
