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
	 * Function WBP_Tab_SubType.WBP_Tab_SubType_C.Construct
	 */
	struct UWBP_Tab_SubType_C_Construct_Params
	{	};

	/**
	 * Function WBP_Tab_SubType.WBP_Tab_SubType_C.BndEvt__Button_Item_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Tab_SubType_C_BndEvt__Button_Item_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Tab_SubType.WBP_Tab_SubType_C.IconLoaded
	 */
	struct UWBP_Tab_SubType_C_IconLoaded_Params
	{
	public:
		class UObject*                                             LoadedAsset;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Tab_SubType.WBP_Tab_SubType_C.InternalOnSelected
	 */
	struct UWBP_Tab_SubType_C_InternalOnSelected_Params
	{	};

	/**
	 * Function WBP_Tab_SubType.WBP_Tab_SubType_C.ExecuteUbergraph_WBP_Tab_SubType
	 */
	struct UWBP_Tab_SubType_C_ExecuteUbergraph_WBP_Tab_SubType_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NXQH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Tab_SubType.WBP_Tab_SubType_C.OnItemCategorySelected__DelegateSignature
	 */
	struct UWBP_Tab_SubType_C_OnItemCategorySelected__DelegateSignature_Params
	{
	public:
		struct FPrimaryAssetType                                   ItemAssetType;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FName                                                SubType;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
