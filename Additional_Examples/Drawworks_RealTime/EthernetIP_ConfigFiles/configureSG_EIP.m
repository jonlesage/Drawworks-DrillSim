IO756                 = sg_IO75X_struct();   % Define default structure
 
IO756.protocol        = 'IO756';             % Protocol Speedgoat ID
IO756.cardid          = '1';                 % Card ID as defined in the model
IO756.configfiles     = '2';                 % Number of configuration files
IO756.configPath      = 'C:\Users\jlesage\Dropbox\MathWorks\Demos\MBD_DrawWorks_HIL\Drawworks_Demo_R2016a\SL_Models\0_DrawWorks\SL_Speedgoat_Realtime_Plant\EthernetIP_ConfigFiles';% Absolute file path or '' for current directory
IO756.configfile1     = 'drawworks_config.nxd';         % Name of first configuration file
IO756.configfile2     = 'drawworks_config_nwid.nxd';   % Name of second configuration file
 
sg_IO75X_loadconfig(IO756);  