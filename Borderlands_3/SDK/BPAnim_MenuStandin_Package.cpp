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
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.CalculateWeaponHoldData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AWeapon*                                     PreviousWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_MenuStandin_C::CalculateWeaponHoldData(class AWeapon* Weapon, class AWeapon* PreviousWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.CalculateWeaponHoldData");
		
		UBPAnim_MenuStandin_C_CalculateWeaponHoldData_Params params {};
		params.Weapon = Weapon;
		params.PreviousWeapon = PreviousWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_TwoWayBlend_B59930F541EF0AD6D35F66B3233F9909
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_TwoWayBlend_B59930F541EF0AD6D35F66B3233F9909()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_TwoWayBlend_B59930F541EF0AD6D35F66B3233F9909");
		
		UBPAnim_MenuStandin_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_TwoWayBlend_B59930F541EF0AD6D35F66B3233F9909_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_0AABCAD440A77ECED146F199E0F5FCA9
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_0AABCAD440A77ECED146F199E0F5FCA9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_0AABCAD440A77ECED146F199E0F5FCA9");
		
		UBPAnim_MenuStandin_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_0AABCAD440A77ECED146F199E0F5FCA9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_ApplyAdditive_67BEF82843AA1BE61B3CB9A94CC66079
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_ApplyAdditive_67BEF82843AA1BE61B3CB9A94CC66079()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_ApplyAdditive_67BEF82843AA1BE61B3CB9A94CC66079");
		
		UBPAnim_MenuStandin_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_ApplyAdditive_67BEF82843AA1BE61B3CB9A94CC66079_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_BlendListByInt_62A99C6241197699C26A0198E202D21A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_BlendListByInt_62A99C6241197699C26A0198E202D21A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_BlendListByInt_62A99C6241197699C26A0198E202D21A");
		
		UBPAnim_MenuStandin_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_BlendListByInt_62A99C6241197699C26A0198E202D21A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_GbxAnimGraphNode_HandIK_C9A10B46424547583338A0B8E4E905A2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_GbxAnimGraphNode_HandIK_C9A10B46424547583338A0B8E4E905A2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_GbxAnimGraphNode_HandIK_C9A10B46424547583338A0B8E4E905A2");
		
		UBPAnim_MenuStandin_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_GbxAnimGraphNode_HandIK_C9A10B46424547583338A0B8E4E905A2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_GbxAnimGraphNode_HandIK_6E4241914F8B8E4691CD5F8C35ACA089
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_GbxAnimGraphNode_HandIK_6E4241914F8B8E4691CD5F8C35ACA089()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_GbxAnimGraphNode_HandIK_6E4241914F8B8E4691CD5F8C35ACA089");
		
		UBPAnim_MenuStandin_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_GbxAnimGraphNode_HandIK_6E4241914F8B8E4691CD5F8C35ACA089_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_89464B4E408E99296D91E8AAAE034A4B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_89464B4E408E99296D91E8AAAE034A4B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_89464B4E408E99296D91E8AAAE034A4B");
		
		UBPAnim_MenuStandin_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_89464B4E408E99296D91E8AAAE034A4B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_LayeredBoneBlend_F4F48A9E4975A05B3BADCE973DB04530
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_LayeredBoneBlend_F4F48A9E4975A05B3BADCE973DB04530()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_LayeredBoneBlend_F4F48A9E4975A05B3BADCE973DB04530");
		
		UBPAnim_MenuStandin_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_LayeredBoneBlend_F4F48A9E4975A05B3BADCE973DB04530_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_6A145EE04957A2E2110C2EB31293F125
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_6A145EE04957A2E2110C2EB31293F125()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_6A145EE04957A2E2110C2EB31293F125");
		
		UBPAnim_MenuStandin_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_6A145EE04957A2E2110C2EB31293F125_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_3C93BFE24BBC9581EF88DA8F7D4C331E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_3C93BFE24BBC9581EF88DA8F7D4C331E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_3C93BFE24BBC9581EF88DA8F7D4C331E");
		
		UBPAnim_MenuStandin_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_3C93BFE24BBC9581EF88DA8F7D4C331E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_250BC0354731B19BB1E9989173892356
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_250BC0354731B19BB1E9989173892356()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_250BC0354731B19BB1E9989173892356");
		
		UBPAnim_MenuStandin_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_250BC0354731B19BB1E9989173892356_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_ApplyAdditive_5EA0028A43708000F6ABB6A3FDA4FE11
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_ApplyAdditive_5EA0028A43708000F6ABB6A3FDA4FE11()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_ApplyAdditive_5EA0028A43708000F6ABB6A3FDA4FE11");
		
		UBPAnim_MenuStandin_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_ApplyAdditive_5EA0028A43708000F6ABB6A3FDA4FE11_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_BlendListByInt_57E403E84E494EF1FF9D79A36CBCB9FA
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_BlendListByInt_57E403E84E494EF1FF9D79A36CBCB9FA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_BlendListByInt_57E403E84E494EF1FF9D79A36CBCB9FA");
		
		UBPAnim_MenuStandin_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_BlendListByInt_57E403E84E494EF1FF9D79A36CBCB9FA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_LayeredBoneBlend_2BB164254C8FC59A50AA46BE2064782A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_LayeredBoneBlend_2BB164254C8FC59A50AA46BE2064782A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_LayeredBoneBlend_2BB164254C8FC59A50AA46BE2064782A");
		
		UBPAnim_MenuStandin_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_LayeredBoneBlend_2BB164254C8FC59A50AA46BE2064782A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_ApplyMeshSpaceAdditive_FE755C224DDEC89010D9A39CC4CDA439
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_ApplyMeshSpaceAdditive_FE755C224DDEC89010D9A39CC4CDA439()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_ApplyMeshSpaceAdditive_FE755C224DDEC89010D9A39CC4CDA439");
		
		UBPAnim_MenuStandin_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_ApplyMeshSpaceAdditive_FE755C224DDEC89010D9A39CC4CDA439_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.OnWeaponChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     NewWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AWeapon*                                     PrevWeapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_MenuStandin_C::OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* PrevWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.OnWeaponChanged");
		
		UBPAnim_MenuStandin_C_OnWeaponChanged_Params params {};
		params.NewWeapon = NewWeapon;
		params.PrevWeapon = PrevWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_7CB9629741C18B8C511D728175E7609B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_7CB9629741C18B8C511D728175E7609B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_7CB9629741C18B8C511D728175E7609B");
		
		UBPAnim_MenuStandin_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_7CB9629741C18B8C511D728175E7609B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.Update_ActiveAnimSet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPAnim_MenuStandin_C::Update_ActiveAnimSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.Update_ActiveAnimSet");
		
		UBPAnim_MenuStandin_C_Update_ActiveAnimSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.ExecuteUbergraph_BPAnim_MenuStandin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_MenuStandin_C::ExecuteUbergraph_BPAnim_MenuStandin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_MenuStandin.BPAnim_MenuStandin_C.ExecuteUbergraph_BPAnim_MenuStandin");
		
		UBPAnim_MenuStandin_C_ExecuteUbergraph_BPAnim_MenuStandin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_MenuStandin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_MenuStandin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_MenuStandin.BPAnim_MenuStandin_C");
		return ptr;
	}

}


