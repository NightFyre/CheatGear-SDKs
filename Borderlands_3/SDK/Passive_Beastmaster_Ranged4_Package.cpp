/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.ApplyConditionalDamageModifiers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Beastmaster_Ranged4_C::ApplyConditionalDamageModifiers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.ApplyConditionalDamageModifiers");
		
		UPassive_Beastmaster_Ranged4_C_ApplyConditionalDamageModifiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.Ranged4_EquippedItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      EquippedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventorySlotData*                          SlotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_Ranged4_C::Ranged4_EquippedItem(class AActor* EquippedActor, class UInventorySlotData* SlotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.Ranged4_EquippedItem");
		
		UPassive_Beastmaster_Ranged4_C_Ranged4_EquippedItem_Params params {};
		params.EquippedActor = EquippedActor;
		params.SlotData = SlotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.Ranged4_UnequippedItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      UnequippedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventorySlotData*                          SlotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_Ranged4_C::Ranged4_UnequippedItem(class AActor* UnequippedActor, class UInventorySlotData* SlotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.Ranged4_UnequippedItem");
		
		UPassive_Beastmaster_Ranged4_C_Ranged4_UnequippedItem_Params params {};
		params.UnequippedActor = UnequippedActor;
		params.SlotData = SlotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.RemoveConditionalModifiers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Beastmaster_Ranged4_C::RemoveConditionalModifiers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.RemoveConditionalModifiers");
		
		UPassive_Beastmaster_Ranged4_C_RemoveConditionalModifiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Beastmaster_Ranged4_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.OnActivated");
		
		UPassive_Beastmaster_Ranged4_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.OnResumed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Beastmaster_Ranged4_C::OnResumed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.OnResumed");
		
		UPassive_Beastmaster_Ranged4_C_OnResumed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.ExecuteUbergraph_Passive_Beastmaster_Ranged4
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_Ranged4_C::ExecuteUbergraph_Passive_Beastmaster_Ranged4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C.ExecuteUbergraph_Passive_Beastmaster_Ranged4");
		
		UPassive_Beastmaster_Ranged4_C_ExecuteUbergraph_Passive_Beastmaster_Ranged4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Beastmaster_Ranged4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Beastmaster_Ranged4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Ranged4.Passive_Beastmaster_Ranged4_C");
		return ptr;
	}

}


