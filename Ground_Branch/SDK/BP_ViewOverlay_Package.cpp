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
	 * 		Name   -> Function BP_ViewOverlay.BP_ViewOverlay_C.UpdateMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    MaskTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ViewOverlay_C::UpdateMask(class UTexture* MaskTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewOverlay.BP_ViewOverlay_C.UpdateMask");
		
		ABP_ViewOverlay_C_UpdateMask_Params params {};
		params.MaskTexture = MaskTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ViewOverlay.BP_ViewOverlay_C.UpdateAlpha
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ViewOverlay_C::UpdateAlpha(float InAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewOverlay.BP_ViewOverlay_C.UpdateAlpha");
		
		ABP_ViewOverlay_C_UpdateAlpha_Params params {};
		params.InAlpha = InAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ViewOverlay.BP_ViewOverlay_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ViewOverlay_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewOverlay.BP_ViewOverlay_C.ReceiveTick");
		
		ABP_ViewOverlay_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ViewOverlay.BP_ViewOverlay_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ViewOverlay_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewOverlay.BP_ViewOverlay_C.ReceiveBeginPlay");
		
		ABP_ViewOverlay_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ViewOverlay.BP_ViewOverlay_C.SetWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ViewOverlay_C::SetWidget(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewOverlay.BP_ViewOverlay_C.SetWidget");
		
		ABP_ViewOverlay_C_SetWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ViewOverlay.BP_ViewOverlay_C.OnDestroyed_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ViewOverlay_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewOverlay.BP_ViewOverlay_C.OnDestroyed_Event_1");
		
		ABP_ViewOverlay_C_OnDestroyed_Event_1_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ViewOverlay.BP_ViewOverlay_C.ExecuteUbergraph_BP_ViewOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ViewOverlay_C::ExecuteUbergraph_BP_ViewOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ViewOverlay.BP_ViewOverlay_C.ExecuteUbergraph_BP_ViewOverlay");
		
		ABP_ViewOverlay_C_ExecuteUbergraph_BP_ViewOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ViewOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ViewOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ViewOverlay.BP_ViewOverlay_C");
		return ptr;
	}

}


