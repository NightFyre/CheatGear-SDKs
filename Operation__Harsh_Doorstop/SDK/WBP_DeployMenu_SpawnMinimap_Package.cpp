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
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.UpdatePlayerPOIs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::UpdatePlayerPOIs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.UpdatePlayerPOIs");
		
		UWBP_DeployMenu_SpawnMinimap_C_UpdatePlayerPOIs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.SetCurrentMapTexture
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  NewMapTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::SetCurrentMapTexture(class UTexture2D* NewMapTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.SetCurrentMapTexture");
		
		UWBP_DeployMenu_SpawnMinimap_C_SetCurrentMapTexture_Params params {};
		params.NewMapTexture = NewMapTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.HasPreloadInProgress
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bPreloading                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::HasPreloadInProgress(bool* bPreloading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.HasPreloadInProgress");
		
		UWBP_DeployMenu_SpawnMinimap_C_HasPreloadInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bPreloading != nullptr)
			*bPreloading = params.bPreloading;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.ApplyPreloadedContent
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::ApplyPreloadedContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.ApplyPreloadedContent");
		
		UWBP_DeployMenu_SpawnMinimap_C_ApplyPreloadedContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.PreloadContent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::PreloadContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.PreloadContent");
		
		UWBP_DeployMenu_SpawnMinimap_C_PreloadContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.ZoomOut
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ZoomDecrement                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::ZoomOut(float ZoomDecrement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.ZoomOut");
		
		UWBP_DeployMenu_SpawnMinimap_C_ZoomOut_Params params {};
		params.ZoomDecrement = ZoomDecrement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.ZoomIn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ZoomIncrement                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::ZoomIn(float ZoomIncrement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.ZoomIn");
		
		UWBP_DeployMenu_SpawnMinimap_C_ZoomIn_Params params {};
		params.ZoomIncrement = ZoomIncrement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnMouseWheel
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_DeployMenu_SpawnMinimap_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnMouseWheel");
		
		UWBP_DeployMenu_SpawnMinimap_C_OnMouseWheel_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnMouseButtonUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_DeployMenu_SpawnMinimap_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnMouseButtonUp");
		
		UWBP_DeployMenu_SpawnMinimap_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.UpdateMapMatParams
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::UpdateMapMatParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.UpdateMapMatParams");
		
		UWBP_DeployMenu_SpawnMinimap_C_UpdateMapMatParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.GetLocalCursorDelta
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FGeometry                                   Geometry                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector2D                                   LocalDelta                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::GetLocalCursorDelta(struct FGeometry* Geometry, struct FPointerEvent* MouseEvent, struct FVector2D* LocalDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.GetLocalCursorDelta");
		
		UWBP_DeployMenu_SpawnMinimap_C_GetLocalCursorDelta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Geometry != nullptr)
			*Geometry = params.Geometry;
		if (MouseEvent != nullptr)
			*MouseEvent = params.MouseEvent;
		if (LocalDelta != nullptr)
			*LocalDelta = params.LocalDelta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnMouseMove
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_DeployMenu_SpawnMinimap_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnMouseMove");
		
		UWBP_DeployMenu_SpawnMinimap_C_OnMouseMove_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_DeployMenu_SpawnMinimap_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnMouseButtonDown");
		
		UWBP_DeployMenu_SpawnMinimap_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.InitMapBg
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  MapTexture                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::InitMapBg(class UTexture2D* MapTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.InitMapBg");
		
		UWBP_DeployMenu_SpawnMinimap_C_InitMapBg_Params params {};
		params.MapTexture = MapTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnLoaded_BACDC4954F814289E55DD7AAEBE3E34E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::OnLoaded_BACDC4954F814289E55DD7AAEBE3E34E(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnLoaded_BACDC4954F814289E55DD7AAEBE3E34E");
		
		UWBP_DeployMenu_SpawnMinimap_C_OnLoaded_BACDC4954F814289E55DD7AAEBE3E34E_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnLoaded_BB8D079144A98AFE7BD3849D43A40947
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::OnLoaded_BB8D079144A98AFE7BD3849D43A40947(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnLoaded_BB8D079144A98AFE7BD3849D43A40947");
		
		UWBP_DeployMenu_SpawnMinimap_C_OnLoaded_BB8D079144A98AFE7BD3849D43A40947_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.Construct");
		
		UWBP_DeployMenu_SpawnMinimap_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.PreConstruct");
		
		UWBP_DeployMenu_SpawnMinimap_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnMouseEnter");
		
		UWBP_DeployMenu_SpawnMinimap_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.Tick");
		
		UWBP_DeployMenu_SpawnMinimap_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnContentPreloadStarted
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::OnContentPreloadStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnContentPreloadStarted");
		
		UWBP_DeployMenu_SpawnMinimap_C_OnContentPreloadStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnContentPreloadFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::OnContentPreloadFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnContentPreloadFinished");
		
		UWBP_DeployMenu_SpawnMinimap_C_OnContentPreloadFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnAsyncLoadCompleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::OnAsyncLoadCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnAsyncLoadCompleted");
		
		UWBP_DeployMenu_SpawnMinimap_C_OnAsyncLoadCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.ReceiveOnPOISelectionStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UDFPOIWidget*                                POI                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::ReceiveOnPOISelectionStateChanged(class UDFPOIWidget* POI, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.ReceiveOnPOISelectionStateChanged");
		
		UWBP_DeployMenu_SpawnMinimap_C_ReceiveOnPOISelectionStateChanged_Params params {};
		params.POI = POI;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.ExecuteUbergraph_WBP_DeployMenu_SpawnMinimap
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::ExecuteUbergraph_WBP_DeployMenu_SpawnMinimap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.ExecuteUbergraph_WBP_DeployMenu_SpawnMinimap");
		
		UWBP_DeployMenu_SpawnMinimap_C_ExecuteUbergraph_WBP_DeployMenu_SpawnMinimap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnSpawnPointDeselected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      POISpawnPointActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::OnSpawnPointDeselected__DelegateSignature(class AActor* POISpawnPointActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnSpawnPointDeselected__DelegateSignature");
		
		UWBP_DeployMenu_SpawnMinimap_C_OnSpawnPointDeselected__DelegateSignature_Params params {};
		params.POISpawnPointActor = POISpawnPointActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnSpawnPointSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      POISpawnPointActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::OnSpawnPointSelected__DelegateSignature(class AActor* POISpawnPointActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnSpawnPointSelected__DelegateSignature");
		
		UWBP_DeployMenu_SpawnMinimap_C_OnSpawnPointSelected__DelegateSignature_Params params {};
		params.POISpawnPointActor = POISpawnPointActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnPreloadFinished__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_SpawnMinimap_C::OnPreloadFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C.OnPreloadFinished__DelegateSignature");
		
		UWBP_DeployMenu_SpawnMinimap_C_OnPreloadFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DeployMenu_SpawnMinimap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DeployMenu_SpawnMinimap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DeployMenu_SpawnMinimap.WBP_DeployMenu_SpawnMinimap_C");
		return ptr;
	}

}


