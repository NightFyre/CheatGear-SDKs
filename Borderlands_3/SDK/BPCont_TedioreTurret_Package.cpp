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
	 * 		Name   -> Function BPCont_TedioreTurret.BPCont_TedioreTurret_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPCont_TedioreTurret_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCont_TedioreTurret.BPCont_TedioreTurret_C.UserConstructionScript");
		
		ABPCont_TedioreTurret_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPCont_TedioreTurret.BPCont_TedioreTurret_C.BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_TedioreTurret
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UTargetingComponent*                         TargetingComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPCont_TedioreTurret_C::BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_TedioreTurret(class UTargetingComponent* TargetingComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCont_TedioreTurret.BPCont_TedioreTurret_C.BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_TedioreTurret");
		
		ABPCont_TedioreTurret_C_BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_TedioreTurret_Params params {};
		params.TargetingComponent = TargetingComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPCont_TedioreTurret.BPCont_TedioreTurret_C.ExecuteUbergraph_BPCont_TedioreTurret
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPCont_TedioreTurret_C::ExecuteUbergraph_BPCont_TedioreTurret(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCont_TedioreTurret.BPCont_TedioreTurret_C.ExecuteUbergraph_BPCont_TedioreTurret");
		
		ABPCont_TedioreTurret_C_ExecuteUbergraph_BPCont_TedioreTurret_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPCont_TedioreTurret_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPCont_TedioreTurret_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCont_TedioreTurret.BPCont_TedioreTurret_C");
		return ptr;
	}

}


