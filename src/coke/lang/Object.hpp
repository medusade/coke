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
///   File: Object.hpp
///
/// Author: $author$
///   Date: 1/31/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKE_LANG_OBJECT_HPP
#define _COKE_LANG_OBJECT_HPP

#include "coke/lang/Base.hpp"

namespace coke {
namespace lang {

typedef ::coke::lang::ImplementBase ObjectImplementTImplements;
///////////////////////////////////////////////////////////////////////
///  Class: ObjectImplementT
///////////////////////////////////////////////////////////////////////
template <class TImplements = ObjectImplementTImplements>
class _EXPORT_CLASS ObjectImplementT: virtual public TImplements {
public:
    typedef TImplements Implements;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
}; // class _EXPORT_CLASS ObjectImplementT
typedef ObjectImplementT<> ObjectImplement;

typedef ObjectImplement ObjectTImplements;
typedef Base ObjectTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: ObjectT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = ObjectTImplements, class TExtends = ObjectTExtends>

class _EXPORT_CLASS ObjectT: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    ObjectT() {
    }
    virtual ~ObjectT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
}; // class _EXPORT_CLASS ObjectT
typedef ObjectT<> Object;
typedef Object::Implements ObjectImplements;

} // namespace lang 
} // namespace coke 

#endif // _COKE_LANG_OBJECT_HPP 
