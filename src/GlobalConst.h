// SoftEther VPN Source Code - TS Security Master Branch
// Global Constants Header

#pragma warning(disable : 4819)

#ifndef	GLOBAL_CONST_H
#define	GLOBAL_CONST_H

//// Brand
// (Define it if building SoftEther VPN Project.)
#define	GC_SOFTETHER_VPN
#define	GC_SOFTETHER_OSS

//// Basic Variables

#define	CEDAR_PRODUCT_STR			"SoftEther"
#define	CEDAR_PRODUCT_STR_W			L"SoftEther"
#define	CEDAR_SERVER_STR			"SoftEther VPN Server TS Security"
#define	CEDAR_BRIDGE_STR			"SoftEther VPN Bridge TS Security"
#define	CEDAR_BETA_SERVER			"SoftEther VPN Server Pre Release TS Security"
#define	CEDAR_MANAGER_STR			"SoftEther VPN Server Manager TS Security"
#define	CEDAR_CUI_STR				"SoftEther VPN Command-Line Admin Tool"
#define CEDAR_ELOG					"SoftEther EtherLogger TS Security"
#define	CEDAR_CLIENT_STR			"SoftEther VPN Client TS Security"
#define CEDAR_CLIENT_MANAGER_STR	"SoftEther VPN Client Connection Manager TS Security"
#define	CEDAR_ROUTER_STR			"SoftEther VPN User-mode Router TS Security"
#define	CEDAR_SERVER_LINK_STR		"SoftEther VPN Server TS Security (Cascade Mode)"
#define	CEDAR_BRIDGE_LINK_STR		"SoftEther VPN Bridge TS Security (Cascade Mode)"
#define	CEDAR_SERVER_FARM_STR		"SoftEther VPN Server TS Security (Cluster RPC Mode)"



//// Default Port Number

#define	GC_DEFAULT_PORT		5555
#define	GC_CLIENT_CONFIG_PORT	9931
#define	GC_CLIENT_NOTIFY_PORT	9984


//// Software Name

#define	GC_SVC_NAME_VPNSERVER		"SEVPNSERVERDEV"
#define	GC_SVC_NAME_VPNCLIENT		"SEVPNCLIENTDEV"
#define	GC_SVC_NAME_VPNBRIDGE		"SEVPNBRIDGEDEV"



//// Registry

#define	GC_REG_COMPANY_NAME			"SoftEther VPN TS Security"




//// Setup Wizard

#define	GC_SW_UIHELPER_REGVALUE		"SoftEther VPN Client UI Helper TS Security"
#define	GC_SW_SOFTETHER_PREFIX		"sedev"
#define	GC_SW_SOFTETHER_PREFIX_W	L"sedev"



//// VPN UI Components

#define	GC_UI_APPID_CM				L"SoftEther.SoftEther VPN Client TS Security"

#endif	// GLOBAL_CONST_H
