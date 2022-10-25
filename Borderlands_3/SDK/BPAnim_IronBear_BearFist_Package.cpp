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
	 * 		Name   -> Function BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C.GetHardpointMods
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakWeapon_IronBearHardPoint*                Hardpoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_IronBear_BearFist_C::GetHardpointMods(class AOakWeapon_IronBearHardPoint* Hardpoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C.GetHardpointMods");
		
		UBPAnim_IronBear_BearFist_C_GetHardpointMods_Params params {};
		params.Hardpoint = Hardpoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_BlendListByInt_06193D0546144F09CA9439B54A9E6A8B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronBear_BearFist_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_BlendListByInt_06193D0546144F09CA9439B54A9E6A8B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_BlendListByInt_06193D0546144F09CA9439B54A9E6A8B");
		
		UBPAnim_IronBear_BearFist_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_BlendListByInt_06193D0546144F09CA9439B54A9E6A8B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_ModifyBone_8AC2996E4A41357F4A06C8BB7207837D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronBear_BearFist_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_ModifyBone_8AC2996E4A41357F4A06C8BB7207837D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_ModifyBone_8AC2996E4A41357F4A06C8BB7207837D");
		
		UBPAnim_IronBear_BearFist_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BearFist_AnimGraphNode_ModifyBone_8AC2996E4A41357F4A06C8BB7207837D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C.ExecuteUbergraph_BPAnim_IronBear_BearFist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_IronBear_BearFist_C::ExecuteUbergraph_BPAnim_IronBear_BearFist(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C.ExecuteUbergraph_BPAnim_IronBear_BearFist");
		
		UBPAnim_IronBear_BearFist_C_ExecuteUbergraph_BPAnim_IronBear_BearFist_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_IronBear_BearFist_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_IronBear_BearFist_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_IronBear_BearFist.BPAnim_IronBear_BearFist_C");
		return ptr;
	}

}


