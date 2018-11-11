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
///   File: IndexOutOfBoundsException.hpp
///
/// Author: $author
///   Date: 10/24/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKE_LANG_INDEXOUTOFBOUNDSEXCEPTION_HPP
#define _COKE_LANG_INDEXOUTOFBOUNDSEXCEPTION_HPP

#include "coke/lang/RuntimeException.hpp"

namespace coke {
namespace lang {

typedef ::coke::io::Serializable IndexOutOfBoundsExceptionImplements;
typedef ::coke::lang::RuntimeException IndexOutOfBoundsExceptionExtends;
///////////////////////////////////////////////////////////////////////
///  Class: IndexOutOfBoundsException
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS IndexOutOfBoundsException: virtual public IndexOutOfBoundsExceptionImplements, public IndexOutOfBoundsExceptionExtends {
public:
    typedef IndexOutOfBoundsExceptionImplements Implements;
    typedef IndexOutOfBoundsExceptionExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    IndexOutOfBoundsException(const IndexOutOfBoundsException& copy): Extends(copy) {
    }
    IndexOutOfBoundsException() {
    }
    virtual ~IndexOutOfBoundsException() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
}; // class _EXPORT_CLASS IndexOutOfBoundsException

} // namespace lang
} // namespace coke

#endif // ndef _COKE_LANG_INDEXOUTOFBOUNDSEXCEPTION_HPP