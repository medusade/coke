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
///   File: Exception.hpp
///
/// Author: $author
///   Date: 10/24/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKE_LANG_EXCEPTION_HPP
#define _COKE_LANG_EXCEPTION_HPP

#include "coke/lang/Throwable.hpp"

namespace coke {
namespace lang {

typedef ::coke::io::Serializable ExceptionImplements;
typedef ::coke::lang::Throwable ExceptionExtends;
///////////////////////////////////////////////////////////////////////
///  Class: Exception
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS Exception: virtual public ExceptionImplements, public ExceptionExtends {
public:
    typedef ExceptionImplements Implements;
    typedef ExceptionExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    Exception(const Exception& copy): Extends(copy) {
    }
    Exception() {
    }
    virtual ~Exception() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
}; // class _EXPORT_CLASS Exception

} // namespace lang
} // namespace coke

#endif // ndef _COKE_LANG_EXCEPTION_HPP