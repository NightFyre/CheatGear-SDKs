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
	 * 		Name   -> Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Tavern_B_AudioLayer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.UserConstructionScript");
		
		ABP_Tavern_B_AudioLayer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_Tavern_B_AudioLayer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveBeginPlay");
		
		ABP_Tavern_B_AudioLayer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Tavern_B_AudioLayer_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveEndPlay");
		
		ABP_Tavern_B_AudioLayer_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ExecuteUbergraph_BP_Tavern_B_AudioLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Tavern_B_AudioLayer_C::ExecuteUbergraph_BP_Tavern_B_AudioLayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ExecuteUbergraph_BP_Tavern_B_AudioLayer");
		
		ABP_Tavern_B_AudioLayer_C_ExecuteUbergraph_BP_Tavern_B_AudioLayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Tavern_B_AudioLayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Tavern_B_AudioLayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C");
		return ptr;
	}

}


