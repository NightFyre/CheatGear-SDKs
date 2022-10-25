/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_TextFilter_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.PreConstruct");
		
		UBP_Widget_TextFilter_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.BndEvt__InnerTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Widget_TextFilter_C::BndEvt__InnerTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.BndEvt__InnerTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");
		
		UBP_Widget_TextFilter_C_BndEvt__InnerTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.BndEvt__InnerTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_TextFilter_C::BndEvt__InnerTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.BndEvt__InnerTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");
		
		UBP_Widget_TextFilter_C_BndEvt__InnerTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.OnStoppedTypingInternal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_TextFilter_C::OnStoppedTypingInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.OnStoppedTypingInternal");
		
		UBP_Widget_TextFilter_C_OnStoppedTypingInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.ExecuteUbergraph_BP_Widget_TextFilter
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_TextFilter_C::ExecuteUbergraph_BP_Widget_TextFilter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.ExecuteUbergraph_BP_Widget_TextFilter");
		
		UBP_Widget_TextFilter_C_ExecuteUbergraph_BP_Widget_TextFilter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.OnStoppedTyping__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        newText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Widget_TextFilter_C::OnStoppedTyping__DelegateSignature(const class FText& newText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.OnStoppedTyping__DelegateSignature");
		
		UBP_Widget_TextFilter_C_OnStoppedTyping__DelegateSignature_Params params {};
		params.newText = newText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.OnTextCommit__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        newText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_TextFilter_C::OnTextCommit__DelegateSignature(const class FText& newText, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.OnTextCommit__DelegateSignature");
		
		UBP_Widget_TextFilter_C_OnTextCommit__DelegateSignature_Params params {};
		params.newText = newText;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.OnTextChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        newText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_Widget_TextFilter_C::OnTextChanged__DelegateSignature(const class FText& newText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_TextFilter.BP_Widget_TextFilter_C.OnTextChanged__DelegateSignature");
		
		UBP_Widget_TextFilter_C_OnTextChanged__DelegateSignature_Params params {};
		params.newText = newText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_TextFilter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_TextFilter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_TextFilter.BP_Widget_TextFilter_C");
		return ptr;
	}

}


