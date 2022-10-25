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
	 * 		Name   -> Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.On Confuse Target death
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCE_PlayerShared_Skills_Confuse_C::On_Confuse_Target_death(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.On Confuse Target death");
		
		UCE_PlayerShared_Skills_Confuse_C_On_Confuse_Target_death_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCE_PlayerShared_Skills_Confuse_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.OnEnd");
		
		UCE_PlayerShared_Skills_Confuse_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCE_PlayerShared_Skills_Confuse_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.OnBegin");
		
		UCE_PlayerShared_Skills_Confuse_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.ExecuteUbergraph_CE_PlayerShared_Skills_Confuse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCE_PlayerShared_Skills_Confuse_C::ExecuteUbergraph_CE_PlayerShared_Skills_Confuse(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C.ExecuteUbergraph_CE_PlayerShared_Skills_Confuse");
		
		UCE_PlayerShared_Skills_Confuse_C_ExecuteUbergraph_CE_PlayerShared_Skills_Confuse_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCE_PlayerShared_Skills_Confuse_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCE_PlayerShared_Skills_Confuse_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CE_PlayerShared_Skills_Confuse.CE_PlayerShared_Skills_Confuse_C");
		return ptr;
	}

}


