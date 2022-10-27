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
	 * 		Name   -> Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.GetLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     MyLocation                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGBXAction_EnemyVariableParent_C::GetLocation(struct FVector* MyLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.GetLocation");
		
		UGBXAction_EnemyVariableParent_C_GetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MyLocation != nullptr)
			*MyLocation = params.MyLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGBXAction_EnemyVariableParent_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.OnBegin");
		
		UGBXAction_EnemyVariableParent_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.ExecuteUbergraph_GBXAction_EnemyVariableParent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGBXAction_EnemyVariableParent_C::ExecuteUbergraph_GBXAction_EnemyVariableParent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.ExecuteUbergraph_GBXAction_EnemyVariableParent");
		
		UGBXAction_EnemyVariableParent_C_ExecuteUbergraph_GBXAction_EnemyVariableParent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGBXAction_EnemyVariableParent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGBXAction_EnemyVariableParent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C");
		return ptr;
	}

}


