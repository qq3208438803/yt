#ifndef __INC_METIN2_COMMON_DEFINES_H__
#define __INC_METIN2_COMMON_DEFINES_H__

//////////////////////////////////////////////////////////////////////////
// ### General Features ###
//#define ENABLE_QUEST_CATEGORY
#define ENABLE_D_NJGUILD
#define ENABLE_FULL_NOTICE
#define ENABLE_NEWSTUFF
#define ENABLE_PORT_SECURITY
#define ENABLE_BELT_INVENTORY_EX
#define ENABLE_USE_COSTUME_ATTR
#define RETURN_BACK_SYSTEM//返回系统
#define Tidy_SYSTEM//整理背包系统
#define NEW_PET_SYSTEM
#ifdef NEW_PET_SYSTEM
#define PET_MAX_LEVEL 105
#endif
//控制倍挂功能
#define __FIX__DOUBLE__SKILL__DMG__
// #define PVP_RESTRICTION_SYSTEM
// #define _NEW_ITEM_
// #define _NEW_ITEM_NEW
#define ENABLE_SEQUENCE_SYSTEM
#define ENABLE_MAP_ITEM_LIMIT
#define __BL_WEATHER_INFO__
#define ENABLE_ITEM_ATTR_COSTUME
#define ENABLE_CMD_WARP_IN_DUNGEON
#define ENABLE_KILL_STATISTICS
#define ENABLE_SPAWN_MOB_SYSTEM
enum eCommonDefines {
	EVENT_MOB_RATE_LIMIT = 1000, // 1000 default
	MAP_ALLOW_LIMIT = 64, // 32 default
	PRIV_EMPIRE_RATE_LIMIT = 1000, // 200 default
	PRIV_EMPIRE_TIME_LIMIT = 60*60*24*7, // 1 week default
	PRIV_GUILD_RATE_LIMIT = 50, // 50 default
	PRIV_GUILD_TIME_LIMIT = 60*60*24*7, // 1 week default
	PRIV_PLAYER_RATE_LIMIT = 100, // 100 default
	// DEAD_TIME_MAP = 41, //复活时间叠加地图区域限制
	RESET_DEAD_TIME_LIMIT = 60*60*24,//重置复活时间限制 24小时
	MAX_DEAD_TIME = 180,//最大叠加复活时间 470 -170 = 300 秒
	DS_REFINE_TIME_LIMIT = 1, //龙魂时间限制
	DO_REFINE_TIME_LIMIT  =1,//普通改良时间限制
	
	
	PET_SKILL_3_PRIV = 10,//宠物技能孔获得3个孔位的概率
	PET_SKILL_2_PRIV = 40,
	PET_SKILL_1_PRIV = 60,
};

inline bool IsDeadTimeMap(long mapIdx)
{
	switch(mapIdx)
	{
		case 41:
		case 1:
		case 21:
			return true;
			break;
		
		default :
			return false;
			break;
	}
	
}
// ### General Features ###
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// ### CommonDefines Systems ###
#define ENABLE_WOLFMAN_CHARACTER
#ifdef ENABLE_WOLFMAN_CHARACTER
#define USE_MOB_BLEEDING_AS_POISON
#define USE_MOB_CLAW_AS_DAGGER
// #define USE_ITEM_BLEEDING_AS_POISON
//#define USE_ITEM_CLAW_AS_DAGGER
#define USE_WOLFMAN_STONES
#define USE_WOLFMAN_BOOKS
#endif
#define TOURNAMENT_PVP_SYSTEM
#define ENABLE_PLAYER_PER_ACCOUNT5
#define ENABLE_DICE_SYSTEM
#define ENABLE_EXTEND_INVEN_SYSTEM //4库存背包
// #define ENABLE_OPFEN   //开启为新区核心 关闭为总区核心
#define ENABLE_COSTUME_DISAPPEAR //开启时装时间到期不消失，如果佩戴时间且时间到期，自动掉落在背包
// #define ENABLE_NEW_GIF_SYSTEM  //每日签到系统
// #define BLOCK_WAIT_DMG
// #define ENABLE_IMAGE_SYSTEM  //称号图形系统
//#define ENABLE_NEW_EXP
#define	ENABLE_MOUNT_COSTUME_SYSTEM
// #define __MOUNT_SYSTEM__
//#define __MS_BUG_WITH_MAPS__
#define ENABLE_WEAPON_COSTUME_SYSTEM
#define __7AND8TH_SKILLS__
//#define ENABLE_ACCE_COSTUME_SYSTEM
#define OPEN_CARD
#define ENABLE_VIEW_EQUIPMENT_COST

