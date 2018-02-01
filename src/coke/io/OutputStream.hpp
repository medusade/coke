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
///   File: OutputStream.hpp
///
/// Author: $author$
///   Date: 2/1/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKE_IO_OUTPUTSTREAM_HPP
#define _COKE_IO_OUTPUTSTREAM_HPP

#include "coke/lang/Object.hpp"

namespace coke {
namespace io {

typedef lang::ObjectImplements OutputStreamTImplements;
typedef lang::Object OutputStreamTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: OutputStreamT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = OutputStreamTImplements, class TExtends = OutputStreamTExtends>

class _EXPORT_CLASS OutputStreamT: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    OutputStreamT() {
    }
    virtual ~OutputStreamT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int_t write(const byte_array& buf, int_t off, int len) {
        return -1;
    }
    virtual int_t write(const byte_array& buf) {
        return -1;
    }
    virtual int_t write(const byte_t& b) {
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
typedef OutputStreamT<> OutputStream;
typedef OutputStream::Implements OutputStreamImplements;

} // namespace io 
} // namespace coke 

#endif // _COKE_IO_OUTPUTSTREAM_HPP 
