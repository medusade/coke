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
///   File: Reader.hpp
///
/// Author: $author$
///   Date: 1/31/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKE_IO_READER_HPP
#define _COKE_IO_READER_HPP

#include "coke/lang/Object.hpp"

namespace coke {
namespace io {

typedef lang::ObjectImplements ReaderTImplements;
typedef lang::Object ReaderTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: ReaderT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = ReaderTImplements, class TExtends = ReaderTExtends>

class _EXPORT_CLASS ReaderT: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    ReaderT() {
    }
    virtual ~ReaderT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int_t read(char_array& buf, int_t off, int_t len) {
        return -1;
    }
    virtual int read(char_array& buf) {
        return -1;
    }
    virtual int_t read() {
        return -1;
    }
    virtual int_t skip(int_t n) {
        return -1;
    }
    virtual int_t mark(int_t n) {
        return -1;
    }
    virtual boolean_t markSupported() const {
        return false;
    }
    virtual int_t reset() {
        return -1;
    }
    virtual boolean_t ready() const {
        return false;
    }
    virtual boolean_t close() {
        return false;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef ReaderT<> Reader;
typedef Reader::Implements ReaderImplements;

} // namespace io 
} // namespace coke 

#endif // _COKE_IO_READER_HPP 
