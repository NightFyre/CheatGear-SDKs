/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.GetCanvas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvasPanel*                                Canvas                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDEMO_BodyRegionFade_C::GetCanvas(class UCanvasPanel** Canvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.GetCanvas");
		
		UDEMO_BodyRegionFade_C_GetCanvas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Canvas != nullptr)
			*Canvas = params.Canvas;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.ResetTargets
	 * 		Flags  -> ()
	 */
	void UDEMO_BodyRegionFade_C::ResetTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.ResetTargets");
		
		UDEMO_BodyRegionFade_C_ResetTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.Construct
	 * 		Flags  -> ()
	 */
	void UDEMO_BodyRegionFade_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.Construct");
		
		UDEMO_BodyRegionFade_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDEMO_BodyRegionFade_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.Tick");
		
		UDEMO_BodyRegionFade_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_all_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDEMO_BodyRegionFade_C::BndEvt__btn_all_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_all_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UDEMO_BodyRegionFade_C_BndEvt__btn_all_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Head_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDEMO_BodyRegionFade_C::BndEvt__btn_Head_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Head_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UDEMO_BodyRegionFade_C_BndEvt__btn_Head_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Torso_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDEMO_BodyRegionFade_C::BndEvt__btn_Torso_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Torso_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UDEMO_BodyRegionFade_C_BndEvt__btn_Torso_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Leg_Left_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDEMO_BodyRegionFade_C::BndEvt__btn_Leg_Left_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Leg_Left_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UDEMO_BodyRegionFade_C_BndEvt__btn_Leg_Left_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Leg_Right_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDEMO_BodyRegionFade_C::BndEvt__btn_Leg_Right_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Leg_Right_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UDEMO_BodyRegionFade_C_BndEvt__btn_Leg_Right_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Arm_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDEMO_BodyRegionFade_C::BndEvt__btn_Arm_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Arm_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UDEMO_BodyRegionFade_C_BndEvt__btn_Arm_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Arm_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDEMO_BodyRegionFade_C::BndEvt__btn_Arm_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Arm_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UDEMO_BodyRegionFade_C_BndEvt__btn_Arm_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Male_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDEMO_BodyRegionFade_C::BndEvt__btn_Male_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Male_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UDEMO_BodyRegionFade_C_BndEvt__btn_Male_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Female_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDEMO_BodyRegionFade_C::BndEvt__btn_Female_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.BndEvt__btn_Female_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UDEMO_BodyRegionFade_C_BndEvt__btn_Female_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.ExecuteUbergraph_DEMO_BodyRegionFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDEMO_BodyRegionFade_C::ExecuteUbergraph_DEMO_BodyRegionFade(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DEMO_BodyRegionFade.DEMO_BodyRegionFade_C.ExecuteUbergraph_DEMO_BodyRegionFade");
		
		UDEMO_BodyRegionFade_C_ExecuteUbergraph_DEMO_BodyRegionFade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDEMO_BodyRegionFade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDEMO_BodyRegionFade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DEMO_BodyRegionFade.DEMO_BodyRegionFade_C");
		return ptr;
	}

}


