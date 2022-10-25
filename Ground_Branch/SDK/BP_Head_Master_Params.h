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
	 * Function BP_Head_Master.BP_Head_Master_C.GetHiddenComponents
	 */
	struct ABP_Head_Master_C_GetHiddenComponents_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Head_Master.BP_Head_Master_C.OnLoaded_9CBCE6A14A8702E4485FDFB6CF77D520
	 */
	struct ABP_Head_Master_C_OnLoaded_9CBCE6A14A8702E4485FDFB6CF77D520_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Head_Master.BP_Head_Master_C.SetOpacityMask
	 */
	struct ABP_Head_Master_C_SetOpacityMask_Params
	{
	public:
		class UTexture2D*                                          NewOpacityMask;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Head_Master.BP_Head_Master_C.UpdateSkin
	 */
	struct ABP_Head_Master_C_UpdateSkin_Params
	{	};

	/**
	 * Function BP_Head_Master.BP_Head_Master_C.OnAddedToCharacter
	 */
	struct ABP_Head_Master_C_OnAddedToCharacter_Params
	{
	public:
		class AGBCharacter*                                        NewParentCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Head_Master.BP_Head_Master_C.OnRemovedFromCharacter
	 */
	struct ABP_Head_Master_C_OnRemovedFromCharacter_Params
	{
	public:
		class AGBCharacter*                                        OldParentCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                OldSocketName;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Head_Master.BP_Head_Master_C.InventoryModifiersUpdated
	 */
	struct ABP_Head_Master_C_InventoryModifiersUpdated_Params
	{	};

	/**
	 * Function BP_Head_Master.BP_Head_Master_C.CreateArms
	 */
	struct ABP_Head_Master_C_CreateArms_Params
	{	};

	/**
	 * Function BP_Head_Master.BP_Head_Master_C.UpdateSkinMask
	 */
	struct ABP_Head_Master_C_UpdateSkinMask_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Head_Master.BP_Head_Master_C.OnMaskFaceAssetLoaded_Event
	 */
	struct ABP_Head_Master_C_OnMaskFaceAssetLoaded_Event_Params
	{
	public:
		class UObject*                                             LoadedAsset;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Head_Master.BP_Head_Master_C.ArmsCheck
	 */
	struct ABP_Head_Master_C_ArmsCheck_Params
	{	};

	/**
	 * Function BP_Head_Master.BP_Head_Master_C.ExecuteUbergraph_BP_Head_Master
	 */
	struct ABP_Head_Master_C_ExecuteUbergraph_BP_Head_Master_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QY5G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
