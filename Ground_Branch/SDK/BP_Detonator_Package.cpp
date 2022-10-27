/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detonator.BP_Detonator_C.DecodeKit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           ItemAsJson                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DecodedOwner                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGBItem*                                     DecodedParentItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Detonator_C::DecodeKit(class UVaRestJsonObject* ItemAsJson, class AActor* DecodedOwner, class AGBItem* DecodedParentItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Detonator.BP_Detonator_C.DecodeKit");
		
		ABP_Detonator_C_DecodeKit_Params params {};
		params.ItemAsJson = ItemAsJson;
		params.DecodedOwner = DecodedOwner;
		params.DecodedParentItem = DecodedParentItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detonator.BP_Detonator_C.UseMainHandPressed
	 * 		Flags  -> ()
	 */
	void ABP_Detonator_C::UseMainHandPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Detonator.BP_Detonator_C.UseMainHandPressed");
		
		ABP_Detonator_C_UseMainHandPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detonator.BP_Detonator_C.ServerDetonate
	 * 		Flags  -> ()
	 */
	void ABP_Detonator_C::ServerDetonate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Detonator.BP_Detonator_C.ServerDetonate");
		
		ABP_Detonator_C_ServerDetonate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detonator.BP_Detonator_C.ExecuteUbergraph_BP_Detonator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Detonator_C::ExecuteUbergraph_BP_Detonator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Detonator.BP_Detonator_C.ExecuteUbergraph_BP_Detonator");
		
		ABP_Detonator_C_ExecuteUbergraph_BP_Detonator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detonator.BP_Detonator_C.OnDetonatorUse__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Detonator_C*                             Detonator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Detonator_C::OnDetonatorUse__DelegateSignature(class ABP_Detonator_C* Detonator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Detonator.BP_Detonator_C.OnDetonatorUse__DelegateSignature");
		
		ABP_Detonator_C_OnDetonatorUse__DelegateSignature_Params params {};
		params.Detonator = Detonator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Detonator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Detonator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Detonator.BP_Detonator_C");
		return ptr;
	}

}


