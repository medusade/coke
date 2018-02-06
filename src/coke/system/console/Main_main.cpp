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
///   File: Main_main.cpp
///
/// Author: $author$
///   Date: 2/6/2018
///////////////////////////////////////////////////////////////////////
#include "coke/system/console/Main_main.hpp"
#include "xos/base/main_main.cpp"
#ifndef _XOS_NADIR_BASE_MAIN_MAIN_CPP
#include "xos/base/main_main.hpp"
#include "xos/base/main.cpp"
#endif // _XOS_NADIR_BASE_MAIN_MAIN_CPP 

namespace coke {
namespace system {
namespace console {

} // namespace console 
} // namespace system 
} // namespace coke 

#ifndef _XOS_NADIR_BASE_MAIN_MAIN_CPP
///////////////////////////////////////////////////////////////////////
/// Function: main
///////////////////////////////////////////////////////////////////////
int main(int argc, char** argv, char** env) {
    int err = 0;
    XOS_ERR_LOG_DEBUG("xos::base::main::the_main(argc, argv, env)...");
    err = xos::base::main::the_main(argc, argv, env);
    XOS_ERR_LOG_DEBUG("..." << err << " = xos::base::main::the_main(argc, argv, env)");
    return err;
}
#endif // _XOS_NADIR_BASE_MAIN_MAIN_CPP 
