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
	 * Function BP_GBItemNightVisionComponent.BP_GBItemNightVisionComponent_C.OnLoaded_73A73D3347051DFE529A2385E351B7A7
	 */
	struct UBP_GBItemNightVisionComponent_C_OnLoaded_73A73D3347051DFE529A2385E351B7A7_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GBItemNightVisionComponent.BP_GBItemNightVisionComponent_C.UpdateLocalNightVision
	 */
	struct UBP_GBItemNightVisionComponent_C_UpdateLocalNightVision_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GBItemNightVisionComponent.BP_GBItemNightVisionComponent_C.OnEndViewTarget_Event_1
	 */
	struct UBP_GBItemNightVisionComponent_C_OnEndViewTarget_Event_1_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGBCharacter*                                        Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GBItemNightVisionComponent.BP_GBItemNightVisionComponent_C.UnbindOnEndViewTarget
	 */
	struct UBP_GBItemNightVisionComponent_C_UnbindOnEndViewTarget_Params
	{	};

	/**
	 * Function BP_GBItemNightVisionComponent.BP_GBItemNightVisionComponent_C.BindOnEndViewTarget
	 */
	struct UBP_GBItemNightVisionComponent_C_BindOnEndViewTarget_Params
	{	};

	/**
	 * Function BP_GBItemNightVisionComponent.BP_GBItemNightVisionComponent_C.LocalEnsureNightVisionMIDExists
	 */
	struct UBP_GBItemNightVisionComponent_C_LocalEnsureNightVisionMIDExists_Params
	{	};

	/**
	 * Function BP_GBItemNightVisionComponent.BP_GBItemNightVisionComponent_C.LocalNightVisionDisabled
	 */
	struct UBP_GBItemNightVisionComponent_C_LocalNightVisionDisabled_Params
	{	};

	/**
	 * Function BP_GBItemNightVisionComponent.BP_GBItemNightVisionComponent_C.LocaNightVisionEnabled
	 */
	struct UBP_GBItemNightVisionComponent_C_LocaNightVisionEnabled_Params
	{	};

	/**
	 * Function BP_GBItemNightVisionComponent.BP_GBItemNightVisionComponent_C.UpdatePointLights
	 */
	struct UBP_GBItemNightVisionComponent_C_UpdatePointLights_Params
	{	};

	/**
	 * Function BP_GBItemNightVisionComponent.BP_GBItemNightVisionComponent_C.SetEnablePointLights
	 */
	struct UBP_GBItemNightVisionComponent_C_SetEnablePointLights_Params
	{
	public:
		bool                                                       bEnablePointLights;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GBItemNightVisionComponent.BP_GBItemNightVisionComponent_C.ExecuteUbergraph_BP_GBItemNightVisionComponent
	 */
	struct UBP_GBItemNightVisionComponent_C_ExecuteUbergraph_BP_GBItemNightVisionComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2NZV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GBItemNightVisionComponent.BP_GBItemNightVisionComponent_C.OnLocalNightVisionChanged__DelegateSignature
	 */
	struct UBP_GBItemNightVisionComponent_C_OnLocalNightVisionChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bLocalNightVision;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
