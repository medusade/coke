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
///   File: Writer.hpp
///
/// Author: $author$
///   Date: 1/31/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKE_IO_WRITER_HPP
#define _COKE_IO_WRITER_HPP

#include "coke/lang/String.hpp"

namespace coke {
namespace io {

typedef lang::ObjectImplements WriterTImplements;
typedef lang::Object WriterTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: WriterT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = WriterTImplements, class TExtends = WriterTExtends>

class _EXPORT_CLASS WriterT: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    WriterT() {
    }
    virtual ~WriterT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int_t write(const lang::String& str, int_t off, int_t len) {
        return -1;
    }
    virtual int_t write(const lang::String& str) {
        return -1;
    }
    virtual int_t write(const char_array& cbuf, int_t off, int_t len) {
        return -1;
    }
    virtual int_t write(const char_array& cbuf) {
        return -1;
    }
    virtual int_t write(const char_t& c) {
        return -1;
    }
    virtual int_t flush() {
        return -1;
    }
    virtual boolean_t close() {
        return false;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef WriterT<> Writer;
typedef Writer::Implements WriterImplements;

} // namespace io 
} // namespace coke 

#endif // _COKE_IO_WRITER_HPP 
