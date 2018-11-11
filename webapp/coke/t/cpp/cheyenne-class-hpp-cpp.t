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
%#   File: cheyenne-class-hpp-cpp.t
%#
%# Author: $author$
%#   Date: 2/3/2018
%########################################################################
%with(%
%input,%(%else-then(%input%,%(%input()%)%)%)%,%
%Input,%(%else-then(%Input%,%(%input%)%)%)%,%
%INPUT,%(%else-then(%INPUT%,%(%toupper(%Input%)%)%)%)%,%
%input,%(%else-then(%_Input%,%(%tolower(%Input%)%)%)%)%,%
%inputfile,%(%else-then(%inputfile%,%(%filename(%Input%)%)%)%)%,%
%InputFile,%(%else-then(%InputFile%,%(%inputfile%)%)%)%,%
%INPUTFILE,%(%else-then(%INPUTFILE%,%(%toupper(%InputFile%)%)%)%)%,%
%inputfile,%(%else-then(%_InputFile%,%(%tolower(%InputFile%)%)%)%)%,%
%inputpath,%(%else-then(%inputpath%,%(%filepath(%Input%)%)%)%)%,%
%InputPath,%(%else-then(%InputPath%,%(%inputpath%)%)%)%,%
%INPUTPATH,%(%else-then(%INPUTPATH%,%(%toupper(%InputPath%)%)%)%)%,%
%inputpath,%(%else-then(%_InputPath%,%(%tolower(%InputPath%)%)%)%)%,%
%inputbase,%(%else-then(%inputbase%,%(%filebase(%Input%)%)%)%)%,%
%InputBase,%(%else-then(%InputBase%,%(%inputbase%)%)%)%,%
%INPUTBASE,%(%else-then(%INPUTBASE%,%(%toupper(%InputBase%)%)%)%)%,%
%inputbase,%(%else-then(%_InputBase%,%(%tolower(%InputBase%)%)%)%)%,%
%inputextension,%(%else-then(%inputextension%,%(%fileextension(%Input%)%)%)%)%,%
%InputExtension,%(%else-then(%InputExtension%,%(%inputextension%)%)%)%,%
%INPUTEXTENSION,%(%else-then(%INPUTEXTENSION%,%(%toupper(%InputExtension%)%)%)%)%,%
%inputextension,%(%else-then(%_InputExtension%,%(%tolower(%InputExtension%)%)%)%)%,%
%Class,%(%else-then(%Class%,%(%else-then(%class%,%(Class)%)%)%)%)%,%
%Class,%(%replace-string(Servlet,Serpent,%Class%)%)%,%
%Class,%(%replace-string(Jsp,Csp,%Class%)%)%,%
%CLASS,%(%else-then(%CLASS%,%(%toupper(%Class%)%)%)%)%,%
%class,%(%else-then(%_Class%,%(%tolower(%Class%)%)%)%)%,%
%ClassImplements,%(%else-then(%ClassImplements%,%(%else-then(%classimplements%,%(ClassImplements)%)%)%)%)%,%
%ClassImplements,%(%replace-string(Servlet,Serpent,%ClassImplements%)%)%,%
%CLASSIMPLEMENTS,%(%else-then(%CLASSIMPLEMENTS%,%(%toupper(%ClassImplements%)%)%)%)%,%
%classimplements,%(%else-then(%_ClassImplements%,%(%tolower(%ClassImplements%)%)%)%)%,%
%ClassExtends,%(%else-then(%ClassExtends%,%(%else-then(%classextends%,%(ClassExtends)%)%)%)%)%,%
%ClassExtends,%(%replace-string(Servlet,Serpent,%ClassExtends%)%)%,%
%CLASSEXTENDS,%(%else-then(%CLASSEXTENDS%,%(%toupper(%ClassExtends%)%)%)%)%,%
%classextends,%(%else-then(%_ClassExtends%,%(%tolower(%ClassExtends%)%)%)%)%,%
%%(%
%%include(%InputPath%/coke-class-hpp-cpp.t)%%
%)%)%