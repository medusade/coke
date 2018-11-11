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
%%(%
%%if(%Class%,%(%
%%if(%ClassImplements%,%(typedef %ClassImplements% %ClassT%Implements;
)%)%%if(%ClassExtends%,%(typedef %ClassExtends% %ClassT%Extends;
)%)%///////////////////////////////////////////////////////////////////////
///  Class: %ClassT%
///////////////////////////////////////////////////////////////////////
%if(%TemplateClass%,%(template
<%if(%ClassImplements%,%(class TImplements = %ClassT%Implements, )%)%%if(%ClassExtends%,%(class TExtends = %ClassT%Extends)%)%>

)%)%class _EXPORT_CLASS %ClassT%%if(%ClassImplements%%ClassExtends%,%(: %if(%ClassImplements%,%(virtual public %ClassTImplements%, )%)%%if(%ClassExtends%,%(public %ClassTExtends%)%)%)%)% {
public:
    %if(%ClassImplements%,%(typedef %ClassTImplements% Implements;
    )%)%%if(%ClassExtends%,%(typedef %ClassTExtends% Extends;
    )%)%///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    %ClassT%(const %ClassT%& copy%())%%if(%ClassExtends%,%(: Extends%(()%copy%())%)%)% {
    }
    %ClassT%() {
    }
    virtual ~%ClassT%() {
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
}; // class _EXPORT_CLASS %ClassT%
%if(%TemplateClass%,%(typedef %ClassT%<> %Class%;
%if(%ClassImplements%,%(typedef %Class%::Implements %Class%Implements;
)%)%%if(%ClassExtends%,%(typedef %Class%::Extends %Class%Extends;
)%)%)%)%%
%)%)%%
%)%)%