#define ENABLE_COSTUME_HIDE_SYSTEM
#define __SEND_TARGET_INFO__
// #define ENABLE_HAVE_FLAG
// #define ENABLE_DS_CHANGE_ATTR
//#define ENABLE_MAGIC_REDUCTION_SYSTEM
//#ifdef ENABLE_MAGIC_REDUCTION_SYSTEM
//#define USE_MAGIC_REDUCTION_STONES
//#endif
// ### CommonDefines Systems ###
//////////////////////////////////////////////////////////////////////////

#define __DUNGEON_FOR_GUILD__
#ifdef __DUNGEON_FOR_GUILD__
	#define __MELEY_LAIR_DUNGEON__
	#ifdef __MELEY_LAIR_DUNGEON__
		#define __DESTROY_INFINITE_STATUES_GM__
		#define __LASER_EFFECT_ON_75HP__
		#define __LASER_EFFECT_ON_50HP__
	#endif
#endif

#define WJ_COMBAT_ZONE // Enable the combat zone
#define WJ_COMBAT_ZONE_HIDE_INFO_USER // If you have this enabled on server, players can't use chat and whisper on combat zone map. (Disable with "//")


#define ENABLE_HIDE_COSTUME_SYSTEM
#define ENABLE_HIDE_COSTUME_SYSTEM_ACCE
#define ENABLE_HIDE_COSTUME_SYSTEM_WEAPON_COSTUME
// #define ENABLE_HIDE_COSTUME_SYSTEM_TRANSMUTACION
//Find on end of file #endif and add before

/* OFFLINE SHOPS */
#define OFFLINE_SHOP // Offline shops system
#define GIFT_SYSTEM // gift system enable
//#define FULL_YANG // Enable support for yang type long long
#define SHOP_TIME_REFRESH 1*60 // time for cycle checking older shops
#define SHOP_BLOCK_GAME99 //Blocking create shops on channel 99
//#define SHOP_DISTANCE // Show shops in pos distance like WoM2
#define SHOP_AUTO_CLOSE //Enable auto closing shop after sell last item
#define SHOP_ONLY_ALLOWED_INDEX //Enable limiting for other map index which is not defined in player.shop_limit
//#define SHOP_HIDE_NAME // Enable hidding shop npc names like "Player's shop"
#define SHOP_GM_PRIVILEGES GM_IMPLEMENTOR //Minimum GM privileges to using Shop GM Panel

#define ENABLE_TRIPLE_START
#define __SASH_SYSTEM__
#define __ATTR_TRANSFER_SYSTEM__
#define ENABLE_LOGIN_GIF  //一键上线属性
#define ENABLE_LXZS_SYSTEM //开启离线装饰系统
// #define ENABLE_NEW_MONSTER_EVENT
// #define ENABLE_GAYA_SYSTEM

//#define ENABLE_EXTEND_INVEN_SYSTEM1
// #define ENABLE_AUTO_MESSAGES
#define __IP_BAN__
//#define ENABLE_AGGREGATE_MONSTER_EFFECT


#define __VERSION_162__
#ifdef __VERSION_162__
	#define HEALING_SKILL_VNUM 265
#endif

// #define ENABLE_PENDANT
#ifdef ENABLE_PENDANT
#define ENABLE_ELEMENT_ADD
#define ENABLE_ELEMENT_TARGET
#define ENABLE_PENDANT_EX
#endif

#define ENABLE_DELETE_ITEMS_SYSTEM

//#define BIOLOGIST_SYSTEM//无名自动系统
//#define DUNGEON_INFO//地牢信息

//#define __KGO_ACP_PROTECTION__
// #define __ENABLE_AUTO_HUNTING_SYSTEM__

// #define ENABLE_12ZI
/*
#ifdef ENABLE_12ZI
#	define ENABLE_CHAT_MISSION_ALTERNATIVE //Only enable this if you have the error of unsupported operand type
#endif
*/
// #define ENABLE_NEW_MONSTER_EVENT_SECOND
#define ENABLE_TARGET_HP
// #define ENABLE_SUPPORT_SYSTEM
//#define ENABLE_TIME_ONLINE
// #define ENABLE_REFRESH_EVENT


#endif

