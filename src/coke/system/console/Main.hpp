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
///   Date: 10/20/2018
///////////////////////////////////////////////////////////////////////
#ifndef _COKE_SYSTEM_CONSOLE_MAIN_HPP
#define _COKE_SYSTEM_CONSOLE_MAIN_HPP

#include "coke/lang/Object.hpp"
#include "coke/lang/String.hpp"
#include "coke/io/Writer.hpp"
#include "coke/io/PrintWriter.hpp"
#include "xos/base/main.hpp"

namespace coke {
namespace system {
namespace console {

typedef ::coke::io::PrintWriterImplement MainImplements;
///////////////////////////////////////////////////////////////////////
///  Class: Main
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS Main: virtual public MainImplements {
public:
    typedef MainImplements Implements;
    typedef lang::String_array String_array;
    typedef ::coke::char_t char_t;

protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int_t run(const String_array& args) {
        return 0;
    }
    virtual int_t beforeRun(const String_array& args) {
        return 0;
    }
    virtual int_t afterRun(const String_array& args) {
        return 0;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int_t main(const String_array& args) {
        int_t err = 0;
        if (!(err = beforeRun(args))) {
            int_t err2 = 0;
            err = run(args);
            if ((err2 = afterRun(args))) {
                if (!err) err = err2;
            }
        }
        return err;
    }
    virtual int_t beforeMain(const String_array& args) {
        return 0;
    }
    virtual int_t afterMain(const String_array& args) {
        return 0;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int_t printLn(const char_array& buf) {
        return -1;
    }
    virtual int_t printLn(const char_t& c) {
        return -1;
    }
    virtual int_t printLn() {
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
}; // class _EXPORT_CLASS Main

typedef Main NullMainImplements;
typedef ::coke::lang::Object NullMainExtends;
///////////////////////////////////////////////////////////////////////
///  Class: NullMain
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS NullMain: virtual public NullMainImplements, public NullMainExtends {
public:
    typedef NullMainImplements Implements;
    typedef NullMainExtends Extends;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    NullMain(const NullMain& copy): Extends(copy) {
    }
    NullMain() {
    }
    virtual ~NullMain() {
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
}; // class _EXPORT_CLASS NullMain

typedef ::coke::system::console::Main MainBaseImplements;
typedef ::xos::base::main MainBaseExtends;
///////////////////////////////////////////////////////////////////////
///  Class: MainBase
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS MainBase: virtual public MainBaseImplements, public MainBaseExtends {
public:
    typedef MainBaseImplements Implements;
    typedef MainBaseExtends Extends;
    typedef ::coke::char_t char_t;
    typedef ::xos::base::stringt<char_t> string_t;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    MainBase() {
    }
    virtual ~MainBase() {
    }
private:
    MainBase(const MainBase& copy): Extends(copy) {
    }

protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    using Implements::main;
    virtual int run(int argc, char **argv, char **env) {
        int err = 0;
        String_array args;
        if ((argv)) {
            char *arg = 0;
            for (int a = 0; a < argc; ++a) {
                if ((arg = argv[a])) {
                    const string_t st(arg);
                    const String s(st.chars());
                    args.append(&s, 1);
                }
            }
        }
        if (!(err = this->beforeMain(args))) {
            int err2 = 0;
            err = this->main(args);
            if ((err2 = this->afterMain(args))) {
                if (!err) err = err2;
            }
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int_t printLn(const char_array& buf) {
        int_t count = 0, amount = 0;
        if (0 <= (amount = print(buf))) count += amount; else return -1;
        if (0 <= (amount = printLn())) count += amount; else return -1;
        return count;
    }
    virtual int_t printLn(const char_t& c) {
        int_t count = 0, amount = 0;
        if (0 <= (amount = print(c))) count += amount; else return -1;
        if (0 <= (amount = printLn())) count += amount; else return -1;
        return count;
    }
    virtual int_t printLn() {
        int_t count = 0, amount = 0;
        if (0 <= (amount = this->outln())) count += amount; else return -1;
        return count;
    }
    virtual int_t print(const char_array& buf) {
        int_t count = 0, amount = 0;
        const char_t* chars = 0;
        size_t length = 0;
        if ((chars = buf.elements()) && (0 < (length = buf.length()))) {
            for (char_t c = *chars; length; c = *++chars, --length) {
                if (0 <= (amount = print(c))) count += amount; else return -1;
            }
        }
        return count;
    }
    virtual int_t print(const char_t& c) {
        int_t count = 0, amount = 0;
        const char cc = ((char)c);
        if (0 <= (amount = this->out(&cc, 1))) count += amount; else return -1;
        return count;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
}; // class _EXPORT_CLASS MainBase

} // namespace console
} // namespace system
} // namespace coke

#endif // ndef _COKE_SYSTEM_CONSOLE_MAIN_HPP