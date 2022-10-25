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
	 * 		Name   -> Function Action_SR_JAK_IronSight_Fire_Bolt_02.Action_SR_JAK_IronSight_Fire_Bolt_02_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_SR_JAK_IronSight_Fire_Bolt_02_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_SR_JAK_IronSight_Fire_Bolt_02.Action_SR_JAK_IronSight_Fire_Bolt_02_C.OnBegin");
		
		UAction_SR_JAK_IronSight_Fire_Bolt_02_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_SR_JAK_IronSight_Fire_Bolt_02.Action_SR_JAK_IronSight_Fire_Bolt_02_C.ExecuteUbergraph_Action_SR_JAK_IronSight_Fire_Bolt_02
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_SR_JAK_IronSight_Fire_Bolt_02_C::ExecuteUbergraph_Action_SR_JAK_IronSight_Fire_Bolt_02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_SR_JAK_IronSight_Fire_Bolt_02.Action_SR_JAK_IronSight_Fire_Bolt_02_C.ExecuteUbergraph_Action_SR_JAK_IronSight_Fire_Bolt_02");
		
		UAction_SR_JAK_IronSight_Fire_Bolt_02_C_ExecuteUbergraph_Action_SR_JAK_IronSight_Fire_Bolt_02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_SR_JAK_IronSight_Fire_Bolt_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_SR_JAK_IronSight_Fire_Bolt_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_SR_JAK_IronSight_Fire_Bolt_02.Action_SR_JAK_IronSight_Fire_Bolt_02_C");
		return ptr;
	}

}


