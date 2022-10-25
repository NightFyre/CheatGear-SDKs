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
	 * Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.CanSelect
	 */
	struct UWBP_RadialMenu_Entry_C_CanSelect_Params
	{
	public:
		float                                                      AngleDegrees;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutResult;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_91C4[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.GetImageSliceColorAndOpacity
	 */
	struct UWBP_RadialMenu_Entry_C_GetImageSliceColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.Construct
	 */
	struct UWBP_RadialMenu_Entry_C_Construct_Params
	{	};

	/**
	 * Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.Select
	 */
	struct UWBP_RadialMenu_Entry_C_Select_Params
	{	};

	/**
	 * Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.Setup
	 */
	struct UWBP_RadialMenu_Entry_C_Setup_Params
	{
	public:
		float                                                      InAngle;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InAngleChangePerEntry;                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.CheckSelect
	 */
	struct UWBP_RadialMenu_Entry_C_CheckSelect_Params
	{
	public:
		float                                                      InSelectAngle;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.CustomEvent_1
	 */
	struct UWBP_RadialMenu_Entry_C_CustomEvent_1_Params
	{
	public:
		class UObject*                                             LoadedAsset;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.ExecuteUbergraph_WBP_RadialMenu_Entry
	 */
	struct UWBP_RadialMenu_Entry_C_ExecuteUbergraph_WBP_RadialMenu_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.OnSelected__DelegateSignature
	 */
	struct UWBP_RadialMenu_Entry_C_OnSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
