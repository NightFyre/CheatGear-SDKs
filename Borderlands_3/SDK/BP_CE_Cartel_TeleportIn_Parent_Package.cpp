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
	 * 		Name   -> Function BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C.OnDeath_CartelThugCE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CE_Cartel_TeleportIn_Parent_C::OnDeath_CartelThugCE(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C.OnDeath_CartelThugCE");
		
		UBP_CE_Cartel_TeleportIn_Parent_C_OnDeath_CartelThugCE_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CE_Cartel_TeleportIn_Parent_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C.OnServerBegin");
		
		UBP_CE_Cartel_TeleportIn_Parent_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C.ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Parent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CE_Cartel_TeleportIn_Parent_C::ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C.ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Parent");
		
		UBP_CE_Cartel_TeleportIn_Parent_C_ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CE_Cartel_TeleportIn_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CE_Cartel_TeleportIn_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C");
		return ptr;
	}

}


