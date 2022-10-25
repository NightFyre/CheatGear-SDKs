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
	 * 		Name   -> Function BPAnim_IronCub.BPAnim_IronCub_C.PassThroughHardpointData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EIronBearHardPointOrientation                      HardpointSide                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_IronBearHardpointList                         Hardpoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_IronCub_C::PassThroughHardpointData(EIronBearHardPointOrientation HardpointSide, Enum_IronBearHardpointList Hardpoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronCub.BPAnim_IronCub_C.PassThroughHardpointData");
		
		UBPAnim_IronCub_C_PassThroughHardpointData_Params params {};
		params.HardpointSide = HardpointSide;
		params.Hardpoint = Hardpoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendSpacePlayer_BA156C0A4246809F6FFEB3833AC66E47
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronCub_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendSpacePlayer_BA156C0A4246809F6FFEB3833AC66E47()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendSpacePlayer_BA156C0A4246809F6FFEB3833AC66E47");
		
		UBPAnim_IronCub_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendSpacePlayer_BA156C0A4246809F6FFEB3833AC66E47_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendSpacePlayer_5BB25FBB43EF9D6BA3518688014C45D5
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronCub_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendSpacePlayer_5BB25FBB43EF9D6BA3518688014C45D5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendSpacePlayer_5BB25FBB43EF9D6BA3518688014C45D5");
		
		UBPAnim_IronCub_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendSpacePlayer_5BB25FBB43EF9D6BA3518688014C45D5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TransitionResult_9DB828944A7B9D2601970EB4BBAF9A08
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronCub_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TransitionResult_9DB828944A7B9D2601970EB4BBAF9A08()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TransitionResult_9DB828944A7B9D2601970EB4BBAF9A08");
		
		UBPAnim_IronCub_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TransitionResult_9DB828944A7B9D2601970EB4BBAF9A08_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TransitionResult_FABA91404B45E518D95C559F1C5BD0EB
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronCub_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TransitionResult_FABA91404B45E518D95C559F1C5BD0EB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TransitionResult_FABA91404B45E518D95C559F1C5BD0EB");
		
		UBPAnim_IronCub_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TransitionResult_FABA91404B45E518D95C559F1C5BD0EB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TransitionResult_9E641E194FB50B336FD408A761397FDB
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronCub_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TransitionResult_9E641E194FB50B336FD408A761397FDB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TransitionResult_9E641E194FB50B336FD408A761397FDB");
		
		UBPAnim_IronCub_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TransitionResult_9E641E194FB50B336FD408A761397FDB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_LayeredBoneBlend_F6D803884A85F671BC17BEADBB7ED121
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronCub_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_LayeredBoneBlend_F6D803884A85F671BC17BEADBB7ED121()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_LayeredBoneBlend_F6D803884A85F671BC17BEADBB7ED121");
		
		UBPAnim_IronCub_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_LayeredBoneBlend_F6D803884A85F671BC17BEADBB7ED121_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_AimOffsetLookAt_5E428D5F4A09E4201D415FB70D1AE5C1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronCub_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_AimOffsetLookAt_5E428D5F4A09E4201D415FB70D1AE5C1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_AimOffsetLookAt_5E428D5F4A09E4201D415FB70D1AE5C1");
		
		UBPAnim_IronCub_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_AimOffsetLookAt_5E428D5F4A09E4201D415FB70D1AE5C1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_LayeredBoneBlend_AE35CB464D5D9C1F2867DA9484385F11
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronCub_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_LayeredBoneBlend_AE35CB464D5D9C1F2867DA9484385F11()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_LayeredBoneBlend_AE35CB464D5D9C1F2867DA9484385F11");
		
		UBPAnim_IronCub_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_LayeredBoneBlend_AE35CB464D5D9C1F2867DA9484385F11_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_RotationOffsetBlendSpace_49DA2C904ABC6102325430ADAD716E26
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronCub_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_RotationOffsetBlendSpace_49DA2C904ABC6102325430ADAD716E26()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_RotationOffsetBlendSpace_49DA2C904ABC6102325430ADAD716E26");
		
		UBPAnim_IronCub_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_RotationOffsetBlendSpace_49DA2C904ABC6102325430ADAD716E26_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TwoWayBlend_22A04F004393B3CF1D6870AAD6D2126B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronCub_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TwoWayBlend_22A04F004393B3CF1D6870AAD6D2126B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TwoWayBlend_22A04F004393B3CF1D6870AAD6D2126B");
		
		UBPAnim_IronCub_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TwoWayBlend_22A04F004393B3CF1D6870AAD6D2126B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendListByBool_AD59B6794B6D5F48F7EE1788D01E35E4
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronCub_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendListByBool_AD59B6794B6D5F48F7EE1788D01E35E4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendListByBool_AD59B6794B6D5F48F7EE1788D01E35E4");
		
		UBPAnim_IronCub_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendListByBool_AD59B6794B6D5F48F7EE1788D01E35E4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_ApplyAdditive_BACC831441E8C73E68628A8324DAA698
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronCub_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_ApplyAdditive_BACC831441E8C73E68628A8324DAA698()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_ApplyAdditive_BACC831441E8C73E68628A8324DAA698");
		
		UBPAnim_IronCub_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_ApplyAdditive_BACC831441E8C73E68628A8324DAA698_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_ApplyAdditive_1044CEC749B05B6D8808A3BD2AA690BD
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronCub_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_ApplyAdditive_1044CEC749B05B6D8808A3BD2AA690BD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_ApplyAdditive_1044CEC749B05B6D8808A3BD2AA690BD");
		
		UBPAnim_IronCub_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_ApplyAdditive_1044CEC749B05B6D8808A3BD2AA690BD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendSpacePlayer_5B8CA68945C538964ED1C38099D24CC1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_IronCub_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendSpacePlayer_5B8CA68945C538964ED1C38099D24CC1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronCub.BPAnim_IronCub_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendSpacePlayer_5B8CA68945C538964ED1C38099D24CC1");
		
		UBPAnim_IronCub_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendSpacePlayer_5B8CA68945C538964ED1C38099D24CC1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_IronCub.BPAnim_IronCub_C.ExecuteUbergraph_BPAnim_IronCub
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_IronCub_C::ExecuteUbergraph_BPAnim_IronCub(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_IronCub.BPAnim_IronCub_C.ExecuteUbergraph_BPAnim_IronCub");
		
		UBPAnim_IronCub_C_ExecuteUbergraph_BPAnim_IronCub_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_IronCub_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_IronCub_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_IronCub.BPAnim_IronCub_C");
		return ptr;
	}

}


