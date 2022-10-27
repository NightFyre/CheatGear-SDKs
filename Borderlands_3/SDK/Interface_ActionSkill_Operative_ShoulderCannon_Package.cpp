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
	 * 		Name   -> Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.StartShoulderCannonMod3Timer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_ActionSkill_Operative_ShoulderCannon_C::StartShoulderCannonMod3Timer(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.StartShoulderCannonMod3Timer");
		
		UInterface_ActionSkill_Operative_ShoulderCannon_C_StartShoulderCannonMod3Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.GetCannonRef
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_ActionSkill_Operative_ShoulderCannon_C::GetCannonRef(class AActor** Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.GetCannonRef");
		
		UInterface_ActionSkill_Operative_ShoulderCannon_C_GetCannonRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ref != nullptr)
			*Ref = params.Ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.IsShouldCannonModSlotted
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EShoulderCannonMods                                Mod                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_ActionSkill_Operative_ShoulderCannon_C::IsShouldCannonModSlotted(EShoulderCannonMods Mod, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.IsShouldCannonModSlotted");
		
		UInterface_ActionSkill_Operative_ShoulderCannon_C_IsShouldCannonModSlotted_Params params {};
		params.Mod = Mod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterface_ActionSkill_Operative_ShoulderCannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterface_ActionSkill_Operative_ShoulderCannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C");
		return ptr;
	}

}


