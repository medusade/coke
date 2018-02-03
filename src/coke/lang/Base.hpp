///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2018 $organization
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
///   File: Base.hpp
///
/// Author: $author
///   Date: 2/2/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKE_LANG_BASE_HPP
#define _COKE_LANG_BASE_HPP

#include "coke/Types.hpp"

namespace coke {
namespace lang {

typedef ::xos::base::implement_base ImplementBaseTImplements;
///////////////////////////////////////////////////////////////////////
///  Class: ImplementBaseT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = ImplementBaseTImplements>

class _EXPORT_CLASS ImplementBaseT: virtual public TImplements {
public:
    typedef TImplements Implements;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return false;
    }
    virtual operator boolean_t() const {
        return !isNull();
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef ImplementBaseT<> ImplementBase;
typedef ImplementBase::Implements ImplementBaseImplements;

typedef ImplementBase BaseTImplements;
typedef ::xos::base::base BaseTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: BaseT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = BaseTImplements, class TExtends = BaseTExtends>

class _EXPORT_CLASS BaseT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    BaseT(const BaseT& copy) {
    }
    BaseT() {
    }
    virtual ~BaseT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef BaseT<> Base;
typedef Base::Implements BaseImplements;
typedef Base::Extends BaseExtends;

} // namespace lang
} // namespace coke

#endif // _COKE_LANG_BASE_HPP 
