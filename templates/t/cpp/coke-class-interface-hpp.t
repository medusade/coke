%########################################################################
%# Copyright (c) 1988-2018 $organization$
%#
%# This software is provided by the author and contributors ``as is'' 
%# and any express or implied warranties, including, but not limited to, 
%# the implied warranties of merchantability and fitness for a particular 
%# purpose are disclaimed. In no event shall the author or contributors 
%# be liable for any direct, indirect, incidental, special, exemplary, 
%# or consequential damages (including, but not limited to, procurement 
%# of substitute goods or services; loss of use, data, or profits; or 
%# business interruption) however caused and on any theory of liability, 
%# whether in contract, strict liability, or tort (including negligence 
%# or otherwise) arising in any way out of the use of this software, 
%# even if advised of the possibility of such damage.
%#
%#   File: coke-class-interface-hpp.t
%#
%# Author: $author$
%#   Date: 2/2/2018
%########################################################################
%with(%
%ClassExtends,%(%else-then(%ClassExtends%,%(%else-then(%classextends%,%(::coke::lang::Object)%)%)%)%)%,%
%CLASSEXTENDS,%(%else-then(%CLASSEXTENDS%,%(%toupper(%ClassExtends%)%)%)%)%,%
%classextends,%(%else-then(%_ClassExtends%,%(%tolower(%ClassExtends%)%)%)%)%,%
%%(typedef %ClassImplements% %Class%TImplements;
///////////////////////////////////////////////////////////////////////
///  Class: %Class%T
///////////////////////////////////////////////////////////////////////
template
<class TImplements = %Class%TImplements>

class _EXPORT_CLASS %Class%T: virtual public TImplements {
public:
    typedef TImplements Implements;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef %Class%T<> %Class%;
typedef %Class%::Implements %Class%Implements;

typedef %Class%Implements Null%Class%TImplements;
typedef %ClassExtends% Null%Class%TExtends;
///////////////////////////////////////////////////////////////////////
///  Class: Null%Class%T
///////////////////////////////////////////////////////////////////////
template
<class TImplements = Null%Class%TImplements, class TExtends = Null%Class%TExtends>

class _EXPORT_CLASS Null%Class%T: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    Null%Class%T(const Null%Class%T& copy): Extends(copy) {
    }
    Null%Class%T() {
    }
    virtual ~Null%Class%T() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef Null%Class%T<> Null%Class%;
typedef Null%Class%::Implements Null%Class%Implements;
typedef Null%Class%::Extends Null%Class%Extends;
)%)%