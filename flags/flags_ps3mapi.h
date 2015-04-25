//#define ENGLISH_ONLY	1	// uncomment for english only version

//// EDITIONS ////

#define COBRA_ONLY	1	// comment out for ccapi/non-cobra release
//#define REX_ONLY		1	// shortcuts for REBUG REX CFWs / comment out for usual CFW

#define PS3MAPI		1	// ps3 manager API & webGUI by _NzV_
//#define CCAPI			1	// uncomment for ccapi release
//#define LITE_EDITION	1	// no ps3netsrv support, smaller memory footprint

//// FEATURES ////
#define FIX_GAME		1	// Auto-Fix game
#define EXT_GDATA		1	// /extgd.ps3?status /extgd.ps3?enable /extgd.ps3?disable (external gameDATA)
#define COPY_PS3		1	// /copy.ps3/<path>
#define WEB_CHAT		1	// /chat.ps3
#define DEBUG_MEM		1	// /dump.ps3 / peek.lv1 / poke.lv1 / find.lv1 / peek.lv2 / poke.lv2 / find.lv2
#define VIDEO_REC		1	// /videorec.ps3  start/stop video recording (in-game only)
#define LOAD_PRX		1	// /loadprx.ps3?slot=n&prx=path/file.sprx  (load prx)
#define FAKEISO 		1	// support .ntfs[BDFILE] (fake ISO)
#define BDVD_REGION		1	// change BD/DVD region
#define REMOVE_SYSCALLS	1	// remove syscalls on startup and using R2+TRIANGLE
#define SPOOF_CONSOLEID	1	// spoof idps/psid

//// TEST FEATURES ////
//#define PS2_DISC		1	// uncomment to support /mount.ps2 (mount ps2 game folder as /dev_ps2disc)
//#define NOSINGSTAR	1	// remove SingStar icon from XMB
//#define SWAP_KERNEL	1	// load custom lv2_kernel.self patching LV1 and soft rebooting (use /copy.ps3)
//#define EXTRA_FEAT	1	// save XMB to bmp, eject disc holding SELECT on mount,
//#define SYS_BGM		1	// system background music (may freeze the system when enabled)
//#define USE_DEBUG		1	// debug using telnet
