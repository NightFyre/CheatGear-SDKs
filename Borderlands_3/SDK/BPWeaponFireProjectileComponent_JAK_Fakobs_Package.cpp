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
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_Fakobs.BPWeaponFireProjectileComponent_JAK_Fakobs_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWeaponFireProjectileComponent_JAK_Fakobs_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Fakobs.BPWeaponFireProjectileComponent_JAK_Fakobs_C.ReceiveBeginPlay");
		
		UBPWeaponFireProjectileComponent_JAK_Fakobs_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_Fakobs.BPWeaponFireProjectileComponent_JAK_Fakobs_C.UsedWeapon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      InputChannel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectileComponent_JAK_Fakobs_C::UsedWeapon(unsigned char InputChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Fakobs.BPWeaponFireProjectileComponent_JAK_Fakobs_C.UsedWeapon");
		
		UBPWeaponFireProjectileComponent_JAK_Fakobs_C_UsedWeapon_Params params {};
		params.InputChannel = InputChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeaponFireProjectileComponent_JAK_Fakobs.BPWeaponFireProjectileComponent_JAK_Fakobs_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Fakobs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeaponFireProjectileComponent_JAK_Fakobs_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Fakobs(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Fakobs.BPWeaponFireProjectileComponent_JAK_Fakobs_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Fakobs");
		
		UBPWeaponFireProjectileComponent_JAK_Fakobs_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Fakobs_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeaponFireProjectileComponent_JAK_Fakobs_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponFireProjectileComponent_JAK_Fakobs_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_JAK_Fakobs.BPWeaponFireProjectileComponent_JAK_Fakobs_C");
		return ptr;
	}

}


