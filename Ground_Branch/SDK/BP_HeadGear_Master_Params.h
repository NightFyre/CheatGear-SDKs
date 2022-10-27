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
	 * Function BP_HeadGear_Master.BP_HeadGear_Master_C.GetHiddenComponents
	 */
	struct ABP_HeadGear_Master_C_GetHiddenComponents_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_HeadGear_Master.BP_HeadGear_Master_C.SetStrap
	 */
	struct ABP_HeadGear_Master_C_SetStrap_Params
	{
	public:
		int32_t                                                    Index1;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HeadGear_Master.BP_HeadGear_Master_C.DecodeKit
	 */
	struct ABP_HeadGear_Master_C_DecodeKit_Params
	{
	public:
		class UVaRestJsonObject*                                   ItemAsJson;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DecodedOwner;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGBItem*                                             DecodedParentItem;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HeadGear_Master.BP_HeadGear_Master_C.GetPatchName
	 */
	struct ABP_HeadGear_Master_C_GetPatchName_Params
	{
	public:
		class FString                                              PatchName;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HeadGear_Master.BP_HeadGear_Master_C.SetPatchName
	 */
	struct ABP_HeadGear_Master_C_SetPatchName_Params
	{
	public:
		class FString                                              PatchName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HeadGear_Master.BP_HeadGear_Master_C.UserConstructionScript
	 */
	struct ABP_HeadGear_Master_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_HeadGear_Master.BP_HeadGear_Master_C.OnAddedToCharacter
	 */
	struct ABP_HeadGear_Master_C_OnAddedToCharacter_Params
	{
	public:
		class AGBCharacter*                                        NewParentCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HeadGear_Master.BP_HeadGear_Master_C.OnRemovedFromCharacter
	 */
	struct ABP_HeadGear_Master_C_OnRemovedFromCharacter_Params
	{
	public:
		class AGBCharacter*                                        OldParentCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                OldSocketName;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HeadGear_Master.BP_HeadGear_Master_C.CharacterPlayDying_Event_1
	 */
	struct ABP_HeadGear_Master_C_CharacterPlayDying_Event_1_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HeadGear_Master.BP_HeadGear_Master_C.SetMorph
	 */
	struct ABP_HeadGear_Master_C_SetMorph_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HeadGear_Master.BP_HeadGear_Master_C.UpdateMorph
	 */
	struct ABP_HeadGear_Master_C_UpdateMorph_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HeadGear_Master.BP_HeadGear_Master_C.UpdateSkin
	 */
	struct ABP_HeadGear_Master_C_UpdateSkin_Params
	{	};

	/**
	 * Function BP_HeadGear_Master.BP_HeadGear_Master_C.OnHelmetSkinLoaded_Event
	 */
	struct ABP_HeadGear_Master_C_OnHelmetSkinLoaded_Event_Params
	{
	public:
		class UObject*                                             LoadedAsset;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HeadGear_Master.BP_HeadGear_Master_C.InventoryModifiersUpdated
	 */
	struct ABP_HeadGear_Master_C_InventoryModifiersUpdated_Params
	{	};

	/**
	 * Function BP_HeadGear_Master.BP_HeadGear_Master_C.ExecuteUbergraph_BP_HeadGear_Master
	 */
	struct ABP_HeadGear_Master_C_ExecuteUbergraph_BP_HeadGear_Master_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
