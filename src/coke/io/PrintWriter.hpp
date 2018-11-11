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
///   File: PrintWriter.hpp
///
/// Author: $author$
///   Date: 2/1/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKE_IO_PRINTWRITER_HPP
#define _COKE_IO_PRINTWRITER_HPP

#include "coke/io/Writer.hpp"

namespace coke {
namespace io {

typedef WriterImplements PrintWriterImplementTImplements;
///////////////////////////////////////////////////////////////////////
///  Class: PrintWriterImplementT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = PrintWriterImplementTImplements>

class _EXPORT_CLASS PrintWriterImplementT: virtual public TImplements {
public:
    typedef TImplements Implements;
    typedef lang::String String;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int_t printLn(const String& str, int_t off, int_t len) {
        return -1;
    }
    virtual int_t printLn(const String& str) {
        return -1;
    }
    virtual int_t printLn(const char_array& buf, int_t off, int_t len) {
        return -1;
    }
    virtual int_t printLn(const char_array& buf) {
        return -1;
    }
    virtual int_t printLn(const char_t& c) {
        return -1;
    }
    virtual int_t printLn() {
        return -1;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int_t print(const String& str, int_t off, int_t len) {
        return -1;
    }
    virtual int_t print(const String& str) {
        return -1;
    }
    virtual int_t print(const char_array& buf, int_t off, int_t len) {
        return -1;
    }
    virtual int_t print(const char_array& buf) {
        return -1;
    }
    virtual int_t print(const char_t& c) {
        return -1;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef PrintWriterImplementT<> PrintWriterImplement;

typedef PrintWriterImplement PrintWriterTImplements;
typedef Writer PrintWriterTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: PrintWriterT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = PrintWriterTImplements, class TExtends = PrintWriterTExtends>

class _EXPORT_CLASS PrintWriterT: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    PrintWriterT() {
    }
    virtual ~PrintWriterT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef PrintWriterT<> PrintWriter;
typedef PrintWriter::Implements PrintWriterImplements;

} // namespace io 
} // namespace coke 

#endif // _COKE_IO_PRINTWRITER_HPP 
