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
	 * 		Name   -> Function BP_IRStrobe.BP_IRStrobe_C.DecodeKit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           ItemAsJson                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DecodedOwner                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGBItem*                                     DecodedParentItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_IRStrobe_C::DecodeKit(class UVaRestJsonObject* ItemAsJson, class AActor* DecodedOwner, class AGBItem* DecodedParentItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IRStrobe.BP_IRStrobe_C.DecodeKit");
		
		ABP_IRStrobe_C_DecodeKit_Params params {};
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
	 * 		Name   -> Function BP_IRStrobe.BP_IRStrobe_C.AllowUsageWhileAttached
	 * 		Flags  -> ()
	 */
	bool ABP_IRStrobe_C::AllowUsageWhileAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IRStrobe.BP_IRStrobe_C.AllowUsageWhileAttached");
		
		ABP_IRStrobe_C_AllowUsageWhileAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IRStrobe.BP_IRStrobe_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_IRStrobe_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IRStrobe.BP_IRStrobe_C.ReceiveBeginPlay");
		
		ABP_IRStrobe_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IRStrobe.BP_IRStrobe_C.OnLocalPlayerTagsUpdated_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerController*                         PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IRStrobe_C::OnLocalPlayerTagsUpdated_Event_1(class AGBPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IRStrobe.BP_IRStrobe_C.OnLocalPlayerTagsUpdated_Event_1");
		
		ABP_IRStrobe_C_OnLocalPlayerTagsUpdated_Event_1_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IRStrobe.BP_IRStrobe_C.UpdateIRStatus
	 * 		Flags  -> ()
	 */
	void ABP_IRStrobe_C::UpdateIRStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IRStrobe.BP_IRStrobe_C.UpdateIRStatus");
		
		ABP_IRStrobe_C_UpdateIRStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IRStrobe.BP_IRStrobe_C.EncodeKit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           ItemAsJson                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IRStrobe_C::EncodeKit(class UVaRestJsonObject* ItemAsJson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IRStrobe.BP_IRStrobe_C.EncodeKit");
		
		ABP_IRStrobe_C_EncodeKit_Params params {};
		params.ItemAsJson = ItemAsJson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IRStrobe.BP_IRStrobe_C.ExecuteUbergraph_BP_IRStrobe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IRStrobe_C::ExecuteUbergraph_BP_IRStrobe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IRStrobe.BP_IRStrobe_C.ExecuteUbergraph_BP_IRStrobe");
		
		ABP_IRStrobe_C_ExecuteUbergraph_BP_IRStrobe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_IRStrobe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_IRStrobe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_IRStrobe.BP_IRStrobe_C");
		return ptr;
	}

}


