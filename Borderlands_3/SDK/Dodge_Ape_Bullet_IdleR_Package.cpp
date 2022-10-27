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
	 * 		Name   -> Function Dodge_Ape_Bullet_IdleR.Dodge_Ape_Bullet_IdleR_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDodge_Ape_Bullet_IdleR_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dodge_Ape_Bullet_IdleR.Dodge_Ape_Bullet_IdleR_C.OnEnd");
		
		UDodge_Ape_Bullet_IdleR_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Dodge_Ape_Bullet_IdleR.Dodge_Ape_Bullet_IdleR_C.ExecuteUbergraph_Dodge_Ape_Bullet_IdleR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDodge_Ape_Bullet_IdleR_C::ExecuteUbergraph_Dodge_Ape_Bullet_IdleR(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dodge_Ape_Bullet_IdleR.Dodge_Ape_Bullet_IdleR_C.ExecuteUbergraph_Dodge_Ape_Bullet_IdleR");
		
		UDodge_Ape_Bullet_IdleR_C_ExecuteUbergraph_Dodge_Ape_Bullet_IdleR_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDodge_Ape_Bullet_IdleR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDodge_Ape_Bullet_IdleR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dodge_Ape_Bullet_IdleR.Dodge_Ape_Bullet_IdleR_C");
		return ptr;
	}

}


