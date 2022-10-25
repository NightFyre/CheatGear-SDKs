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
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.Get_CreditsSymbol_Visibility_1
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_Get_CreditsSymbol_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.IsLinearColorAlmostEqual
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_IsLinearColorAlmostEqual_Params
	{
	public:
		struct FLinearColor                                        Color1;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color2;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEqualish;                                              // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WOCG[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForPattern
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_SetBackgroundForPattern_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForColorVariation
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_SetBackgroundForColorVariation_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForHeadgear
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_SetBackgroundForHeadgear_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForSkin
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_SetBackgroundForSkin_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForEyes
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_SetBackgroundForEyes_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.ClearBackground
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_ClearBackground_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackground
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_SetBackground_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetBackgroundForHairColor
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_SetBackgroundForHairColor_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.Get_Item_Style_Visibility_1
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_Get_Item_Style_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.GetColorForVariation
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_GetColorForVariation_Params
	{
	public:
		unsigned char                                              UnknownData_MDQG[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.VisibleIfCondensed
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_VisibleIfCondensed_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.GetVisibility_1
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.GetRarityColor_1
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_GetRarityColor_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.OnLoaded_BD7B753249EC362E967D70B801FBEC0B
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_OnLoaded_BD7B753249EC362E967D70B801FBEC0B_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.Construct
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.PreConstruct
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.SetFromItemDefId
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_SetFromItemDefId_Params
	{	};

	/**
	 * Function BP_MainMenu_PostMatch_Cosmetic_New.BP_MainMenu_PostMatch_Cosmetic_New_C.ExecuteUbergraph_BP_MainMenu_PostMatch_Cosmetic_New
	 */
	struct UBP_MainMenu_PostMatch_Cosmetic_New_C_ExecuteUbergraph_BP_MainMenu_PostMatch_Cosmetic_New_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
