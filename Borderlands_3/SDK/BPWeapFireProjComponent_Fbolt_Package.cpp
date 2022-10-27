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
	 * 		Name   -> Function BPWeapFireProjComponent_Fbolt.BPWeapFireProjComponent_Fbolt_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeapFireProjComponent_Fbolt_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeapFireProjComponent_Fbolt.BPWeapFireProjComponent_Fbolt_C.ReceiveBeginPlay");
		
		UBPWeapFireProjComponent_Fbolt_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeapFireProjComponent_Fbolt.BPWeapFireProjComponent_Fbolt_C.EvaluateShot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPWeapFireProjComponent_Fbolt_C::EvaluateShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeapFireProjComponent_Fbolt.BPWeapFireProjComponent_Fbolt_C.EvaluateShot");
		
		UBPWeapFireProjComponent_Fbolt_C_EvaluateShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeapFireProjComponent_Fbolt.BPWeapFireProjComponent_Fbolt_C.ExecuteUbergraph_BPWeapFireProjComponent_Fbolt
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeapFireProjComponent_Fbolt_C::ExecuteUbergraph_BPWeapFireProjComponent_Fbolt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeapFireProjComponent_Fbolt.BPWeapFireProjComponent_Fbolt_C.ExecuteUbergraph_BPWeapFireProjComponent_Fbolt");
		
		UBPWeapFireProjComponent_Fbolt_C_ExecuteUbergraph_BPWeapFireProjComponent_Fbolt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeapFireProjComponent_Fbolt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeapFireProjComponent_Fbolt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeapFireProjComponent_Fbolt.BPWeapFireProjComponent_Fbolt_C");
		return ptr;
	}

}


