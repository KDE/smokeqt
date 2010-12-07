#include <kdecore_export.h>
#include <kfilterbase.h>   
#include <kfilterdev.h>    
#include <kconfig.h>         
#include <kconfigbase.h>     
#include <kconfiggroup.h>    
#include <kdesktopfile.h>    
#include <ksharedconfig.h>   
#include <kcoreconfigskeleton.h>
#include <kcalendarsystem.h>    
#include <kdatetime.h>          
#include <ksystemtimezone.h>    
#include <ktimezone.h>          
#include <ktzfiletimezone.h>    
#include <kautosavefile.h>      
#include <kdebug.h>             
#include <kmessage.h>           
#include <kprocess.h>           
#include <klockfile.h>          
#include <ksavefile.h>          
#include <ktempdir.h>           
#include <ktemporaryfile.h>     
#include <kurl.h>               
#include <kcompositejob.h>      
#include <kjob.h>               
#include <kjobuidelegate.h>     
#include <kjobtrackerinterface.h>
#include <kaboutdata.h>          
#include <kauthorized.h>         
#include <kcmdlineargs.h>        
#include <kglobal.h>             
#include <kcomponentdata.h>      
#include <kstandarddirs.h>       
#include <ktoolinvocation.h>     
#include <klocalsocket.h>           
#include <ksocketfactory.h>         
#include <kmimetype.h>              
#include <kmimetypetrader.h>        
#include <kservice.h>               
#include <kserviceaction.h>         
#include <kservicegroup.h>          
#include <kservicetype.h>           
#include <kservicetypeprofile.h>    
#include <kservicetypetrader.h>     
#include <kplugininfo.h>            
#include <kcharsets.h>              
#include <kencodingdetector.h>      
#include <klocale.h>                
#include <klocalizedstring.h>       
#include <kprotocolinfo.h>          
#include <ksycoca.h>                
#include <ksycocaentry.h>           
#include <ksycocatype.h>            
#include <kascii.h>                 
#include <kcodecs.h>                
#include <kstringhandler.h>         
#include <kallocator.h>
#include <kautostart.h>
#include <kde_file.h>
#include <kdedmodule.h>
#include <kgenericfactory.h>
#include <kgenericfactory.tcc>
#include <klauncher_iface.h>
#include <klibloader.h>
#include <klibrary.h>
#include <kmacroexpander.h>
#include <kexportplugin.h>
#include <kpluginfactory.h>
#include <kpluginloader.h>
#include <kshell.h>
#include <krandom.h>
#include <krandomsequence.h>
#include <ksharedptr.h>
#include <ksortablelist.h>
#include <ktypelist.h>
#include <kuser.h>
#include <kdefakes.h>
#include <kdeversion.h>
#include <sonnet/backgroundchecker.h>
#include <sonnet/speller.h>

#if KDE_VERSION >= 0x040200
#include <sonnet/globals.h>
#endif

#if KDE_VERSION >= 0x040202
#include <kencodingprober.h>        
#endif

#if KDE_VERSION >= 0x040400
#include <kauthaction.h>            
#include <kauthactionreply.h>       
#include <kauthactionwatcher.h>     
#include <kauthhelpersupport.h>     
#include <kauth.h>                  
#include <kcurrencycode.h>          
#endif
