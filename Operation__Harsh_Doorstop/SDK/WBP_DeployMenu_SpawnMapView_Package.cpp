/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.UpdatePlayerPOIs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SpawnMapView_C::UpdatePlayerPOIs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.UpdatePlayerPOIs");
		
		UWBP_DeployMenu_SpawnMapView_C_UpdatePlayerPOIs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.GetMinimapData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FMinimapGenerationSettings                  MinimapSettings                                            (Parm, OutParm, NoDestructor)
	 */
	void UWBP_DeployMenu_SpawnMapView_C::GetMinimapData(bool* bSuccess, struct FMinimapGenerationSettings* MinimapSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.GetMinimapData");
		
		UWBP_DeployMenu_SpawnMapView_C_GetMinimapData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		if (MinimapSettings != nullptr)
			*MinimapSettings = params.MinimapSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.PreloadContent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SpawnMapView_C::PreloadContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.PreloadContent");
		
		UWBP_DeployMenu_SpawnMapView_C_PreloadContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SpawnMapView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.Construct");
		
		UWBP_DeployMenu_SpawnMapView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.BndEvt__Minimap_K2Node_ComponentBoundEvent_1_OnPreloadFinished__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_DeployMenu_SpawnMapView_C::BndEvt__Minimap_K2Node_ComponentBoundEvent_1_OnPreloadFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.BndEvt__Minimap_K2Node_ComponentBoundEvent_1_OnPreloadFinished__DelegateSignature");
		
		UWBP_DeployMenu_SpawnMapView_C_BndEvt__Minimap_K2Node_ComponentBoundEvent_1_OnPreloadFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.OnPreloadFinished (SpawnMapView)
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SpawnMapView_C::OnPreloadFinished_SpawnMapView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.OnPreloadFinished (SpawnMapView)");
		
		UWBP_DeployMenu_SpawnMapView_C_OnPreloadFinished_SpawnMapView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.BndEvt__Minimap_K2Node_ComponentBoundEvent_0_OnSpawnPointSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      POISpawnPointActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SpawnMapView_C::BndEvt__Minimap_K2Node_ComponentBoundEvent_0_OnSpawnPointSelected__DelegateSignature(class AActor* POISpawnPointActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.BndEvt__Minimap_K2Node_ComponentBoundEvent_0_OnSpawnPointSelected__DelegateSignature");
		
		UWBP_DeployMenu_SpawnMapView_C_BndEvt__Minimap_K2Node_ComponentBoundEvent_0_OnSpawnPointSelected__DelegateSignature_Params params {};
		params.POISpawnPointActor = POISpawnPointActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.BndEvt__Minimap_K2Node_ComponentBoundEvent_2_OnSpawnPointDeselected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      POISpawnPointActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SpawnMapView_C::BndEvt__Minimap_K2Node_ComponentBoundEvent_2_OnSpawnPointDeselected__DelegateSignature(class AActor* POISpawnPointActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.BndEvt__Minimap_K2Node_ComponentBoundEvent_2_OnSpawnPointDeselected__DelegateSignature");
		
		UWBP_DeployMenu_SpawnMapView_C_BndEvt__Minimap_K2Node_ComponentBoundEvent_2_OnSpawnPointDeselected__DelegateSignature_Params params {};
		params.POISpawnPointActor = POISpawnPointActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.ExecuteUbergraph_WBP_DeployMenu_SpawnMapView
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SpawnMapView_C::ExecuteUbergraph_WBP_DeployMenu_SpawnMapView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.ExecuteUbergraph_WBP_DeployMenu_SpawnMapView");
		
		UWBP_DeployMenu_SpawnMapView_C_ExecuteUbergraph_WBP_DeployMenu_SpawnMapView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.OnSpawnPointDeselected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SpawnMapView_C::OnSpawnPointDeselected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.OnSpawnPointDeselected__DelegateSignature");
		
		UWBP_DeployMenu_SpawnMapView_C_OnSpawnPointDeselected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.OnSpawnPointSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      POISpawnPointActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SpawnMapView_C::OnSpawnPointSelected__DelegateSignature(class AActor* POISpawnPointActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.OnSpawnPointSelected__DelegateSignature");
		
		UWBP_DeployMenu_SpawnMapView_C_OnSpawnPointSelected__DelegateSignature_Params params {};
		params.POISpawnPointActor = POISpawnPointActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.OnPreloadFinished__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SpawnMapView_C::OnPreloadFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C.OnPreloadFinished__DelegateSignature");
		
		UWBP_DeployMenu_SpawnMapView_C_OnPreloadFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DeployMenu_SpawnMapView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DeployMenu_SpawnMapView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DeployMenu_SpawnMapView.WBP_DeployMenu_SpawnMapView_C");
		return ptr;
	}

}


