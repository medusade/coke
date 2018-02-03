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
%#   File: coke-class-class-hpp.t
%#
%# Author: $author$
%#   Date: 2/2/2018
%########################################################################
%with(%
%%(typedef %ClassImplements% %Class%TImplements;
typedef %ClassExtends% %Class%TExtends;
///////////////////////////////////////////////////////////////////////
///  Class: %Class%T
///////////////////////////////////////////////////////////////////////
template
<class TImplements = %Class%TImplements, class TExtends = %Class%TExtends>

class _EXPORT_CLASS %Class%T: virtual public TImplements , public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    %Class%T(const %Class%T& copy): Extends(copy) {
    }
    %Class%T() {
    }
    virtual ~%Class%T() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef %Class%T<> %Class%;
typedef %Class%::Implements %Class%Implements;
typedef %Class%::Extends %Class%Extends;
)%)%