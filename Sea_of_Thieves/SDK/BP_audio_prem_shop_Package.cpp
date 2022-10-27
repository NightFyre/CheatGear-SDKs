/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_audio_prem_shop.BP_audio_prem_shop_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_audio_prem_shop_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_audio_prem_shop.BP_audio_prem_shop_C.UserConstructionScript");
		
		ABP_audio_prem_shop_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_audio_prem_shop.BP_audio_prem_shop_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_audio_prem_shop_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_audio_prem_shop.BP_audio_prem_shop_C.ReceiveBeginPlay");
		
		ABP_audio_prem_shop_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_audio_prem_shop.BP_audio_prem_shop_C.ExecuteUbergraph_BP_audio_prem_shop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_audio_prem_shop_C::ExecuteUbergraph_BP_audio_prem_shop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_audio_prem_shop.BP_audio_prem_shop_C.ExecuteUbergraph_BP_audio_prem_shop");
		
		ABP_audio_prem_shop_C_ExecuteUbergraph_BP_audio_prem_shop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_audio_prem_shop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_audio_prem_shop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_audio_prem_shop.BP_audio_prem_shop_C");
		return ptr;
	}

}


