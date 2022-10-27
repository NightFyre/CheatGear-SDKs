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
	 * 		Name   -> Function ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C.OnStop
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UControlledMove_PetSkag_HornKnockupTest_C::OnStop(bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C.OnStop");
		
		UControlledMove_PetSkag_HornKnockupTest_C_OnStop_Params params {};
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C.OnServerStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              MoveDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_PetSkag_HornKnockupTest_C::OnServerStart(float MoveDuration, class AActor* TargetActor, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C.OnServerStart");
		
		UControlledMove_PetSkag_HornKnockupTest_C_OnServerStart_Params params {};
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
	 * 		Name   -> Function ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C.ExecuteUbergraph_ControlledMove_PetSkag_HornKnockupTest
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_PetSkag_HornKnockupTest_C::ExecuteUbergraph_ControlledMove_PetSkag_HornKnockupTest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C.ExecuteUbergraph_ControlledMove_PetSkag_HornKnockupTest");
		
		UControlledMove_PetSkag_HornKnockupTest_C_ExecuteUbergraph_ControlledMove_PetSkag_HornKnockupTest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlledMove_PetSkag_HornKnockupTest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlledMove_PetSkag_HornKnockupTest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_PetSkag_HornKnockupTest.ControlledMove_PetSkag_HornKnockupTest_C");
		return ptr;
	}

}


