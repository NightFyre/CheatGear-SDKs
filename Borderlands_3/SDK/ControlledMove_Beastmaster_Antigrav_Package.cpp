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
	 * 		Name   -> Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.OnServerStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              MoveDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_Beastmaster_Antigrav_C::OnServerStart(float MoveDuration, class AActor* TargetActor, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.OnServerStart");
		
		UControlledMove_Beastmaster_Antigrav_C_OnServerStart_Params params {};
		params.MoveDuration = MoveDuration;
		params.TargetActor = TargetActor;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.SpawnLoot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UControlledMove_Beastmaster_Antigrav_C::SpawnLoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.SpawnLoot");
		
		UControlledMove_Beastmaster_Antigrav_C_SpawnLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.ExecuteUbergraph_ControlledMove_Beastmaster_Antigrav
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_Beastmaster_Antigrav_C::ExecuteUbergraph_ControlledMove_Beastmaster_Antigrav(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C.ExecuteUbergraph_ControlledMove_Beastmaster_Antigrav");
		
		UControlledMove_Beastmaster_Antigrav_C_ExecuteUbergraph_ControlledMove_Beastmaster_Antigrav_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlledMove_Beastmaster_Antigrav_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlledMove_Beastmaster_Antigrav_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C");
		return ptr;
	}

}


