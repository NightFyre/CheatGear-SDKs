/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.Set Value Class
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ClassName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MatchHistoryRowStat_C::Set_Value_Class(const class FName& ClassName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.Set Value Class");
		
		UBP_MatchHistoryRowStat_C_Set_Value_Class_Params params {};
		params.ClassName = ClassName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.Set Value Item
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MatchHistoryRowStat_C::Set_Value_Item()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.Set Value Item");
		
		UBP_MatchHistoryRowStat_C_Set_Value_Item_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.SetValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MatchHistoryRowStat_C::SetValue(const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.SetValue");
		
		UBP_MatchHistoryRowStat_C_SetValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchHistoryRowStat_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.PreConstruct");
		
		UBP_MatchHistoryRowStat_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MatchHistoryRowStat_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.Construct");
		
		UBP_MatchHistoryRowStat_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.ExecuteUbergraph_BP_MatchHistoryRowStat
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MatchHistoryRowStat_C::ExecuteUbergraph_BP_MatchHistoryRowStat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C.ExecuteUbergraph_BP_MatchHistoryRowStat");
		
		UBP_MatchHistoryRowStat_C_ExecuteUbergraph_BP_MatchHistoryRowStat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MatchHistoryRowStat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MatchHistoryRowStat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MatchHistoryRowStat.BP_MatchHistoryRowStat_C");
		return ptr;
	}

}


