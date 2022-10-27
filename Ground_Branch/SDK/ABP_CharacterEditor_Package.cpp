/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function ABP_CharacterEditor.ABP_CharacterEditor_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_CharacterEditor_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterEditor.ABP_CharacterEditor_C.AnimGraph");
		
		UABP_CharacterEditor_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_CharacterEditor.ABP_CharacterEditor_C.CopyPoseFrom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_CharacterEditor_C::CopyPoseFrom(class UAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterEditor.ABP_CharacterEditor_C.CopyPoseFrom");
		
		UABP_CharacterEditor_C_CopyPoseFrom_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_CharacterEditor.ABP_CharacterEditor_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void UABP_CharacterEditor_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterEditor.ABP_CharacterEditor_C.BlueprintInitializeAnimation");
		
		UABP_CharacterEditor_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_CharacterEditor.ABP_CharacterEditor_C.RandomiseFidgetTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_CharacterEditor_C::RandomiseFidgetTimer(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterEditor.ABP_CharacterEditor_C.RandomiseFidgetTimer");
		
		UABP_CharacterEditor_C_RandomiseFidgetTimer_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_CharacterEditor.ABP_CharacterEditor_C.Fidget
	 * 		Flags  -> ()
	 */
	void UABP_CharacterEditor_C::Fidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterEditor.ABP_CharacterEditor_C.Fidget");
		
		UABP_CharacterEditor_C_Fidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_CharacterEditor.ABP_CharacterEditor_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_CharacterEditor_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterEditor.ABP_CharacterEditor_C.BlueprintUpdateAnimation");
		
		UABP_CharacterEditor_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_CharacterEditor.ABP_CharacterEditor_C.ExecuteUbergraph_ABP_CharacterEditor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_CharacterEditor_C::ExecuteUbergraph_ABP_CharacterEditor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_CharacterEditor.ABP_CharacterEditor_C.ExecuteUbergraph_ABP_CharacterEditor");
		
		UABP_CharacterEditor_C_ExecuteUbergraph_ABP_CharacterEditor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_CharacterEditor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_CharacterEditor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CharacterEditor.ABP_CharacterEditor_C");
		return ptr;
	}

}


