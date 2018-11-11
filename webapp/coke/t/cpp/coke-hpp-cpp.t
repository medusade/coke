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
%#   File: coke-hpp-cpp.t
%#
%# Author: $author$
%#   Date: 10/20/2018
%########################################################################
%with(%
%include_path,%(%else-then(%include_path%,%(%filepath(%input%)%)%)%)%,%
%organization,%(%else-then(%organization%,%($organization)%)%)%,%
%Organization,%(%else-then(%Organization%,%(%organization%)%)%)%,%
%ORGANIZATION,%(%else-then(%ORGANIZATION%,%(%toupper(%Organization%)%)%)%)%,%
%organization,%(%else-then(%_Organization%,%(%tolower(%Organization%)%)%)%)%,%
%author,%(%else-then(%author%,%($author)%)%)%,%
%Author,%(%else-then(%Author%,%(%author%)%)%)%,%
%AUTHOR,%(%else-then(%AUTHOR%,%(%toupper(%Author%)%)%)%)%,%
%author,%(%else-then(%_Author%,%(%tolower(%Author%)%)%)%)%,%
%year,%(%else-then(%year()%,%(2018)%)%)%,%
%Year,%(%else-then(%Year%,%(%year%)%)%)%,%
%YEAR,%(%else-then(%YEAR%,%(%toupper(%Year%)%)%)%)%,%
%year,%(%else-then(%_Year%,%(%tolower(%Year%)%)%)%)%,%
%date,%(%else-then(%date()%,%(10/20/2018)%)%)%,%
%Date,%(%else-then(%Date%,%(%date%)%)%)%,%
%DATE,%(%else-then(%DATE%,%(%toupper(%Date%)%)%)%)%,%
%date,%(%else-then(%_Date%,%(%tolower(%Date%)%)%)%)%,%
%class,%(%else-then(%do(%class%)%,%(%if-no(%IsClass%,,Class)%)%)%)%,%
%Class,%(%else-then(%do(%Class%)%,%(%class%)%)%)%,%
%CLASS,%(%else-then(%CLASS%,%(%toupper(%Class%)%)%)%)%,%
%class,%(%else-then(%_Class%,%(%tolower(%Class%)%)%)%)%,%
%header,%(%else-then(%header%,%(hpp)%)%)%,%
%Header,%(%else-then(%Header%,%(%header%)%)%)%,%
%HEADER,%(%else-then(%HEADER%,%(%toupper(%Header%)%)%)%)%,%
%header,%(%else-then(%_Header%,%(%tolower(%Header%)%)%)%)%,%
%extension,%(%else-then(%extension%,%(%else-then(%fileextension(%file%)%,%(%else-then(%fileextension(%File%)%,%(cpp)%)%)%)%)%)%)%,%
%Extension,%(%else-then(%Extension%,%(%extension%)%)%)%,%
%EXTENSION,%(%else-then(%EXTENSION%,%(%toupper(%Extension%)%)%)%)%,%
%extension,%(%else-then(%_Extension%,%(%tolower(%Extension%)%)%)%)%,%
%file,%(%else-then(%filebase(%do(%file%)%)%,%(%Class%)%)%)%,%
%File,%(%else-then(%filebase(%do(%File%)%)%,%(%file%)%)%)%,%
%FILE,%(%else-then(%FILE%,%(%toupper(%File%)%)%)%)%,%
%file,%(%else-then(%_File%,%(%tolower(%File%)%)%)%)%,%
%namespace,%(%else-then(%namespace%,%(%if-no(%IsNamespace%,,%(coke/lang)%)%)%)%)%,%
%Namespace,%(%else-then(%Namespace%,%(%namespace%)%)%)%,%
%NAMESPACE,%(%else-then(%NAMESPACE%,%(%toupper(%Namespace%)%)%)%)%,%
%namespace,%(%else-then(%_Namespace%,%(%tolower(%Namespace%)%)%)%)%,%
%Namespace_begin,%(%else-then(%Namespace_begin%,%(%parse(%Namespace%,/,,,,%(namespace %Namespace% {
)%,Namespace)%)%)%)%,%
%Namespace_end,%(%else-then(%Namespace_end%,%(%reverse-parse(%Namespace%,/,,,,%(} // namespace %Namespace%
)%,Namespace)%)%)%)%,%
%Namespace_path,%(%if-then(%Namespace%,%(/)%)%)%,%
%ifndef,%(%else-then(%ifndef%,%(%Namespace%)%)%)%,%
%Ifndef,%(%else-then(%Ifndef%,%(%ifndef%)%)%)%,%
%Ifndef,%(_%if-then(%parse(%Ifndef%,/,,_)%,_)%%File%_%Extension%)%,%
%IFNDEF,%(%else-then(%IFNDEF%,%(%toupper(%Ifndef%)%)%)%)%,%
%ifndef,%(%else-then(%_Ifndef%,%(%tolower(%Ifndef%)%)%)%)%,%
%ifndef_begin,%(%else-then(%ifndef_begin%,%(#ifndef %IFNDEF%
#define %IFNDEF%
)%)%)%,%
%Ifndef_begin,%(%else-then(%Ifndef_begin%,%(%ifndef_begin%)%)%)%,%
%IFNDEF_BEGIN,%(%else-then(%IFNDEF_BEGIN%,%(%toupper(%Ifndef_begin%)%)%)%)%,%
%ifndef_begin,%(%else-then(%_Ifndef_begin%,%(%tolower(%Ifndef_begin%)%)%)%)%,%
%ifndef_end,%(%else-then(%ifndef_end%,%(
#endif // ndef %IFNDEF%)%)%)%,%
%Ifndef_end,%(%else-then(%Ifndef_end%,%(%ifndef_end%)%)%)%,%
%IFNDEF_END,%(%else-then(%IFNDEF_END%,%(%toupper(%Ifndef_end%)%)%)%)%,%
%ifndef_end,%(%else-then(%_Ifndef_end%,%(%tolower(%Ifndef_end%)%)%)%)%,%
%include,%(%else-then(%include%,%(%if-no(%IsInclude%,,%(coke/lang/Object.hpp)%)%)%)%)%,%
%Include,%(%else-then(%Include%,%(%include%)%)%)%,%
%INCLUDE,%(%else-then(%INCLUDE%,%(%toupper(%Include%)%)%)%)%,%
%include,%(%else-then(%_Include%,%(%tolower(%Include%)%)%)%)%,%
%sysinclude,%(%else-then(%sysinclude%,%(%if-bo(%sysinclude%,,%()%)%)%)%)%,%
%SysInclude,%(%else-then(%SysInclude%,%(%sysinclude%)%)%)%,%
%SYSINCLUDE,%(%else-then(%SYSINCLUDE%,%(%toupper(%SysInclude%)%)%)%)%,%
%sysinclude,%(%else-then(%_SysInclude%,%(%tolower(%SysInclude%)%)%)%)%,%
%Includes,%(%parse(%Include%,;,,,,%(#include "%Include%"
)%,Include)%)%,%
%SysIncludes,%(%parse(%SysInclude%,;,,,,%(#include <%Include%>
)%,Include)%)%,%
%includeheader,%(%else-then(%includeheader%,%(%Namespace_path%%Class%.%Header%)%)%)%,%
%IncludeHeader,%(%else-then(%IncludeHeader%,%(%includeheader%)%)%)%,%
%INCLUDEHEADER,%(%else-then(%INCLUDEHEADER%,%(%toupper(%IncludeHeader%)%)%)%)%,%
%includeheader,%(%else-then(%_IncludeHeader%,%(%tolower(%IncludeHeader%)%)%)%)%,%
%HeaderIncludes,%(%parse(%IncludeHeader%,;,,,,%(#include "%HeaderInclude%"
)%,HeaderInclude)%)%,%
%classimplements,%(%else-then(%classimplements%,%(%if-no(%IsClassImplements%,,::coke::lang::ImplementBase)%)%)%)%,%
%ClassImplements,%(%else-then(%ClassImplements%,%(%classimplements%)%)%)%,%
%CLASSIMPLEMENTS,%(%else-then(%CLASSIMPLEMENTS%,%(%toupper(%ClassImplements%)%)%)%)%,%
%classimplements,%(%else-then(%_ClassImplements%,%(%tolower(%ClassImplements%)%)%)%)%,%
%classextends,%(%else-then(%classextends%,%(%if-no(%IsClassExtends%,,::coke::lang::Base)%)%)%)%,%
%ClassExtends,%(%else-then(%ClassExtends%,%(%classextends%)%)%)%,%
%CLASSEXTENDS,%(%else-then(%CLASSEXTENDS%,%(%toupper(%ClassExtends%)%)%)%)%,%
%classextends,%(%else-then(%_ClassExtends%,%(%tolower(%ClassExtends%)%)%)%)%,%
%classtype,%(%else-then(%classtype%,%(%if(%ClassExtends%,class,%(%if(%ClassImplements%,interface,class)%)%)%)%)%)%,%
%ClassType,%(%else-then(%ClassType%,%(%classtype%)%)%)%,%
%CLASSTYPE,%(%else-then(%CLASSTYPE%,%(%toupper(%ClassType%)%)%)%)%,%
%classtype,%(%else-then(%_ClassType%,%(%tolower(%ClassType%)%)%)%)%,%
%isinterface,%(%else-then(%isinterface%,%(IsInterface)%)%)%,%
%IsInterface,%(%else-then(%IsInterface%,%(%isinterface%)%)%)%,%
%ISINTERFACE,%(%else-then(%ISINTERFACE%,%(%toupper(%IsInterface%)%)%)%)%,%
%isinterface,%(%else-then(%_IsInterface%,%(%tolower(%IsInterface%)%)%)%)%,%
%isabstract,%(%else-then(%isabstract%,%(IsAbstract)%)%)%,%
%IsAbstract,%(%else-then(%IsAbstract%,%(%isabstract%)%)%)%,%
%ISABSTRACT,%(%else-then(%ISABSTRACT%,%(%toupper(%IsAbstract%)%)%)%)%,%
%isabstract,%(%else-then(%_IsAbstract%,%(%tolower(%IsAbstract%)%)%)%)%,%
%isclass,%(%else-then(%isclass%,%(yes)%)%)%,%
%IsClass,%(%else-then(%IsClass%,%(%isclass%)%)%)%,%
%ISCLASS,%(%else-then(%ISCLASS%,%(%toupper(%IsClass%)%)%)%)%,%
%isclass,%(%else-then(%_IsClass%,%(%tolower(%IsClass%)%)%)%)%,%
%templateclass,%(%else-then(%templateclass%,%(%if-no(%IsTemplateClass%,,yes)%)%)%)%,%
%TemplateClass,%(%else-then(%TemplateClass%,%(%templateclass%)%)%)%,%
%TEMPLATECLASS,%(%else-then(%TEMPLATECLASS%,%(%toupper(%TemplateClass%)%)%)%)%,%
%templateclass,%(%else-then(%_TemplateClass%,%(%tolower(%TemplateClass%)%)%)%)%,%
%classt,%(%else-then(%classt%,%(%Class%%if(%TemplateClass%,T)%)%)%)%,%
%ClassT,%(%else-then(%ClassT%,%(%classt%)%)%)%,%
%CLASST,%(%else-then(%CLASST%,%(%toupper(%ClassT%)%)%)%)%,%
%classt,%(%else-then(%_ClassT%,%(%tolower(%ClassT%)%)%)%)%,%
%classtimplements,%(%else-then(%classtimplements%,%(%if(%TemplateClass%,T,%ClassT%)%Implements)%)%)%,%
%ClassTImplements,%(%else-then(%ClassTImplements%,%(%classtimplements%)%)%)%,%
%CLASSTIMPLEMENTS,%(%else-then(%CLASSTIMPLEMENTS%,%(%toupper(%ClassTImplements%)%)%)%)%,%
%classtimplements,%(%else-then(%_ClassTImplements%,%(%tolower(%ClassTImplements%)%)%)%)%,%
%classtextends,%(%else-then(%classtextends%,%(%if(%TemplateClass%,T,%ClassT%)%Extends)%)%)%,%
%ClassTExtends,%(%else-then(%ClassTExtends%,%(%classtextends%)%)%)%,%
%CLASSTEXTENDS,%(%else-then(%CLASSTEXTENDS%,%(%toupper(%ClassTExtends%)%)%)%)%,%
%classtextends,%(%else-then(%_ClassTExtends%,%(%tolower(%ClassTExtends%)%)%)%)%,%
%%(%
%%include(%include_path%/coke-file-hpp-cpp.t)%%
%%include(%include_path%/coke-%Prefix%%Extension%.t)%%
%)%)%