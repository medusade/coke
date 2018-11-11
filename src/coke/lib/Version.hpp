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
///   File: Version.hpp
///
/// Author: $author
///   Date: 10/19/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKE_LIB_VERSION_HPP
#define _COKE_LIB_VERSION_HPP

#include "coke/lang/Object.hpp"

namespace coke {
namespace lib {

typedef ::coke::lang::ImplementBase VersionTImplements;
///////////////////////////////////////////////////////////////////////
///  Class: VersionT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = VersionTImplements>

class _EXPORT_CLASS VersionT: virtual public TImplements {
public:
    typedef TImplements Implements;
    
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual unsigned_t major() const {
        unsigned_t _major = 0;
        return _major;
    }
    virtual unsigned_t minor() const {
        unsigned_t _minor = 0;
        return _minor;
    }
    virtual unsigned_t release() const {
        unsigned_t _release = 0;
        return _release;
    }
    virtual unsigned_t build() const {
        unsigned_t _build = 0;
        return _build;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef VersionT<> Version;
typedef Version::Implements VersionImplements;

typedef VersionImplements NullVersionTImplements;
typedef ::coke::lang::Object NullVersionTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: NullVersionT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = NullVersionTImplements, class TExtends = NullVersionTExtends>

class _EXPORT_CLASS NullVersionT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    NullVersionT
    (unsigned_t major, unsigned_t minor, unsigned_t release, unsigned_t build)
    : _major(major), _minor(minor), _release(release), _build(build) {
    }
public:
    NullVersionT(): _major(0), _minor(0), _release(0), _build(0) {
    }
    NullVersionT(const NullVersionT& copy): Extends(copy) {
    }
    virtual ~NullVersionT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual unsigned_t major() const {
        return _major;
    }
    virtual unsigned_t minor() const {
        return _minor;
    }
    virtual unsigned_t release() const {
        return _release;
    }
    virtual unsigned_t build() const {
        return _build;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    unsigned_t _major, _minor, _release, _build;
}; 
typedef NullVersionT<> NullVersion;
typedef NullVersion::Implements NullVersionImplements;
typedef NullVersion::Extends NullVersionExtends;

} // namespace lib
} // namespace coke

#endif // _COKE_LIB_VERSION_HPP 
