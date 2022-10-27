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
	 * 		Name   -> Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ClearElementalAffinity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OakAttributeComponent_C::ClearElementalAffinity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ClearElementalAffinity");
		
		UBP_OakAttributeComponent_C_ClearElementalAffinity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.InitElementAffinity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OakAttributeComponent_C::InitElementAffinity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.InitElementAffinity");
		
		UBP_OakAttributeComponent_C_InitElementAffinity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.SetElementAffinity
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakElementalType                                  Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_ElementalAffinity                             Affinity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OakAttributeComponent_C::SetElementAffinity(EOakElementalType Element, Enum_ElementalAffinity Affinity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.SetElementAffinity");
		
		UBP_OakAttributeComponent_C_SetElementAffinity_Params params {};
		params.Element = Element;
		params.Affinity = Affinity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_OakAttributeComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ReceiveBeginPlay");
		
		UBP_OakAttributeComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ExecuteUbergraph_BP_OakAttributeComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OakAttributeComponent_C::ExecuteUbergraph_BP_OakAttributeComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ExecuteUbergraph_BP_OakAttributeComponent");
		
		UBP_OakAttributeComponent_C_ExecuteUbergraph_BP_OakAttributeComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_OakAttributeComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OakAttributeComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OakAttributeComponent.BP_OakAttributeComponent_C");
		return ptr;
	}

}


