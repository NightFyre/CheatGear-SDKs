/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_TorchBlue.BP_TorchBlue_C.Turnon0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TorchBlue_C::Turnon0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TorchBlue.BP_TorchBlue_C.Turnon0__FinishedFunc");
		
		ABP_TorchBlue_C_Turnon0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_TorchBlue.BP_TorchBlue_C.Turnon0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TorchBlue_C::Turnon0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TorchBlue.BP_TorchBlue_C.Turnon0__UpdateFunc");
		
		ABP_TorchBlue_C_Turnon0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_TorchBlue.BP_TorchBlue_C.Turnoff0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TorchBlue_C::Turnoff0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TorchBlue.BP_TorchBlue_C.Turnoff0__FinishedFunc");
		
		ABP_TorchBlue_C_Turnoff0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_TorchBlue.BP_TorchBlue_C.Turnoff0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TorchBlue_C::Turnoff0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TorchBlue.BP_TorchBlue_C.Turnoff0__UpdateFunc");
		
		ABP_TorchBlue_C_Turnoff0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_TorchBlue.BP_TorchBlue_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TorchBlue_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TorchBlue.BP_TorchBlue_C.Timeline_0__FinishedFunc");
		
		ABP_TorchBlue_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_TorchBlue.BP_TorchBlue_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TorchBlue_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TorchBlue.BP_TorchBlue_C.Timeline_0__UpdateFunc");
		
		ABP_TorchBlue_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_TorchBlue.BP_TorchBlue_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TorchBlue_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TorchBlue.BP_TorchBlue_C.Timeline_1__FinishedFunc");
		
		ABP_TorchBlue_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_TorchBlue.BP_TorchBlue_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_TorchBlue_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TorchBlue.BP_TorchBlue_C.Timeline_1__UpdateFunc");
		
		ABP_TorchBlue_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_TorchBlue.BP_TorchBlue_C.GameplayTagUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                InGameplayTag                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TorchBlue_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32_t InCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TorchBlue.BP_TorchBlue_C.GameplayTagUpdated");
		
		ABP_TorchBlue_C_GameplayTagUpdated_Params params {};
		params.InGameplayTag = InGameplayTag;
		params.InCount = InCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_TorchBlue.BP_TorchBlue_C.OnAttachedSheathSocket
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_TorchBlue_C::OnAttachedSheathSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TorchBlue.BP_TorchBlue_C.OnAttachedSheathSocket");
		
		ABP_TorchBlue_C_OnAttachedSheathSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_TorchBlue.BP_TorchBlue_C.ExecuteUbergraph_BP_TorchBlue
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TorchBlue_C::ExecuteUbergraph_BP_TorchBlue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TorchBlue.BP_TorchBlue_C.ExecuteUbergraph_BP_TorchBlue");
		
		ABP_TorchBlue_C_ExecuteUbergraph_BP_TorchBlue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TorchBlue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TorchBlue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TorchBlue.BP_TorchBlue_C");
		return ptr;
	}

}


