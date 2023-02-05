/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellCapacitySlot.WB_ClassSpellCapacitySlot_C.OnReset
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWB_ClassSpellCapacitySlot_C::OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellCapacitySlot.WB_ClassSpellCapacitySlot_C.OnReset");
		
		UWB_ClassSpellCapacitySlot_C_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellCapacitySlot.WB_ClassSpellCapacitySlot_C.OnSetSpellArtData
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UArtDataSpell*                               InArtSpellData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassSpellCapacitySlot_C::OnSetSpellArtData(class UArtDataSpell* InArtSpellData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellCapacitySlot.WB_ClassSpellCapacitySlot_C.OnSetSpellArtData");
		
		UWB_ClassSpellCapacitySlot_C_OnSetSpellArtData_Params params {};
		params.InArtSpellData = InArtSpellData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellCapacitySlot.WB_ClassSpellCapacitySlot_C.OnSpellDataChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FSpellData                                  InSpellData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FDesignDataSpell                            InDesignDataSpell                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_ClassSpellCapacitySlot_C::OnSpellDataChanged(const struct FSpellData& InSpellData, const struct FDesignDataSpell& InDesignDataSpell)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellCapacitySlot.WB_ClassSpellCapacitySlot_C.OnSpellDataChanged");
		
		UWB_ClassSpellCapacitySlot_C_OnSpellDataChanged_Params params {};
		params.InSpellData = InSpellData;
		params.InDesignDataSpell = InDesignDataSpell;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellCapacitySlot.WB_ClassSpellCapacitySlot_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_ClassSpellCapacitySlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellCapacitySlot.WB_ClassSpellCapacitySlot_C.Construct");
		
		UWB_ClassSpellCapacitySlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellCapacitySlot.WB_ClassSpellCapacitySlot_C.ExecuteUbergraph_WB_ClassSpellCapacitySlot
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassSpellCapacitySlot_C::ExecuteUbergraph_WB_ClassSpellCapacitySlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellCapacitySlot.WB_ClassSpellCapacitySlot_C.ExecuteUbergraph_WB_ClassSpellCapacitySlot");
		
		UWB_ClassSpellCapacitySlot_C_ExecuteUbergraph_WB_ClassSpellCapacitySlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ClassSpellCapacitySlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ClassSpellCapacitySlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ClassSpellCapacitySlot.WB_ClassSpellCapacitySlot_C");
		return ptr;
	}

}


