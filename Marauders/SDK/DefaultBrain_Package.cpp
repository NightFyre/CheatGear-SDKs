/**
 * Name: Marauders
 * Version: 642675-attempt2
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DefaultBrain.DefaultBrain_C.ShowDebugGoal
	 * 		Flags  -> ()
	 */
	void UDefaultBrain_C::ShowDebugGoal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultBrain.DefaultBrain_C.ShowDebugGoal");
		
		UDefaultBrain_C_ShowDebugGoal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DefaultBrain.DefaultBrain_C.isNearDenseCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NearXNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Bounds_X                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Bounds_Y                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Bounds_Z                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CoverIsDense                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDefaultBrain_C::isNearDenseCover(int32_t NearXNumber, float Bounds_X, float Bounds_Y, float Bounds_Z, bool* CoverIsDense)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultBrain.DefaultBrain_C.isNearDenseCover");
		
		UDefaultBrain_C_isNearDenseCover_Params params {};
		params.NearXNumber = NearXNumber;
		params.Bounds_X = Bounds_X;
		params.Bounds_Y = Bounds_Y;
		params.Bounds_Z = Bounds_Z;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CoverIsDense != nullptr)
			*CoverIsDense = params.CoverIsDense;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DefaultBrain.DefaultBrain_C.PickARandomGoalString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Choices                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      Chosen                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UDefaultBrain_C::PickARandomGoalString(TArray<class FString>* Choices, class FString* Chosen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultBrain.DefaultBrain_C.PickARandomGoalString");
		
		UDefaultBrain_C_PickARandomGoalString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Choices != nullptr)
			*Choices = params.Choices;
		if (Chosen != nullptr)
			*Chosen = params.Chosen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DefaultBrain.DefaultBrain_C.ExtraChecks
	 * 		Flags  -> ()
	 */
	void UDefaultBrain_C::ExtraChecks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultBrain.DefaultBrain_C.ExtraChecks");
		
		UDefaultBrain_C_ExtraChecks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DefaultBrain.DefaultBrain_C.RunThinkCooldown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Min                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDefaultBrain_C::RunThinkCooldown(float Min, float Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultBrain.DefaultBrain_C.RunThinkCooldown");
		
		UDefaultBrain_C_RunThinkCooldown_Params params {};
		params.Min = Min;
		params.Max = Max;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DefaultBrain.DefaultBrain_C.ThinkCooldown
	 * 		Flags  -> ()
	 */
	void UDefaultBrain_C::ThinkCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultBrain.DefaultBrain_C.ThinkCooldown");
		
		UDefaultBrain_C_ThinkCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DefaultBrain.DefaultBrain_C.Brain_StartGoalChoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERaidAIState                                       StateCompleted                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDefaultBrain_C::Brain_StartGoalChoice(ERaidAIState StateCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultBrain.DefaultBrain_C.Brain_StartGoalChoice");
		
		UDefaultBrain_C_Brain_StartGoalChoice_Params params {};
		params.StateCompleted = StateCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DefaultBrain.DefaultBrain_C.RunGTFOCooldown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Min                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDefaultBrain_C::RunGTFOCooldown(float Min, float Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultBrain.DefaultBrain_C.RunGTFOCooldown");
		
		UDefaultBrain_C_RunGTFOCooldown_Params params {};
		params.Min = Min;
		params.Max = Max;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DefaultBrain.DefaultBrain_C.GTFOcooldownReset
	 * 		Flags  -> ()
	 */
	void UDefaultBrain_C::GTFOcooldownReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultBrain.DefaultBrain_C.GTFOcooldownReset");
		
		UDefaultBrain_C_GTFOcooldownReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DefaultBrain.DefaultBrain_C.Delayover
	 * 		Flags  -> ()
	 */
	void UDefaultBrain_C::Delayover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultBrain.DefaultBrain_C.Delayover");
		
		UDefaultBrain_C_Delayover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DefaultBrain.DefaultBrain_C.ExecuteUbergraph_DefaultBrain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDefaultBrain_C::ExecuteUbergraph_DefaultBrain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DefaultBrain.DefaultBrain_C.ExecuteUbergraph_DefaultBrain");
		
		UDefaultBrain_C_ExecuteUbergraph_DefaultBrain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDefaultBrain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultBrain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DefaultBrain.DefaultBrain_C");
		return ptr;
	}

}


