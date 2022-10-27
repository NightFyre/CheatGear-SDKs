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
	 * 		Name   -> Function BP_AdminPlayerRow.BP_AdminPlayerRow_C.BanPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AdminPlayerRow_C::BanPlayer(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminPlayerRow.BP_AdminPlayerRow_C.BanPlayer");
		
		UBP_AdminPlayerRow_C_BanPlayer_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminPlayerRow.BP_AdminPlayerRow_C.BndEvt__ButtonKick_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_AdminPlayerRow_C::BndEvt__ButtonKick_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminPlayerRow.BP_AdminPlayerRow_C.BndEvt__ButtonKick_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
		
		UBP_AdminPlayerRow_C_BndEvt__ButtonKick_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminPlayerRow.BP_AdminPlayerRow_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_AdminPlayerRow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminPlayerRow.BP_AdminPlayerRow_C.Construct");
		
		UBP_AdminPlayerRow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminPlayerRow.BP_AdminPlayerRow_C.BndEvt__ButtonBan10M_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_AdminPlayerRow_C::BndEvt__ButtonBan10M_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminPlayerRow.BP_AdminPlayerRow_C.BndEvt__ButtonBan10M_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
		
		UBP_AdminPlayerRow_C_BndEvt__ButtonBan10M_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminPlayerRow.BP_AdminPlayerRow_C.BndEvt__ButtonBan1H_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_AdminPlayerRow_C::BndEvt__ButtonBan1H_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminPlayerRow.BP_AdminPlayerRow_C.BndEvt__ButtonBan1H_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");
		
		UBP_AdminPlayerRow_C_BndEvt__ButtonBan1H_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminPlayerRow.BP_AdminPlayerRow_C.BndEvt__ButtonBan1D_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_AdminPlayerRow_C::BndEvt__ButtonBan1D_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminPlayerRow.BP_AdminPlayerRow_C.BndEvt__ButtonBan1D_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");
		
		UBP_AdminPlayerRow_C_BndEvt__ButtonBan1D_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminPlayerRow.BP_AdminPlayerRow_C.BndEvt__ButtonBanPerm_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_AdminPlayerRow_C::BndEvt__ButtonBanPerm_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminPlayerRow.BP_AdminPlayerRow_C.BndEvt__ButtonBanPerm_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");
		
		UBP_AdminPlayerRow_C_BndEvt__ButtonBanPerm_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AdminPlayerRow.BP_AdminPlayerRow_C.ExecuteUbergraph_BP_AdminPlayerRow
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AdminPlayerRow_C::ExecuteUbergraph_BP_AdminPlayerRow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AdminPlayerRow.BP_AdminPlayerRow_C.ExecuteUbergraph_BP_AdminPlayerRow");
		
		UBP_AdminPlayerRow_C_ExecuteUbergraph_BP_AdminPlayerRow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AdminPlayerRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AdminPlayerRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_AdminPlayerRow.BP_AdminPlayerRow_C");
		return ptr;
	}

}


