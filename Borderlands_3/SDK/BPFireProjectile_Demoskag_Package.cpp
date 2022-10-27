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
	 * 		Name   -> Function BPFireProjectile_Demoskag.BPFireProjectile_Demoskag_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPFireProjectile_Demoskag_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFireProjectile_Demoskag.BPFireProjectile_Demoskag_C.ReceiveBeginPlay");
		
		UBPFireProjectile_Demoskag_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFireProjectile_Demoskag.BPFireProjectile_Demoskag_C.CheckTimeOfDay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPFireProjectile_Demoskag_C::CheckTimeOfDay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFireProjectile_Demoskag.BPFireProjectile_Demoskag_C.CheckTimeOfDay");
		
		UBPFireProjectile_Demoskag_C_CheckTimeOfDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFireProjectile_Demoskag.BPFireProjectile_Demoskag_C.ExecuteUbergraph_BPFireProjectile_Demoskag
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFireProjectile_Demoskag_C::ExecuteUbergraph_BPFireProjectile_Demoskag(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFireProjectile_Demoskag.BPFireProjectile_Demoskag_C.ExecuteUbergraph_BPFireProjectile_Demoskag");
		
		UBPFireProjectile_Demoskag_C_ExecuteUbergraph_BPFireProjectile_Demoskag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFireProjectile_Demoskag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFireProjectile_Demoskag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFireProjectile_Demoskag.BPFireProjectile_Demoskag_C");
		return ptr;
	}

}


