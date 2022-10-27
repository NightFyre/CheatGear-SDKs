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
	 * 		Name   -> Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UARand_Pet_Fidgets_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.OnServerBegin");
		
		UARand_Pet_Fidgets_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UARand_Pet_Fidgets_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.OnServerEnd");
		
		UARand_Pet_Fidgets_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.Notify_PetSpawnAmmo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UARand_Pet_Fidgets_C::Notify_PetSpawnAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.Notify_PetSpawnAmmo");
		
		UARand_Pet_Fidgets_C_Notify_PetSpawnAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.ExecuteUbergraph_ARand_Pet_Fidgets
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UARand_Pet_Fidgets_C::ExecuteUbergraph_ARand_Pet_Fidgets(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ARand_Pet_Fidgets.ARand_Pet_Fidgets_C.ExecuteUbergraph_ARand_Pet_Fidgets");
		
		UARand_Pet_Fidgets_C_ExecuteUbergraph_ARand_Pet_Fidgets_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARand_Pet_Fidgets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARand_Pet_Fidgets_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ARand_Pet_Fidgets.ARand_Pet_Fidgets_C");
		return ptr;
	}

}


