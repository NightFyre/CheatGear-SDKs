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
	 * 		Name   -> Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.CanSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AngleDegrees                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_RadialMenu_Entry_C::CanSelect(float AngleDegrees, bool* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.CanSelect");
		
		UWBP_RadialMenu_Entry_C_CanSelect_Params params {};
		params.AngleDegrees = AngleDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.GetImageSliceColorAndOpacity
	 * 		Flags  -> ()
	 */
	struct FLinearColor UWBP_RadialMenu_Entry_C::GetImageSliceColorAndOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.GetImageSliceColorAndOpacity");
		
		UWBP_RadialMenu_Entry_C_GetImageSliceColorAndOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_RadialMenu_Entry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.Construct");
		
		UWBP_RadialMenu_Entry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.Select
	 * 		Flags  -> ()
	 */
	void UWBP_RadialMenu_Entry_C::Select()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.Select");
		
		UWBP_RadialMenu_Entry_C_Select_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAngle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAngleChangePerEntry                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RadialMenu_Entry_C::Setup(float InAngle, float InAngleChangePerEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.Setup");
		
		UWBP_RadialMenu_Entry_C_Setup_Params params {};
		params.InAngle = InAngle;
		params.InAngleChangePerEntry = InAngleChangePerEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.CheckSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSelectAngle                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RadialMenu_Entry_C::CheckSelect(float InSelectAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.CheckSelect");
		
		UWBP_RadialMenu_Entry_C_CheckSelect_Params params {};
		params.InSelectAngle = InSelectAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LoadedAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RadialMenu_Entry_C::CustomEvent_1(class UObject* LoadedAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.CustomEvent_1");
		
		UWBP_RadialMenu_Entry_C_CustomEvent_1_Params params {};
		params.LoadedAsset = LoadedAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.ExecuteUbergraph_WBP_RadialMenu_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RadialMenu_Entry_C::ExecuteUbergraph_WBP_RadialMenu_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.ExecuteUbergraph_WBP_RadialMenu_Entry");
		
		UWBP_RadialMenu_Entry_C_ExecuteUbergraph_WBP_RadialMenu_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RadialMenu_Entry_C::OnSelected__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C.OnSelected__DelegateSignature");
		
		UWBP_RadialMenu_Entry_C_OnSelected__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_RadialMenu_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_RadialMenu_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RadialMenu_Entry.WBP_RadialMenu_Entry_C");
		return ptr;
	}

}


