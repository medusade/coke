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
///   File: Array.hpp
///
/// Author: $author$
///   Date: 2/1/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKE_UTIL_ARRAY_HPP
#define _COKE_UTIL_ARRAY_HPP

#include "coke/lang/Object.hpp"

namespace coke {
namespace util {

typedef lang::ObjectImplements ArrayTImplements;
typedef lang::Object ArrayTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: Array
///////////////////////////////////////////////////////////////////////
template
<typename TElement,
 class TImplements = ArrayTImplements, class TExtends = ArrayTExtends>

class _EXPORT_CLASS Array: virtual public TImplements, public TExtends {
protected:
    typedef array<TElement> Elements;
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    Array(int_t size): m_element(size) {
    }
    Array(const Array& copy): m_element(copy.m_element) {
    }
    Array() {
    }
    virtual ~Array() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int_t length() const {
        return m_element.length();
    }
    virtual TElement& operator[](int_t index) const {
        return (TElement&)(m_element[(0 > index)?(0):(index)]);
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    Elements m_element;
};

} // namespace util 
} // namespace coke 

#endif // _COKE_UTIL_ARRAY_HPP 
