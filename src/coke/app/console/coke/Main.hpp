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
///   File: Main.hpp
///
/// Author: $author
///   Date: 10/21/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKE_APP_CONSOLE_COKE_MAIN_HPP
#define _COKE_APP_CONSOLE_COKE_MAIN_HPP

#include "coke/system/console/Main.hpp"

namespace coke {
namespace app {
namespace console {
namespace coke {

typedef ::coke::system::console::Main MainImplements;
typedef ::coke::system::console::MainBase MainExtends;
///////////////////////////////////////////////////////////////////////
///  Class: Main
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS Main: virtual public MainImplements, public MainExtends {
public:
    typedef MainImplements Implements;
    typedef MainExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    Main() {
    }
    virtual ~Main() {
    }
private:
    Main(const Main& copy) {
    }
protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int_t run(const String_array& args) {
        int_t err = 0;
        this->print(char_array("Hello"));
        for (int_t a = 0; a < args.length(); ++a) {
            this->print(char_array(" \""));
            this->print(char_array(args[a].chars()));            
            this->print(char_array("\""));
        }
        this->printLn();
        return err;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
}; // class _EXPORT_CLASS Main

} // namespace coke
} // namespace console
} // namespace app
} // namespace coke

#endif // ndef _COKE_APP_CONSOLE_COKE_MAIN_HPP