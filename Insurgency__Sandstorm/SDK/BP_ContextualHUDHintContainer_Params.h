#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.UpdateLoadoutHintImageIfAvailableSupply
	 */
	struct UBP_ContextualHUDHintContainer_C_UpdateLoadoutHintImageIfAvailableSupply_Params
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.GetAssets
	 */
	struct UBP_ContextualHUDHintContainer_C_GetAssets_Params
	{
	public:
		EAssetName                                                 AssetName;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BUV2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FChildAsset                                         Asset;                                                   // 0x0008(0x0018)  (Parm, OutParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.GetFadeOutAnimation
	 */
	struct UBP_ContextualHUDHintContainer_C_GetFadeOutAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.GetFadeInAnimation
	 */
	struct UBP_ContextualHUDHintContainer_C_GetFadeInAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.UpdateInputIcon
	 */
	struct UBP_ContextualHUDHintContainer_C_UpdateInputIcon_Params
	{
	public:
		bool                                                       IsGamePade;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NL70[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.UsingControllerUpdate
	 */
	struct UBP_ContextualHUDHintContainer_C_UsingControllerUpdate_Params
	{
	public:
		bool                                                       bUsingController;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EeInputIconType                                            NewIconType;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.Construct
	 */
	struct UBP_ContextualHUDHintContainer_C_Construct_Params
	{	};

	/**
	 * Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.UpdateChangeLoadoutHintImage
	 */
	struct UBP_ContextualHUDHintContainer_C_UpdateChangeLoadoutHintImage_Params
	{
	public:
		int32_t                                                    AvailableSupply;                                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ContextualHUDHintContainer.BP_ContextualHUDHintContainer_C.ExecuteUbergraph_BP_ContextualHUDHintContainer
	 */
	struct UBP_ContextualHUDHintContainer_C_ExecuteUbergraph_BP_ContextualHUDHintContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
