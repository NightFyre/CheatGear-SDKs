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
	 * 		Name   -> Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAction_Injured_Start_Siren_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.OnServerEnd");
		
		UBPAction_Injured_Start_Siren_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.FadeOutArms
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPAction_Injured_Start_Siren_C::FadeOutArms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.FadeOutArms");
		
		UBPAction_Injured_Start_Siren_C_FadeOutArms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.ExecuteUbergraph_BPAction_Injured_Start_Siren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAction_Injured_Start_Siren_C::ExecuteUbergraph_BPAction_Injured_Start_Siren(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C.ExecuteUbergraph_BPAction_Injured_Start_Siren");
		
		UBPAction_Injured_Start_Siren_C_ExecuteUbergraph_BPAction_Injured_Start_Siren_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAction_Injured_Start_Siren_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAction_Injured_Start_Siren_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C");
		return ptr;
	}

}


