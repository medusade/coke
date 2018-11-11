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
%nullclasstimplements,%(%else-then(%nullclasstimplements%,%(%if(%TemplateClass%,T,Null%ClassT%)%Implements)%)%)%,%
%NullClassTImplements,%(%else-then(%NullClassTImplements%,%(%nullclasstimplements%)%)%)%,%
%NULLCLASSTIMPLEMENTS,%(%else-then(%NULLCLASSTIMPLEMENTS%,%(%toupper(%NullClassTImplements%)%)%)%)%,%
%nullclasstimplements,%(%else-then(%_NullClassTImplements%,%(%tolower(%NullClassTImplements%)%)%)%)%,%
%nullclasstextends,%(%else-then(%nullclasstextends%,%(%if(%TemplateClass%,T,Null%ClassT%)%Extends)%)%)%,%
%NullClassTExtends,%(%else-then(%NullClassTExtends%,%(%nullclasstextends%)%)%)%,%
%NULLCLASSTEXTENDS,%(%else-then(%NULLCLASSTEXTENDS%,%(%toupper(%NullClassTExtends%)%)%)%)%,%
%nullclasstextends,%(%else-then(%_NullClassTExtends%,%(%tolower(%NullClassTExtends%)%)%)%)%,%
%%(typedef %ClassImplements% %ClassT%Implements;
///////////////////////////////////////////////////////////////////////
///  Class: %ClassT%
///////////////////////////////////////////////////////////////////////
%if(%TemplateClass%,%(template <class TImplements = %ClassT%Implements>

)%)%class _EXPORT_CLASS %ClassT%: virtual public %ClassTImplements% {
public:
    typedef %ClassTImplements% Implements;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
}; // class _EXPORT_CLASS %ClassT%
%if(%TemplateClass%,%(typedef %ClassT%<> %Class%;
typedef %Class%::Implements %Class%Implements;
)%)%
typedef %ClassT% Null%ClassT%Implements;
typedef %ClassExtends% Null%ClassT%Extends;
///////////////////////////////////////////////////////////////////////
///  Class: Null%ClassT%
///////////////////////////////////////////////////////////////////////
%if(%TemplateClass%,%(template
<class TImplements = Null%ClassT%Implements, class TExtends = Null%ClassT%Extends>

)%)%class _EXPORT_CLASS Null%ClassT%: virtual public %NullClassTImplements%, public %NullClassTExtends% {
public:
    typedef %NullClassTImplements% Implements;
    typedef %NullClassTExtends% Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    Null%ClassT%(const Null%ClassT%& copy): Extends(copy) {
    }
    Null%ClassT%() {
    }
    virtual ~Null%ClassT%() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual boolean_t isNull() const {
        return true;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
}; // class _EXPORT_CLASS Null%ClassT%
%if(%TemplateClass%,%(typedef Null%ClassT%<> Null%Class%;
typedef Null%Class%::Implements Null%Class%Implements;
typedef Null%Class%::Extends Null%Class%Extends;
)%)%)%)%