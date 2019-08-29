/*
** Copyright (C) 2014 Cisco and/or its affiliates. All rights reserved.
** Copyright (C) 2005-2013 Sourcefire, Inc.
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License Version 2 as
** published by the Free Software Foundation.  You may not use, modify or
** distribute this program under any other version of the GNU General
** Public License.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/


#ifndef __APP_ID_H__
#define __APP_ID_H__

#include <stdint.h>

typedef int32_t tAppId;

typedef enum
{
    APP_ID_UNKNOWN = -1,  /*searched and not found any matching app id */
    APP_ID_NONE = 0,     /*AppId not searched */

    APP_ID_3COM_TSMUX=2,
    APP_ID_8021Q=3,
    APP_ID_914CG=4,
    APP_ID_ACA_SERVICES=5,
    APP_ID_ACI=6,
    APP_ID_ACR_NEMA=7,
    APP_ID_ACTIVE_DIRECTORY=8,
    APP_ID_ACTIVESYNC=9,
    APP_ID_AD_BACKUP=10,
    APP_ID_AD_DRS=11,
    APP_ID_AD_DSAOP=12,
    APP_ID_AD_DSROL=13,
    APP_ID_AD_NSP=14,
    APP_ID_ADOBE=15,
    APP_ID_AD_RESTORE=16,
    APP_ID_ADRIVE=17,
    APP_ID_AD_XDS=18,
    APP_ID_AED512=19,
    APP_ID_AFP=20,
    APP_ID_AH=21,
    APP_ID_AJP=22,
    APP_ID_ALIAS=23,
    APP_ID_AMAZON=24,
    APP_ID_ANET=25,
    APP_ID_ANSA_NOTIFY=26,
    APP_ID_ANSA_REX_TRADER=27,
    APP_ID_APPLE_ARP=28,
    APP_ID_APPLEJUICE=29,
    APP_ID_APPLESHARE=30,
    APP_ID_APPLETALK=31,
    APP_ID_APPLE_UPDATE=32,
    APP_ID_ARCISDMS=33,
    APP_ID_ARIEL=34,
    APP_ID_ARNS=35,
    APP_ID_ARP=36,
    APP_ID_ASA=37,
    APP_ID_ASTRAWEB=38,
    APP_ID_ATM_FATE=39,
    APP_ID_ATM_MPOA=40,
    APP_ID_AUDITD=41,
    APP_ID_AUDIT=42,
    APP_ID_AURORA=43,
    APP_ID_AVG=44,
    APP_ID_AVIRA=45,
    APP_ID_AVOCENT=46,
    APP_ID_BACKBLAZE=47,
    APP_ID_BACKPACK=48,
    APP_ID_BATTLEFIELD=49,
    APP_ID_BATTLE_NET=50,
    APP_ID_BEETPH=51,
    APP_ID_BFTP=52,
    APP_ID_BGMP=53,
    APP_ID_BH611=54,
    APP_ID_BHEVENT=55,
    APP_ID_BHFHS=56,
    APP_ID_BHMDS=57,
    APP_ID_BING=58,
    APP_ID_BITDEFENDER=59,
    APP_ID_BITS=60,
    APP_ID_BITTORRENT=61,
    APP_ID_BLACKBOARD=62,
    APP_ID_BLACKJACK=63,
    APP_ID_BLAZEFS=64,
    APP_ID_BLIDM=65,
    APP_ID_BNET=66,
    APP_ID_CABLEPORT_AX=67,
    APP_ID_CAICCI=68,
    APP_ID_CAILIC=69,
    APP_ID_CAP=70,
    APP_ID_CDC=71,
    APP_ID_CFDPTKT=72,
    APP_ID_CHARGEN=73,
    APP_ID_CHECK_POINT=74,
    APP_ID_CISCO_DRP=76,
    APP_ID_CISCO_FNATIVE=77,
    APP_ID_CISCO_GDP=78,
    APP_ID_CISCO_SLA=79,
    APP_ID_CISCO_SYSMAINT=80,
    APP_ID_CISCO_TNATIVE=81,
    APP_ID_CITRIX_CGP=82,
    APP_ID_CITRIX_ICA=83,
    APP_ID_CITRIX_IMA=84,
    APP_ID_CITRIX_JEDI=85,
    APP_ID_CITRIX_LICENSING=86,
    APP_ID_CITRIX_ONLINE=87,
    APP_ID_CITRIX_RTMP=88,
    APP_ID_CITRIX_SLG=89,
    APP_ID_CITRIX_WANSCALER=90,
    APP_ID_CL1=91,
    APP_ID_CLEARCASE=92,
    APP_ID_CLOANTO=93,
    APP_ID_CMIP=94,
    APP_ID_CODA_AUTH=95,
    APP_ID_COMMVAULT=96,
    APP_ID_COMPRESSNET=97,
    APP_ID_COMSCM=98,
    APP_ID_CORBA=99,
    APP_ID_CORERJD=100,
    APP_ID_COVIA_CI=101,
    APP_ID_CSISGWP=102,
    APP_ID_CSNET_NS=103,
    APP_ID_CTF=104,
    APP_ID_CVCHOSTD=105,
    APP_ID_DASP=106,
    APP_ID_DATEX_ASN=107,
    APP_ID_DBASE=108,
    APP_ID_DCAP=109,
    APP_ID_DCCP=110,
    APP_ID_DCP=111,
    APP_ID_DEC_AUTH=112,
    APP_ID_DEC_DEBUG=113,
    APP_ID_DECVMS=114,
    APP_ID_DEOS=115,
    APP_ID_DHCPV6=116,
    APP_ID_DIGG=117,
    APP_ID_DIRECT_CONNECT=118,
    APP_ID_DIRECT=119,
    APP_ID_DIXIE=120,
    APP_ID_DLS=121,
    APP_ID_DNA_CML=122,
    APP_ID_DNSIX=123,
    APP_ID_DPSI=124,
    APP_ID_DROPBOX=125,
    APP_ID_DSFGW=126,
    APP_ID_DSP3270=127,
    APP_ID_DSP=128,
    APP_ID_DSSETUP=129,
    APP_ID_DTAG=130,
    APP_ID_DTK=131,
    APP_ID_EBAY=132,
    APP_ID_EBAY_BID=133,
    APP_ID_EBAY_SEARCH=134,
    APP_ID_EBAY_WATCH=135,
    APP_ID_EBUDDY=136,
    APP_ID_EGP=137,
    APP_ID_EMBLNDT=138,
    APP_ID_EMFIS=139,
    APP_ID_ENTRUSTTIME=140,
    APP_ID_EPMAP=141,
    APP_ID_ERPC=142,
    APP_ID_ESET=143,
    APP_ID_ESP=144,
    APP_ID_ESRO=145,
    APP_ID_ETH=146,
    APP_ID_ETOS=147,
    APP_ID_SAFARI_MOBILE_DUMMY=148,
    APP_ID_EXCHANGE=1780,
    APP_ID_FACEBOOK_APPS=149,
    APP_ID_FARK=150,
    APP_ID_FARMVILLE=151,
    APP_ID_FASP=152,
    APP_ID_FASTTRACK=153,
    APP_ID_FATMEN=154,
    APP_ID_FILEMAKER=155,
    APP_ID_FILER_CX=156,
    APP_ID_FILESTUBE=157,
    APP_ID_FLASHGET=158,
    APP_ID_FLICKR=159,
    APP_ID_FLIXSTER=160,
    APP_ID_FOGBUGZ=161,
    APP_ID_F_PROT=162,
    APP_ID_FREECAST=163,
    APP_ID_FRIENDFEED=164,
    APP_ID_FTP_CONTROL=165,
    APP_ID_FTP_DATA=166,
    APP_ID_FTPSDATA=167,
    APP_ID_FTPS=168,
    APP_ID_FXP=169,
    APP_ID_GACP=170,
    APP_ID_GANGLIA=171,
    APP_ID_GENESIS_PPP=172,
    APP_ID_GENIE=173,
    APP_ID_GENRAD=174,
    APP_ID_GIGANEWS=175,
    APP_ID_GIOP=176,
    APP_ID_GIST=177,
    APP_ID_GOOGLE_APIS=178,
    APP_ID_GOOGLE_APP_ENGINE=179,
    APP_ID_GOOGLE_DOCS=180,
    APP_ID_GOOGLE_TALK_GADGET=182,
    APP_ID_GOOGLE_TALK=183,
    APP_ID_GOOGLE=184,
    APP_ID_GOOGLE_TRANSLATE=185,
    APP_ID_GOOGLE_VIDEO=186,
    APP_ID_GOTOMEETING=187,
    APP_ID_GPFS=188,
    APP_ID_GRE=189,
    APP_ID_GROUPWISE=190,
    APP_ID_GSIFTP=191,
    APP_ID_GSS_LICENSE=192,
    APP_ID_H_225=193,
    APP_ID_H_245=194,
    APP_ID_H_248=195,
    APP_ID_H_323=196,
    APP_ID_HASSLE=197,
    APP_ID_HDAP=198,
    APP_ID_HEMS=199,
    APP_ID_HIVESTOR=200,
    APP_ID_HL7=201,
    APP_ID_HOPSTER=202,
    APP_ID_HOSTNAME=203,
    APP_ID_HOTFILE=204,
    APP_ID_HOTMAIL=205,
    APP_ID_HP_PERF=206,
    APP_ID_HP_VMM=207,
    APP_ID_HTTP_AUDIO=208,
    APP_ID_HTTPMGT=209,
    APP_ID_HTTP_VIDEO=210,
    APP_ID_HYPER_G=211,
    APP_ID_IASD=212,
    APP_ID_IBM_OPC=213,
    APP_ID_ICA_BROWSER=214,
    APP_ID_ICAD=215,
    APP_ID_ICAP=216,
    APP_ID_ICA=217,
    APP_ID_ICESHARE=218,
    APP_ID_ICMP=219,
    APP_ID_ICMPV6=220,
    APP_ID_ICP=221,
    APP_ID_ICQ2GO=222,
    APP_ID_IDP=223,
    APP_ID_IGMP=224,
    APP_ID_IKE=225,
    APP_ID_IMGAMES=226,
    APP_ID_IMSP=227,
    APP_ID_INBUSINESS=228,
    APP_ID_INFORMIX=229,
    APP_ID_INFOSEEK=230,
    APP_ID_INFOSTORE=231,
    APP_ID_INGRES_NET=232,
    APP_ID_IPCOMP=233,
    APP_ID_IPIP=234,
    APP_ID_IP=235,
    APP_ID_IPSEC=236,
    APP_ID_IPV6=237,
    APP_ID_IPX=238,
    APP_ID_IRC=239,
    APP_ID_IRCU=240,
    APP_ID_IS_99=241,
    APP_ID_ISAKMP=242,
    APP_ID_ISCHAT=243,
    APP_ID_ISI_GRAPHICS=244,
    APP_ID_ISOIP=245,
    APP_ID_ISO_TSAP=246,
    APP_ID_JARGON=247,
    APP_ID_KASPERSKY=248,
    APP_ID_KBLOCK=249,
    APP_ID_KFTPDATA=250,
    APP_ID_KFTP=251,
    APP_ID_KIS=252,
    APP_ID_KNETCMP=253,
    APP_ID_KRYPTOLAN=254,
    APP_ID_KTELNET=255,
    APP_ID_KUGOO=256,
    APP_ID_KVM=257,
    APP_ID_KWDB=258,
    APP_ID_L2TP=259,
    APP_ID_LA_MAINT=260,
    APP_ID_LAST_FM=261,
    APP_ID_LEGENT=262,
    APP_ID_LINK=263,
    APP_ID_LIVE365=264,
    APP_ID_LIVEMEETING=265,
    APP_ID_LIVESTATION=266,
    APP_ID_LLMNR=267,
    APP_ID_LOCUS_CONN=268,
    APP_ID_LOCUS_MAP=269,
    APP_ID_LOGMEIN=270,
    APP_ID_LSARPC=271,
    APP_ID_MAFIAWARS=272,
    APP_ID_MAGENTA_LOGIC=273,
    APP_ID_MAGICJACK=274,
    APP_ID_MAILQ=275,
    APP_ID_MANET=276,
    APP_ID_MAPI=277,
    APP_ID_MASQDIALER=278,
    APP_ID_MATIP=279,
    APP_ID_MCAFEE=280,
    APP_ID_MC_FTP=281,
    APP_ID_MCIDAS=282,
    APP_ID_MCK_IVPIP=283,
    APP_ID_MEDIAFIRE=285,
    APP_ID_MEEBO=286,
    APP_ID_MEETING_MAKER=287,
    APP_ID_META5=288,
    APP_ID_METAGRAM=289,
    APP_ID_MF_COBOL=290,
    APP_ID_MFTP=291,
    APP_ID_MINI_SQL=292,
    APP_ID_MIT_ML_DEV=293,
    APP_ID_MIT_SPOOLER=294,
    APP_ID_MIXI=295,
    APP_ID_MOBILEIP=296,
    APP_ID_MORTGAGEWARE=297,
    APP_ID_MPLS_MULTICAST=298,
    APP_ID_MPLS_UNICAST=299,
    APP_ID_MPM=300,
    APP_ID_MPP=301,
    APP_ID_MPTN=302,
    APP_ID_MS_CRS=303,
    APP_ID_MSDN=304,
    APP_ID_MSG=305,
    APP_ID_MSMQ=306,
    APP_ID_MSNP=307,
    APP_ID_MSN=308,
    APP_ID_MS_OLAP=309,
    APP_ID_MS_ONLINE=310,
    APP_ID_MSP=311,
    APP_ID_MS_SQL=312,
    APP_ID_MTA=313,
    APP_ID_MULTIPLEX=314,
    APP_ID_MUMPS=315,
    APP_ID_MYSPACE_CHAT=316,
    APP_ID_MYSPACE=317,
    APP_ID_NAMP=318,
    APP_ID_NAPSTER=319,
    APP_ID_NCED=320,
    APP_ID_NCLD=321,
    APP_ID_NDS_AUTH=322,
    APP_ID_NETBIOS=323,
    APP_ID_NETINFO=324,
    APP_ID_NETLOGON=325,
    APP_ID_NETMEETING=326,
    APP_ID_NETSC=327,
    APP_ID_NETSCOUT=328,
    APP_ID_NETWARE=329,
    APP_ID_NFA=330,
    APP_ID_NFS=331,
    APP_ID_NI_FTP=332,
    APP_ID_NI_MAIL=333,
    APP_ID_NIP=334,
    APP_ID_NNSP=335,
    APP_ID_NOVABACKUP=336,
    APP_ID_NPP=337,
    APP_ID_NSIIOPS=338,
    APP_ID_NSRMP=339,
    APP_ID_NSS=340,
    APP_ID_NSSTP=341,
    APP_ID_NXEDIT=342,
    APP_ID_NXTSTEP=343,
    APP_ID_OCBINDER=344,
    APP_ID_OCSERVER=345,
    APP_ID_OCS=346,
    APP_ID_ODMR=347,
    APP_ID_OFTP=348,
    APP_ID_OFTPS=349,
    APP_ID_ONMUX=350,
    APP_ID_OPALIS_ROBOT=351,
    APP_ID_OPENPORT=352,
    APP_ID_OPENVPN=353,
    APP_ID_ORACLE_SQLNET=355,
    APP_ID_ORKUT=356,
    APP_ID_OSCAR=357,
    APP_ID_OSUNMS=358,
    APP_ID_PANDA=359,
    APP_ID_PARTYPOKER=360,
    APP_ID_PAWSERV=361,
    APP_ID_PCMAIL=362,
    APP_ID_PDAP=363,
    APP_ID_PERSONALLINK=364,
    APP_ID_PFTP=365,
    APP_ID_PIM=366,
    APP_ID_PIP=367,
    APP_ID_PKIX_TIMESTAMP=368,
    APP_ID_PLAXO=369,
    APP_ID_POP2=370,
    APP_ID_PPLIVE=371,
    APP_ID_PPP_DISCOVERY=372,
    APP_ID_PPP_SESSION=373,
    APP_ID_PPSTREAM=374,
    APP_ID_PPTP=375,
    APP_ID_PRINTSRV=376,
    APP_ID_PROFILE=377,
    APP_ID_PROSPERO=378,
    APP_ID_PTP=379,
    APP_ID_PUP=380,
    APP_ID_PWDGEN=381,
    APP_ID_QBIK=382,
    APP_ID_QFT=383,
    APP_ID_QMTP=384,
    APP_ID_QOTD=385,
    APP_ID_QQ=386,
    APP_ID_QUICKTIME=387,
    APP_ID_RAP=388,
    APP_ID_RARP=389,
    APP_ID_REMAIL=390,
    APP_ID_REMOTE_JOB_SERVICE=391,
    APP_ID_REMOTE_TELNET=392,
    APP_ID_RESCAP=393,
    APP_ID_RFR=394,
    APP_ID_RIP=395,
    APP_ID_RIS=396,
    APP_ID_RJE=397,
    APP_ID_RLOGIN=398,
    APP_ID_RLP=399,
    APP_ID_RMT=400,
    APP_ID_RPC2PMAP=401,
    APP_ID_RRP=402,
    APP_ID_RSH=403,
    APP_ID_RSVD=404,
    APP_ID_RSVP=405,
    APP_ID_RSVP_TUNNEL=406,
    APP_ID_RTCP=407,
    APP_ID_RTSPS=408,
    APP_ID_SAMR=409,
    APP_ID_SAP_HOSTCONTROL=410,
    APP_ID_SBNTBCST=411,
    APP_ID_SCOI2DLG=412,
    APP_ID_SCSI_ST=413,
    APP_ID_SCTP=414,
    APP_ID_SECOND_LIFE=415,
    APP_ID_SECURSIGHT=416,
    APP_ID_SEMANTIX=417,
    APP_ID_SEND=418,
    APP_ID_SET=419,
    APP_ID_SFTP=420,
    APP_ID_SGCP=421,
    APP_ID_SGMP=422,
    APP_ID_SHAREPOINT=423,
    APP_ID_SHRINKWRAP=424,
    APP_ID_SILVERPLATTER=425,
    APP_ID_SIP=426,
    APP_ID_SKYPE_AUTH=428,
    APP_ID_SKYPE_OUT=429,
    APP_ID_SKYPE_P2P=430,
    APP_ID_SKYPE_PROBE=431,
    APP_ID_SLINGBOX=432,
    APP_ID_SMAKYNET=433,
    APP_ID_SMART_SDP=434,
    APP_ID_SMPTE=435,
    APP_ID_SMSP=436,
    APP_ID_SMUX=437,
    APP_ID_SNA_GATEWAY=438,
    APP_ID_SNET=439,
    APP_ID_SNPP=440,
    APP_ID_SOFTPC=441,
    APP_ID_SOULSEEK=442,
    APP_ID_SQL_SERVICES=443,
    APP_ID_SRC=444,
    APP_ID_SRMP=445,
    APP_ID_SRS_SEND=446,
    APP_ID_SSDP=447,
    APP_ID_STATIONLAUNCHER=448,
    APP_ID_STATSRV=449,
    APP_ID_STORE_ADMIN=450,
    APP_ID_SU_MIT_TELNET=451,
    APP_ID_SUN_RPC=452,
    APP_ID_SUPDUP=453,
    APP_ID_SUPERNEWS=454,
    APP_ID_SURMEAS=455,
    APP_ID_SVRLOC=456,
    APP_ID_SWIFT_RVFP=457,
    APP_ID_SYBASE_SQL=458,
    APP_ID_SYMANTEC_SYSTEM_CENTER=459,
    APP_ID_SYNOPTICS=460,
    APP_ID_SYSATT=461,
    APP_ID_SYSLOG=462,
    APP_ID_SYSTAT=463,
    APP_ID_TACACS=464,
    APP_ID_TAC_NEWS=465,
    APP_ID_TCPMUX=466,
    APP_ID_TCP=467,
    APP_ID_TEXAR=468,
    APP_ID_TFTPS=469,
    APP_ID_TIME=470,
    APP_ID_TMOBILE=471,
    APP_ID_TOBIT=472,
    APP_ID_TOR=473,
    APP_ID_TRIPWIRE=474,
    APP_ID_TUMBLR=475,
    APP_ID_UAAC=476,
    APP_ID_UARPS=477,
    APP_ID_UC4=478,
    APP_ID_UDP=479,
    APP_ID_UIS=480,
    APP_ID_ULSTPROC=481,
    APP_ID_UMA=482,
    APP_ID_UNICENTER=483,
    APP_ID_UNIDATA_LDM=484,
    APP_ID_UNIFY=485,
    APP_ID_UPS=486,
    APP_ID_USENET=487,
    APP_ID_UTMP=489,
    APP_ID_UUCP=490,
    APP_ID_VCHAT=491,
    APP_ID_VETTCP=492,
    APP_ID_VMNET=493,
    APP_ID_VMPWSCS=494,
    APP_ID_VONAGE=495,
    APP_ID_VSLMP=496,
    APP_ID_VUZE=497,
    APP_ID_WCCP=498,
    APP_ID_WEBFILTER=499,
    APP_ID_WEBLOGIC=500,
    APP_ID_WIKIPEDIA=501,
    APP_ID_WINDOWS_LIVE=502,
    APP_ID_WINDOWS_MEDIA=503,
    APP_ID_WINNY=504,
    APP_ID_WINS=505,
    APP_ID_WORDPRESS=506,
    APP_ID_WORLD_OF_WARCRAFT=507,
    APP_ID_X_224=508,
    APP_ID_X_25=509,
    APP_ID_XANGA=510,
    APP_ID_XBONE=511,
    APP_ID_XBOX_LIVE=512,
    APP_ID_XDMCP=513,
    APP_ID_XFER=514,
    APP_ID_XMPP=515,
    APP_ID_XNS_AUTHENTICATION=516,
    APP_ID_XNS_CLEARINGHOUSE=517,
    APP_ID_XNS_MAIL=518,
    APP_ID_XNS_TIME=519,
    APP_ID_XNS=520,
    APP_ID_XYPLEX=521,
    APP_ID_YAHOO_GAMES=522,
    APP_ID_YAHOO_MSG_FILE_TRANSFER=523,
    APP_ID_YAHOO=524,
    APP_ID_Z3950=525,
    APP_ID_ZANNET=526,
    APP_ID_ZEBRA=527,
    APP_ID_ZOHO=528,
    APP_ID_ZOHO_CHAT=529,
    APP_ID_ZOHO_MAIL=530,
    APP_ID_ZOHO_SHARE=531,
    APP_ID_ZOHO_WIKI=532,
    APP_ID_ZYNGA=533,
    APP_ID_ZYNGA_POKER=534,

    APP_ID_1_800_FLOWERS=535,
    APP_ID_100BAO=536,
    APP_ID_2CHANNEL=537,
    APP_ID_6_PM=538,
    APP_ID_ACE_HARDWARE_CORPORATION=539,
    APP_ID_ADDICTING_GAMES=540,
    APP_ID_ADOBE_UPDATE=541,
    APP_ID_ADORAMA=542,
    APP_ID_AIM_EXPRESS=543,
    APP_ID_AMERICAN_EXPRESS=544,
    APP_ID_ANDROID_BROWSER=545,
    APP_ID_AOL_EMAIL=546,
    APP_ID_AOL_INSTANT_MESSENGER=547,
    APP_ID_AOL_SOFTWARE=549,
    APP_ID_APPLE_EMAIL=550,
    APP_ID_APPLE_STORE=551,
    APP_ID_ARCSERVE=552,
    APP_ID_ARES=553,
    APP_ID_ARGOS=554,
    APP_ID_ATOM=555,
    APP_ID_ATOM_COM=556,
    APP_ID_AUTOBLOG=557,
    APP_ID_AUTOTRADER_COM=558,
    APP_ID_B_H_PHOTO_VIDEO=559,
    APP_ID_BANK_OF_AMERICA=560,
    APP_ID_BARNES_AND_NOBLE=561,
    APP_ID_BARNEYS_NEW_YORK=562,
    APP_ID_BASECAMP=563,
    APP_ID_BATTLENET=564,
    APP_ID_BEARSHARE=565,
    APP_ID_BEBO=566,
    APP_ID_BEST_BUY=567,
    APP_ID_BEWEEVEE=568,
    APP_ID_BGP=569,
    APP_ID_BITTORRENT_CLIENT=570,
    APP_ID_BITTRACKER_CLIENT=571,
    APP_ID_BLACK_DECKER_CORPORATION=572,
    APP_ID_BLACKBERRY_BROWSER=573,
    APP_ID_BLIP_TV=574,
    APP_ID_BLOCKBUSTER=575,
    APP_ID_BLOGGER=576,
    APP_ID_BLOOMINGDALES=577,
    APP_ID_BLUE_NILE=578,
    APP_ID_BLUEFLY=579,
    APP_ID_BOX_NET=580,
    APP_ID_CAMERASDIRECT_COM_AU=581,
    APP_ID_CAPITAL_ONE=582,
    APP_ID_CAR_AND_DRIVER=583,
    APP_ID_CARMAX=584,
    APP_ID_CDISCOUNT=585,
    APP_ID_CHARACTER_GENERATOR=586,
    APP_ID_CHASE=587,
    APP_ID_CHEAPTICKETS=588,
    APP_ID_CHROME=589,
    APP_ID_CITI=590,
    APP_ID_CITY_SPORTS=591,
    APP_ID_COLLABEDIT=592,
    APP_ID_COSTCO=593,
    APP_ID_CRAIGSLIST=594,
    APP_ID_CRUTCHFIELD=595,
    APP_ID_CURL=596,
    APP_ID_CVS=597,
    APP_ID_CVS_PSERVER=598,
    APP_ID_DAAP=599,
    APP_ID_DAILYMOTION=600,
    APP_ID_DAVID_JONES=601,
    APP_ID_DB2=602,
    APP_ID_DCE_RPC=603,
    APP_ID_DEALS_DIRECT=604,
    APP_ID_DELICIOUS=605,
    APP_ID_DELL=606,
    APP_ID_DESTRUCTOID=607,
    APP_ID_DEVIANTART=608,
    APP_ID_DHCP=609,
    APP_ID_DHCPV6_SERVER=610,
    APP_ID_DICKS_SPORTING_GOODS=611,
    APP_ID_DIIGO=612,
    APP_ID_DILLARDS=613,
    APP_ID_DISCARD=614,
    APP_ID_DISCOVER=615,
    APP_ID_DNP3=616,
    APP_ID_DNS=617,
    APP_ID_DRDA=618,
    APP_ID_DROPBEAR=619,
    APP_ID_DRUGSTORE_COM=620,
    APP_ID_E_TRADE=621,
    APP_ID_EDMUNDS_COM=622,
    APP_ID_EDONKEY=623,
    APP_ID_EUDORA=624,
    APP_ID_EUDORA_PRO=625,
    APP_ID_EVOLUTION=626,
    APP_ID_EXEC=627,
    APP_ID_EXPEDIA=628,
    APP_ID_FACEBOOK=629,
    APP_ID_FACEBOOK_CHAT=630,
    APP_ID_FACEBOOK_COMMENT=631,
    APP_ID_FACEBOOK_GAME_PREMIER_FOOTBALL=632,
    APP_ID_FACEBOOK_READ_EMAIL=633,
    APP_ID_FACEBOOK_SEND_EMAIL=634,
    APP_ID_FACEBOOK_STATUS_UPDATE=635,
    APP_ID_FIDELITY=636,
    APP_ID_FINGER=637,
    APP_ID_FIREFOX=638,
    APP_ID_FLASH_VIDEO=639,
    APP_ID_FNAC=640,
    APP_ID_FOXY=641,
    APP_ID_FRIENDSTER=642,
    APP_ID_FRYS_ELECTRONICS=643,
    APP_ID_FTD=644,
    APP_ID_FTP=645,
    APP_ID_G4=646,
    APP_ID_GAME_INFORMER=647,
    APP_ID_GAMESPOT=648,
    APP_ID_GAMESPY=649,
    APP_ID_GAMESTOP=650,
    APP_ID_GAMETRAILERS=651,
    APP_ID_GAWKER=652,
    APP_ID_GENERIC=653,
    APP_ID_GIFT=654,
    APP_ID_GMAIL=655,
    APP_ID_GNUCLEUS=656,
    APP_ID_GNUCLEUSLAN=657,
    APP_ID_GNUTELLA=658,
    APP_ID_GNUTELLA2=659,
    APP_ID_GOOGLE_ANALYTICS=660,
    APP_ID_GOOGLE_CALENDAR=661,
    APP_ID_GOOGLE_DESKTOP=662,
    APP_ID_GOOGLE_NEWS=663,
    APP_ID_GOOGLE_PRODUCT_SEARCH=664,
    APP_ID_GOOGLE_SAFEBROWSING=665,
    APP_ID_GOOGLE_TOOLBAR=1146,
    APP_ID_GOPHER=667,
    APP_ID_GTK_GNUTELLA=668,
    APP_ID_HAIKU_LEARNING_SYSTEMS=669,
    APP_ID_HOME_DEPOT=670,
    APP_ID_HOSTNAME_SERVER=671,
    APP_ID_GOOGLE_EARTH=672,
    APP_ID_HOTLINE=673,
    APP_ID_HOUSE_OF_FRASER=674,
    APP_ID_HSBC=675,
    APP_ID_HTTP=676,
    APP_ID_HULU=677,
    APP_ID_IBM_APP=678,
    APP_ID_ICQ=679,
    APP_ID_IGN=680,
    APP_ID_ILOVEIM=681,
    APP_ID_IMAGESHACK=682,
    APP_ID_IMAP=683,
    APP_ID_IMGUR=684,
    APP_ID_IMO_IM=685,
    APP_ID_INTERNET_EXPLORER=686,
    APP_ID_IRCD=687,
    APP_ID_ITU_H_323=688,
    APP_ID_ITUNES=689,
    APP_ID_J_C_PENNEY=690,
    APP_ID_J_R=691,
    APP_ID_JABBER=692,
    APP_ID_JALOPNIK=693,
    APP_ID_JAVA_RMI=694,
    APP_ID_JIRA=695,
    APP_ID_JOYSTIQ=696,
    APP_ID_KAD=697,
    APP_ID_KAY_JEWELERS=698,
    APP_ID_KAZAA=699,
    APP_ID_KMAIL=700,
    APP_ID_KERBEROS=701,
    APP_ID_KMART=702,
    APP_ID_KOGAN_TECHNOLOGIES=703,
    APP_ID_KOHLS=704,
    APP_ID_KONGREGATE=705,
    APP_ID_KONQUEROR=706,
    APP_ID_KOTAKU=707,
    APP_ID_LAUNCHPAD=708,
    APP_ID_LBPS=709,
    APP_ID_LDAP=710,
    APP_ID_LIMELIGHT=711,
    APP_ID_LIMEWIRE=712,
    APP_ID_LINKEDIN=713,
    APP_ID_LINKEDIN_JOB_SEARCH=714,
    APP_ID_LINUXCONF=715,
    APP_ID_LIVEJOURNAL=716,
    APP_ID_LOGIN=717,
    APP_ID_LOKALISTEN=718,
    APP_ID_LORD_TAYLOR=719,
    APP_ID_LOTUS_NOTES=720,
    APP_ID_LOVEFILM=721,
    APP_ID_LOWES=722,
    APP_ID_LSH=723,
    APP_ID_MANOLITO=724,
    APP_ID_MEGACO=725,
    APP_ID_MEGAVIDEO=726,
    APP_ID_MENARDS=727,
    APP_ID_METACAFE=728,
    APP_ID_METAFILTER=729,
    APP_ID_MGCP=730,
    APP_ID_MICROSOFT_UPDATE=731,
    APP_ID_MICROSOFT_WINDOWS_MESSENGER=732,
    APP_ID_MINUS=733,
    APP_ID_MIXX=734,
    APP_ID_MMS=735,
    APP_ID_SAFARI_MOBILE=736,
    APP_ID_MODBUS=737,
    APP_ID_MORGAN_STANLEY=738,
    APP_ID_MORPHEUS=739,
    APP_ID_MOVENETWORKS=740,
    APP_ID_MP4=741,
    APP_ID_MPEG=742,
    APP_ID_MSN_MESSENGER=743,
    APP_ID_MSN_MESSENGER_MAC=744,
    APP_ID_MUTE=745,
    APP_ID_MUTT=746,
    APP_ID_MYSQL=747,
    APP_ID_MYUDUTU=748,
    APP_ID_NCP=749,
    APP_ID_NECKERMANN=750,
    APP_ID_NEIMAN_MARCUS=751,
    APP_ID_NESSUS=752,
    APP_ID_NETBIOS_DGM=753,
    APP_ID_NETBIOS_NS=754,
    APP_ID_NETBIOS_SSN=755,
    APP_ID_NETFLIX=756,
    APP_ID_NETLOG=757,
    APP_ID_NETVIBES=758,
    APP_ID_NEWEGG=759,
    APP_ID_NEWSNOW=760,
    APP_ID_NEWSVINE=761,
    APP_ID_NICO_NICO_DOUGA=762,
    APP_ID_NNTP=763,
    APP_ID_NORSDTROM=764,
    APP_ID_NSPLAYER=765,
    APP_ID_NTALK=766,
    APP_ID_NTP=767,
    APP_ID_OFFICE_DEPOT=768,
    APP_ID_OFFICEMAX=769,
    APP_ID_OO_COM_AU=770,
    APP_ID_OPENSSH=771,
    APP_ID_OPERATING_SYSTEM=772,
    APP_ID_ORACLE_DATABASE=773,
    APP_ID_ORACLE_TNS=774,
    APP_ID_ORBITZ=775,
    APP_ID_OUTLOOK=776,
    APP_ID_OUTLOOK_EXPRESS=777,
    APP_ID_OVERSTOCK_COM=778,
    APP_ID_PANDORA=779,
    APP_ID_PC_DUO=780,
    APP_ID_PCANYWHERE=781,
    APP_ID_PEERCAST=782,
    APP_ID_PEERENABLER=783,
    APP_ID_PHOTOBUCKET=784,
    APP_ID_PICASA=785,
    APP_ID_POCO=786,
    APP_ID_POGO=787,
    APP_ID_POP3=788,
    APP_ID_POPCAP_GAMES=789,
    APP_ID_POPURLS=790,
    APP_ID_POSTGRESQL=791,
    APP_ID_PRICELINE_COM=792,
    APP_ID_PROFLOWERS=793,
    APP_ID_PUTTY=794,
    APP_ID_QUAKE=795,
    APP_ID_QUICKFLIX=796,
    APP_ID_QUILL_CORPORATION=797,
    APP_ID_QVC=798,
    APP_ID_QZONE=799,
    APP_ID_RADIUS=800,
    APP_ID_RADIUS_ACCT=801,
    APP_ID_RAPIDSHARE=802,
    APP_ID_RDP=803,
    APP_ID_REDDIT=804,
    APP_ID_REDMINE=805,
    APP_ID_REI=806,
    APP_ID_REMOTE_DESKTOP_CLIENT=807,
    APP_ID_RENREN=808,
    APP_ID_REVOLVECLOTHING=809,
    APP_ID_RONA=810,
    APP_ID_RSS=811,
    APP_ID_RTMP=812,
    APP_ID_RTP=813,
    APP_ID_RTSP=814,
    APP_ID_SAFARI=815,
    APP_ID_SAKS_FIFTH_AVENUE=816,
    APP_ID_SAMS_CLUB=817,
    APP_ID_SCHUELERVZ=818,
    APP_ID_SCHWAB=819,
    APP_ID_SCOTTRADE=820,
    APP_ID_SEARS=821,
    APP_ID_SHAREAZA=822,
    APP_ID_SHELL=823,
    APP_ID_SHOCKWAVE=824,
    APP_ID_SHOPLET=825,
    APP_ID_SHOPNBC=826,
    APP_ID_SHOPPING_HP_COM=827,
    APP_ID_SHOPSTYLE=828,
    APP_ID_SHOUTCAST_RADIO=829,
    APP_ID_SHOWCLIX=830,
    APP_ID_SHOWDOCUMENT=831,
    APP_ID_SKYPE=832,
    APP_ID_SKYPE_MAC=833,
    APP_ID_SLASHDOT=834,
    APP_ID_SLOW=835,
    APP_ID_SMTP=836,
    APP_ID_SNMP=837,
    APP_ID_SNMP_TRAP=838,
    APP_ID_SOCKS=839,
    APP_ID_SORIBADA=840,
    APP_ID_SPIN_DE=841,
    APP_ID_SPORTS_AUTHORITY=842,
    APP_ID_SQL_SERVER=843,
    APP_ID_SQUID=844,
    APP_ID_SQUIRREL_EMAIL=845, /*deprecated */
    APP_ID_SSH=846,
    APP_ID_SSL=847,
    APP_ID_STAPLES=848,
    APP_ID_STAYFRIENDS=849,
    APP_ID_STUBHUB=850,
    APP_ID_STUDIVZ=851,
    APP_ID_STUMBLEUPON=852,
    APP_ID_STUN=853,
    APP_ID_SWAROVSKI=854,
    APP_ID_T_ROWE_PRICE=855,
    APP_ID_TABULAR_DATA_STREAM_TDS=856,
    APP_ID_TALK=857,
    APP_ID_TARGET=858,
    APP_ID_TCHIBO=859,
    APP_ID_TD_AMERITRADE=860,
    APP_ID_TELNET=861,
    APP_ID_TFTP=862,
    APP_ID_THE_GAP=863,
    APP_ID_THE_SHARPER_IMAGE=864,
    APP_ID_THINKGEEK=865,
    APP_ID_THUNDERBIRD=866,
    APP_ID_TICKETMASTER=867,
    APP_ID_TICKETS_COM=868,
    APP_ID_TICKETSNOW=869,
    APP_ID_TIFFANY_CO=870,
    APP_ID_TIGER_DIRECT=871,
    APP_ID_TIMBUKTU=872,
    APP_ID_TINYPIC=873,
    APP_ID_TIVOLI=874,
    APP_ID_TN3270=875,
    APP_ID_TOC=876,
    APP_ID_TOP_GEAR=877,
    APP_ID_TRAC=878,
    APP_ID_TRACEROUTE=879,
    APP_ID_TRAVELOCITY=880,
    APP_ID_TRIPADVISOR=881,
    APP_ID_TWITTER=882,
    APP_ID_URBAN_OUTFITTERS=883,
    APP_ID_USTREAM_TV=884,
    APP_ID_VANGUARD=885,
    APP_ID_VCOM=886,
    APP_ID_VEHIX=887,
    APP_ID_VENTE_PRIVEE_COM=888,
    APP_ID_VEOH=889,
    APP_ID_VERIZON_EMAIL=890,
    APP_ID_VIADEO=891,
    APP_ID_VICTORIAS_SECRET=892,
    APP_ID_VIMEO=893,
    APP_ID_VNC=894,
    APP_ID_VNC_RFB=895,
    APP_ID_VNC_SERVER_RFB=896,
    APP_ID_VOIP_RTP=897,
    APP_ID_VOIP_SIP=898,
    APP_ID_VOYAGES_SNCF_COM=899,
    APP_ID_WACHOVIA=900,
    APP_ID_WALMART=901,
    APP_ID_WAV=902,
    APP_ID_WEB_OF_TRUST=903,
    APP_ID_WEBDAV=904,
    APP_ID_WEBEX=905,
    APP_ID_WEBSPHERE_MQ=906,
    APP_ID_WELLS_FARGO=907,
    APP_ID_WER_KENNT_WEN=908,
    APP_ID_WGET=909,
    APP_ID_WINDOWS_LIVE_HOTMAIL=910,
    APP_ID_WINDOWS_LIVE_SKYDRIVE=911,
    APP_ID_WINDOWS_MEDIA_PLAYER=912,
    APP_ID_WINMX=913,
    APP_ID_WIZIQ=914,
    APP_ID_WMA=915,
    APP_ID_WMV=916,
    APP_ID_WOOT=917,
    APP_ID_WX=918,
    APP_ID_X_FONT_SERVER=919,
    APP_ID_X11=920,
    APP_ID_XBOX=921,
    APP_ID_XING=922,
    APP_ID_XM_RADIO_ONLINE=923,
    APP_ID_XUNLEI=924,
    APP_ID_XWINDOWS=925,
    APP_ID_YAHOO_VOICE=926,
    APP_ID_YET_ABC=927,
    APP_ID_YOUSENDIT=928,
    APP_ID_YOUTUBE=929,
    APP_ID_ZALES=930,
    APP_ID_ZAPPOS=931,
    APP_ID_ZIP_CA=932,
    APP_ID_ZOOOMR=933,
    APP_ID_YAHOO_MSG=936,
    APP_ID_YAHOOMAIL=946,
    APP_ID_YAHOO_TOOLBAR=947,
    APP_ID_RSYNC=1097,
    APP_ID_XSCPLS=1098,
    APP_ID_ROBUST_MPA=1100,
    APP_ID_VND_WAV=1101,
    APP_ID_GPP=1102,
    APP_ID_M4V=1103,
    APP_ID_X_WAV=1104,
    APP_ID_MPA=1105,
    APP_ID_MP4A=1106,
    APP_ID_AOL_NETSCAPE=1107,
    APP_ID_SMTP_IMO=1108,
    APP_ID_DDM_SSL=1111,
    APP_ID_SMTPS=1112,
    APP_ID_NNTPS=1113,
    APP_ID_IMAPS=1114,
    APP_ID_SSHELL=1115,
    APP_ID_LDAPS=1116,
    APP_ID_TELNETS=1117,
    APP_ID_IRCS=1118,
    APP_ID_POP3S=1119,
    APP_ID_MSFT_GC_SSL=1120,
    APP_ID_SF_APPLIANCE_MGMT=1121,
    APP_ID_HTTPS=1122,
    APP_ID_SKYPE_TUNNELING=1126,
    APP_ID_ASPROXY=1145,
    APP_ID_OPERA=1288,
    APP_ID_SSL_CLIENT=1296,
    APP_ID_MDNS=1755,
    APP_ID_APPLE_CORE_MEDIA=2253,

    APP_ID_UNKNOWN_UI = 65535  /*This causes the UI to render Unknown instead of pending or blank */
} appIdEnum;

#endif  /* __APP_ID_H__ */

