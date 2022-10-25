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
	 * 		Name   -> Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.AN_FireLeftShot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PetLoader_MissileBarrage_C::AN_FireLeftShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.AN_FireLeftShot");
		
		UAction_PetLoader_MissileBarrage_C_AN_FireLeftShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.AN_FireRightShot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PetLoader_MissileBarrage_C::AN_FireRightShot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.AN_FireRightShot");
		
		UAction_PetLoader_MissileBarrage_C_AN_FireRightShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PetLoader_MissileBarrage_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.OnServerBegin");
		
		UAction_PetLoader_MissileBarrage_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.ExecuteUbergraph_Action_PetLoader_MissileBarrage
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PetLoader_MissileBarrage_C::ExecuteUbergraph_Action_PetLoader_MissileBarrage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.ExecuteUbergraph_Action_PetLoader_MissileBarrage");
		
		UAction_PetLoader_MissileBarrage_C_ExecuteUbergraph_Action_PetLoader_MissileBarrage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_PetLoader_MissileBarrage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_PetLoader_MissileBarrage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C");
		return ptr;
	}

}


