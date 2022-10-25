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
	 * 		Name   -> Function CE_Standin_PetLoader_DigistructIn.CE_Standin_PetLoader_DigistructIn_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCE_Standin_PetLoader_DigistructIn_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CE_Standin_PetLoader_DigistructIn.CE_Standin_PetLoader_DigistructIn_C.OnBegin");
		
		UCE_Standin_PetLoader_DigistructIn_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function CE_Standin_PetLoader_DigistructIn.CE_Standin_PetLoader_DigistructIn_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCE_Standin_PetLoader_DigistructIn_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CE_Standin_PetLoader_DigistructIn.CE_Standin_PetLoader_DigistructIn_C.OnEnd");
		
		UCE_Standin_PetLoader_DigistructIn_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function CE_Standin_PetLoader_DigistructIn.CE_Standin_PetLoader_DigistructIn_C.ExecuteUbergraph_CE_Standin_PetLoader_DigistructIn
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCE_Standin_PetLoader_DigistructIn_C::ExecuteUbergraph_CE_Standin_PetLoader_DigistructIn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CE_Standin_PetLoader_DigistructIn.CE_Standin_PetLoader_DigistructIn_C.ExecuteUbergraph_CE_Standin_PetLoader_DigistructIn");
		
		UCE_Standin_PetLoader_DigistructIn_C_ExecuteUbergraph_CE_Standin_PetLoader_DigistructIn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCE_Standin_PetLoader_DigistructIn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCE_Standin_PetLoader_DigistructIn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CE_Standin_PetLoader_DigistructIn.CE_Standin_PetLoader_DigistructIn_C");
		return ptr;
	}

}


