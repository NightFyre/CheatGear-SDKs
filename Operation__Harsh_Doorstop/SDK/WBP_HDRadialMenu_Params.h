#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetOutpostName
	 */
	struct UWBP_HDRadialMenu_C_GetOutpostName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetOutpostTimeRemaining
	 */
	struct UWBP_HDRadialMenu_C_GetOutpostTimeRemaining_Params
	{
	public:
		class ABP_HDPlayerCharacterBase_C*                         OwnerPawn;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                TimeRemaining;                                           // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetRallypointName
	 */
	struct UWBP_HDRadialMenu_C_GetRallypointName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetRallypointTimeRemaining
	 */
	struct UWBP_HDRadialMenu_C_GetRallypointTimeRemaining_Params
	{
	public:
		class ABP_HDPlayerCharacterBase_C*                         OwnerPawn;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                TimeRemaining;                                           // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.OwnerPawnDeath
	 */
	struct UWBP_HDRadialMenu_C_OwnerPawnDeath_Params
	{
	public:
		class APawn*                                               VictimPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         VictimController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      KillingDamage;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CNZS[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.MakeOutpostIcon
	 */
	struct UWBP_HDRadialMenu_C_MakeOutpostIcon_Params
	{
	public:
		struct FSHDRadialMenu_OptionData                           OptionData;                                              // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWBP_RadialMenuIconBase_C*                           Widget;                                                  // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.MakeRallypointIcon
	 */
	struct UWBP_HDRadialMenu_C_MakeRallypointIcon_Params
	{
	public:
		struct FSHDRadialMenu_OptionData                           OptionData;                                              // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWBP_RadialMenuIconBase_C*                           Widget;                                                  // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.MakeSpottingIcon
	 */
	struct UWBP_HDRadialMenu_C_MakeSpottingIcon_Params
	{
	public:
		struct FSHDRadialMenu_OptionData                           OptionData;                                              // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWBP_RadialMenuIconBase_C*                           Widget;                                                  // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.SelectSubmenu
	 */
	struct UWBP_HDRadialMenu_C_SelectSubmenu_Params
	{	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.PopulateSubmenuOptions
	 */
	struct UWBP_HDRadialMenu_C_PopulateSubmenuOptions_Params
	{	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.PopulateMenuOptions
	 */
	struct UWBP_HDRadialMenu_C_PopulateMenuOptions_Params
	{
	public:
		class UDataTable*                                          MenuOptions;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetItemData
	 */
	struct UWBP_HDRadialMenu_C_GetItemData_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSHDRadialMenu_OptionData                           ItemData;                                                // 0x0008(0x0028)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetItemNamesForSelectedOption
	 */
	struct UWBP_HDRadialMenu_C_GetItemNamesForSelectedOption_Params
	{
	public:
		TArray<class FName>                                        OutRowNames;                                             // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetCategoryData
	 */
	struct UWBP_HDRadialMenu_C_GetCategoryData_Params
	{
	public:
		class FName                                                Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSHDRadialMenu_OptionData                           CategoryData;                                            // 0x0008(0x0028)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetCategories
	 */
	struct UWBP_HDRadialMenu_C_GetCategories_Params
	{
	public:
		TArray<class FName>                                        Categories;                                              // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetCategoryName
	 */
	struct UWBP_HDRadialMenu_C_GetCategoryName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.BndEvt__categoryRing_K2Node_ComponentBoundEvent_1_SelectionChanged__DelegateSignature
	 */
	struct UWBP_HDRadialMenu_C_BndEvt__categoryRing_K2Node_ComponentBoundEvent_1_SelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewSelection;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OldSelection;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.Submit
	 */
	struct UWBP_HDRadialMenu_C_Submit_Params
	{	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GoBack
	 */
	struct UWBP_HDRadialMenu_C_GoBack_Params
	{	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.Tick
	 */
	struct UWBP_HDRadialMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.Construct
	 */
	struct UWBP_HDRadialMenu_C_Construct_Params
	{	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.OnCancel
	 */
	struct UWBP_HDRadialMenu_C_OnCancel_Params
	{	};

	/**
	 * Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.ExecuteUbergraph_WBP_HDRadialMenu
	 */
	struct UWBP_HDRadialMenu_C_ExecuteUbergraph_WBP_HDRadialMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W73O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
