#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function FrontEndMap-NEW.FrontEndMap-NEW_C.OnLoaded_1A4CED1E46EF51B6EDF1F79DA4FAFF65
	 */
	struct AFrontEndMap_NEW_C_OnLoaded_1A4CED1E46EF51B6EDF1F79DA4FAFF65_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndMap-NEW.FrontEndMap-NEW_C.OnLoaded_02F90FA24A0CBC8E5F1202960DCC2151
	 */
	struct AFrontEndMap_NEW_C_OnLoaded_02F90FA24A0CBC8E5F1202960DCC2151_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndMap-NEW.FrontEndMap-NEW_C.ReceiveBeginPlay
	 */
	struct AFrontEndMap_NEW_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FrontEndMap-NEW.FrontEndMap-NEW_C.ShowMenu
	 */
	struct AFrontEndMap_NEW_C_ShowMenu_Params
	{	};

	/**
	 * Function FrontEndMap-NEW.FrontEndMap-NEW_C.SetupCharacters
	 */
	struct AFrontEndMap_NEW_C_SetupCharacters_Params
	{	};

	/**
	 * Function FrontEndMap-NEW.FrontEndMap-NEW_C.EquipFirearm
	 */
	struct AFrontEndMap_NEW_C_EquipFirearm_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndMap-NEW.FrontEndMap-NEW_C.SetupNVG
	 */
	struct AFrontEndMap_NEW_C_SetupNVG_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndMap-NEW.FrontEndMap-NEW_C.BindOnLoadingScreenEvent
	 */
	struct AFrontEndMap_NEW_C_BindOnLoadingScreenEvent_Params
	{	};

	/**
	 * Function FrontEndMap-NEW.FrontEndMap-NEW_C.OnLoadingScreenEvent_Event
	 */
	struct AFrontEndMap_NEW_C_OnLoadingScreenEvent_Event_Params
	{
	public:
		class FName                                                Event;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndMap-NEW.FrontEndMap-NEW_C.HideStartupScreen
	 */
	struct AFrontEndMap_NEW_C_HideStartupScreen_Params
	{	};

	/**
	 * Function FrontEndMap-NEW.FrontEndMap-NEW_C.OnKitAsssetListLoaded_Event
	 */
	struct AFrontEndMap_NEW_C_OnKitAsssetListLoaded_Event_Params
	{
	public:
		TArray<class UObject*>                                     LoadedAssets;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function FrontEndMap-NEW.FrontEndMap-NEW_C.ReceiveEndPlay
	 */
	struct AFrontEndMap_NEW_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrontEndMap-NEW.FrontEndMap-NEW_C.PlayIdles
	 */
	struct AFrontEndMap_NEW_C_PlayIdles_Params
	{	};

	/**
	 * Function FrontEndMap-NEW.FrontEndMap-NEW_C.ExecuteUbergraph_FrontEndMap-NEW
	 */
	struct AFrontEndMap_NEW_C_ExecuteUbergraph_FrontEndMap_NEW_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
