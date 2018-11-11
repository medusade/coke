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
///   File: Version.cpp
///
/// Author: $author
///   Date: 10/19/2018
///////////////////////////////////////////////////////////////////////
#include "coke/lib/coke/Version.hpp"

#define COKE_LIB_COKE_VERSION_MAJOR 0
#define COKE_LIB_COKE_VERSION_MINOR 0
#define COKE_LIB_COKE_VERSION_RELEASE 0
#define COKE_LIB_COKE_VERSION_BUILD 0

namespace coke {
namespace lib {
namespace coke {

namespace which {

typedef ::coke::lib::Version VersionTImplements;
typedef ::coke::lib::NullVersion VersionTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: VersionT
///////////////////////////////////////////////////////////////////////
template
<class TImplements = VersionTImplements, class TExtends = VersionTExtends>

class _EXPORT_CLASS VersionT: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    VersionT(const VersionT& copy): Extends(copy) {
    }
    VersionT()
    : Extends
      (COKE_LIB_COKE_VERSION_MAJOR, COKE_LIB_COKE_VERSION_MINOR, 
       COKE_LIB_COKE_VERSION_RELEASE, COKE_LIB_COKE_VERSION_BUILD) {
    }
    virtual ~VersionT() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef VersionT<> Version;
typedef Version::Implements VersionImplements;
typedef Version::Extends VersionExtends;

} // namespace which

///////////////////////////////////////////////////////////////////////
///  Class: Version
///////////////////////////////////////////////////////////////////////
const lib::Version& Version::which() {
    static const which::Version version;
    return version;
}

} // namespace coke
} // namespace lib
} // namespace coke
