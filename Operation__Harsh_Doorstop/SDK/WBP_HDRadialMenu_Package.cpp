/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetOutpostName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWBP_HDRadialMenu_C::GetOutpostName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetOutpostName");
		
		UWBP_HDRadialMenu_C_GetOutpostName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetOutpostTimeRemaining
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABP_HDPlayerCharacterBase_C*                 OwnerPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TimeRemaining                                              (Parm, OutParm)
	 */
	void UWBP_HDRadialMenu_C::GetOutpostTimeRemaining(class ABP_HDPlayerCharacterBase_C* OwnerPawn, class FText* TimeRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetOutpostTimeRemaining");
		
		UWBP_HDRadialMenu_C_GetOutpostTimeRemaining_Params params {};
		params.OwnerPawn = OwnerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeRemaining != nullptr)
			*TimeRemaining = params.TimeRemaining;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetRallypointName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWBP_HDRadialMenu_C::GetRallypointName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetRallypointName");
		
		UWBP_HDRadialMenu_C_GetRallypointName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetRallypointTimeRemaining
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABP_HDPlayerCharacterBase_C*                 OwnerPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TimeRemaining                                              (Parm, OutParm)
	 */
	void UWBP_HDRadialMenu_C::GetRallypointTimeRemaining(class ABP_HDPlayerCharacterBase_C* OwnerPawn, class FText* TimeRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetRallypointTimeRemaining");
		
		UWBP_HDRadialMenu_C_GetRallypointTimeRemaining_Params params {};
		params.OwnerPawn = OwnerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeRemaining != nullptr)
			*TimeRemaining = params.TimeRemaining;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.OwnerPawnDeath
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       VictimPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 VictimController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              KillingDamage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDRadialMenu_C::OwnerPawnDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.OwnerPawnDeath");
		
		UWBP_HDRadialMenu_C_OwnerPawnDeath_Params params {};
		params.VictimPawn = VictimPawn;
		params.VictimController = VictimController;
		params.KillingDamage = KillingDamage;
		params.DamageEvent = DamageEvent;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.MakeOutpostIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSHDRadialMenu_OptionData                   OptionData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_RadialMenuIconBase_C*                   Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDRadialMenu_C::MakeOutpostIcon(const struct FSHDRadialMenu_OptionData& OptionData, class UWBP_RadialMenuIconBase_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.MakeOutpostIcon");
		
		UWBP_HDRadialMenu_C_MakeOutpostIcon_Params params {};
		params.OptionData = OptionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.MakeRallypointIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSHDRadialMenu_OptionData                   OptionData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_RadialMenuIconBase_C*                   Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDRadialMenu_C::MakeRallypointIcon(const struct FSHDRadialMenu_OptionData& OptionData, class UWBP_RadialMenuIconBase_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.MakeRallypointIcon");
		
		UWBP_HDRadialMenu_C_MakeRallypointIcon_Params params {};
		params.OptionData = OptionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.MakeSpottingIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSHDRadialMenu_OptionData                   OptionData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_RadialMenuIconBase_C*                   Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDRadialMenu_C::MakeSpottingIcon(const struct FSHDRadialMenu_OptionData& OptionData, class UWBP_RadialMenuIconBase_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.MakeSpottingIcon");
		
		UWBP_HDRadialMenu_C_MakeSpottingIcon_Params params {};
		params.OptionData = OptionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.SelectSubmenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDRadialMenu_C::SelectSubmenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.SelectSubmenu");
		
		UWBP_HDRadialMenu_C_SelectSubmenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.PopulateSubmenuOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDRadialMenu_C::PopulateSubmenuOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.PopulateSubmenuOptions");
		
		UWBP_HDRadialMenu_C_PopulateSubmenuOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.PopulateMenuOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDataTable*                                  MenuOptions                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDRadialMenu_C::PopulateMenuOptions(class UDataTable* MenuOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.PopulateMenuOptions");
		
		UWBP_HDRadialMenu_C_PopulateMenuOptions_Params params {};
		params.MenuOptions = MenuOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetItemData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSHDRadialMenu_OptionData                   ItemData                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_HDRadialMenu_C::GetItemData(const class FName& RowName, struct FSHDRadialMenu_OptionData* ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetItemData");
		
		UWBP_HDRadialMenu_C_GetItemData_Params params {};
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemData != nullptr)
			*ItemData = params.ItemData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetItemNamesForSelectedOption
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                OutRowNames                                                (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_HDRadialMenu_C::GetItemNamesForSelectedOption(TArray<class FName>* OutRowNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetItemNamesForSelectedOption");
		
		UWBP_HDRadialMenu_C_GetItemNamesForSelectedOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRowNames != nullptr)
			*OutRowNames = params.OutRowNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetCategoryData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSHDRadialMenu_OptionData                   CategoryData                                               (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_HDRadialMenu_C::GetCategoryData(const class FName& Category, struct FSHDRadialMenu_OptionData* CategoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetCategoryData");
		
		UWBP_HDRadialMenu_C_GetCategoryData_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryData != nullptr)
			*CategoryData = params.CategoryData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetCategories
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                Categories                                                 (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_HDRadialMenu_C::GetCategories(TArray<class FName>* Categories)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetCategories");
		
		UWBP_HDRadialMenu_C_GetCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Categories != nullptr)
			*Categories = params.Categories;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetCategoryName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWBP_HDRadialMenu_C::GetCategoryName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GetCategoryName");
		
		UWBP_HDRadialMenu_C_GetCategoryName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.BndEvt__categoryRing_K2Node_ComponentBoundEvent_1_SelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewSelection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OldSelection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDRadialMenu_C::BndEvt__categoryRing_K2Node_ComponentBoundEvent_1_SelectionChanged__DelegateSignature(int32_t NewSelection, int32_t OldSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.BndEvt__categoryRing_K2Node_ComponentBoundEvent_1_SelectionChanged__DelegateSignature");
		
		UWBP_HDRadialMenu_C_BndEvt__categoryRing_K2Node_ComponentBoundEvent_1_SelectionChanged__DelegateSignature_Params params {};
		params.NewSelection = NewSelection;
		params.OldSelection = OldSelection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.Submit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDRadialMenu_C::Submit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.Submit");
		
		UWBP_HDRadialMenu_C_Submit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GoBack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDRadialMenu_C::GoBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.GoBack");
		
		UWBP_HDRadialMenu_C_GoBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDRadialMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.Tick");
		
		UWBP_HDRadialMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_HDRadialMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.Construct");
		
		UWBP_HDRadialMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.OnCancel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDRadialMenu_C::OnCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.OnCancel");
		
		UWBP_HDRadialMenu_C_OnCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.ExecuteUbergraph_WBP_HDRadialMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDRadialMenu_C::ExecuteUbergraph_WBP_HDRadialMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDRadialMenu.WBP_HDRadialMenu_C.ExecuteUbergraph_WBP_HDRadialMenu");
		
		UWBP_HDRadialMenu_C_ExecuteUbergraph_WBP_HDRadialMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HDRadialMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HDRadialMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HDRadialMenu.WBP_HDRadialMenu_C");
		return ptr;
	}

}


