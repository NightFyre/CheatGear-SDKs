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
	 * 		Name   -> Function GunnersNest_FromAnimation.GunnersNest_FromAnimation_C.Update
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCameraState*                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGunnersNest_FromAnimation_C::Update(float DeltaTime, class UCameraState* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnersNest_FromAnimation.GunnersNest_FromAnimation_C.Update");
		
		UGunnersNest_FromAnimation_C_Update_Params params {};
		params.DeltaTime = DeltaTime;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GunnersNest_FromAnimation.GunnersNest_FromAnimation_C.ExecuteUbergraph_GunnersNest_FromAnimation
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGunnersNest_FromAnimation_C::ExecuteUbergraph_GunnersNest_FromAnimation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnersNest_FromAnimation.GunnersNest_FromAnimation_C.ExecuteUbergraph_GunnersNest_FromAnimation");
		
		UGunnersNest_FromAnimation_C_ExecuteUbergraph_GunnersNest_FromAnimation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGunnersNest_FromAnimation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGunnersNest_FromAnimation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GunnersNest_FromAnimation.GunnersNest_FromAnimation_C");
		return ptr;
	}

}


