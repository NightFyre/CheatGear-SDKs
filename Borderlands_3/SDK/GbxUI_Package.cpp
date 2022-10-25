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
	 * 		RVA    -> 0x02F20000
	 * 		Name   -> Function GbxUI.GbxGFxMovie.TranslateWorldToLocal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FVector                                     LocationWorldSpace                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   OutPositionLocal                                           (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPlayerViewportRelative                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseMovieDimensions                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxGFxMovie::TranslateWorldToLocal(const struct FVector& LocationWorldSpace, struct FVector2D* OutPositionLocal, bool bPlayerViewportRelative, bool bUseMovieDimensions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.TranslateWorldToLocal");
		
		UGbxGFxMovie_TranslateWorldToLocal_Params params {};
		params.LocationWorldSpace = LocationWorldSpace;
		params.bPlayerViewportRelative = bPlayerViewportRelative;
		params.bUseMovieDimensions = bUseMovieDimensions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPositionLocal != nullptr)
			*OutPositionLocal = params.OutPositionLocal;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1FF60
	 * 		Name   -> Function GbxUI.GbxGFxMovie.TranslateToScreen
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FVector2D                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UGbxGFxMovie::TranslateToScreen(const struct FVector2D& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.TranslateToScreen");
		
		UGbxGFxMovie_TranslateToScreen_Params params {};
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1FE80
	 * 		Name   -> Function GbxUI.GbxGFxMovie.TranslateScreenToLocal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FVector2D                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseMovieDimensions                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UGbxGFxMovie::TranslateScreenToLocal(const struct FVector2D& Point, bool bUseMovieDimensions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.TranslateScreenToLocal");
		
		UGbxGFxMovie_TranslateScreenToLocal_Params params {};
		params.Point = Point;
		params.bUseMovieDimensions = bUseMovieDimensions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1FDD0
	 * 		Name   -> Function GbxUI.GbxGFxMovie.TranslateRectToScreen
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FBox2D                                      Rect                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FBox2D UGbxGFxMovie::TranslateRectToScreen(const struct FBox2D& Rect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.TranslateRectToScreen");
		
		UGbxGFxMovie_TranslateRectToScreen_Params params {};
		params.Rect = Rect;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1FD10
	 * 		Name   -> Function GbxUI.GbxGFxMovie.SpawnMovie
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class AGbxPlayerController*                        NewGPCOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxMovie::SpawnMovie(class AGbxPlayerController* NewGPCOwner, class UTextureRenderTarget2D* RenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.SpawnMovie");
		
		UGbxGFxMovie_SpawnMovie_Params params {};
		params.NewGPCOwner = NewGPCOwner;
		params.RenderTarget = RenderTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1FC50
	 * 		Name   -> Function GbxUI.GbxGFxMovie.SpawnGbxGFxMovie
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class AGbxPlayerController*                        GbxPlayerController                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      MovieClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxGFxMovie* UGbxGFxMovie::STATIC_SpawnGbxGFxMovie(class AGbxPlayerController* GbxPlayerController, class UClass* MovieClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.SpawnGbxGFxMovie");
		
		UGbxGFxMovie_SpawnGbxGFxMovie_Params params {};
		params.GbxPlayerController = GbxPlayerController;
		params.MovieClass = MovieClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1FAB0
	 * 		Name   -> Function GbxUI.GbxGFxMovie.SetViewportToPlayerScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxMovie::SetViewportToPlayerScreen(class AGbxPlayerController* pc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.SetViewportToPlayerScreen");
		
		UGbxGFxMovie_SetViewportToPlayerScreen_Params params {};
		params.pc = pc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1F8F0
	 * 		Name   -> Function GbxUI.GbxGFxMovie.SetOffsetDisplayTransform
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxMovie::SetOffsetDisplayTransform(const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.SetOffsetDisplayTransform");
		
		UGbxGFxMovie_SetOffsetDisplayTransform_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1F4C0
	 * 		Name   -> Function GbxUI.GbxGFxMovie.SetBaseDisplayTransform
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxMovie::SetBaseDisplayTransform(const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.SetBaseDisplayTransform");
		
		UGbxGFxMovie_SetBaseDisplayTransform_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1F430
	 * 		Name   -> Function GbxUI.GbxGFxMovie.SetAudioEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxMovie::SetAudioEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.SetAudioEnabled");
		
		UGbxGFxMovie_SetAudioEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1F370
	 * 		Name   -> Function GbxUI.GbxGFxMovie.SetAnchor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FGbxGFxAnchor                               Anchor                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxMovie::SetAnchor(const struct FGbxGFxAnchor& Anchor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.SetAnchor");
		
		UGbxGFxMovie_SetAnchor_Params params {};
		params.Anchor = Anchor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1F240
	 * 		Name   -> Function GbxUI.GbxGFxMovie.RunUIEventAudio
	 * 		Flags  -> (Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class FName                                        EventName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ProviderHistory                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxGFxMovie::RunUIEventAudio(const class FName& EventName, const class FString& ProviderHistory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.RunUIEventAudio");
		
		UGbxGFxMovie_RunUIEventAudio_Params params {};
		params.EventName = EventName;
		params.ProviderHistory = ProviderHistory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1EC80
	 * 		Name   -> Function GbxUI.GbxGFxMovie.GetViewportOffset
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
	 */
	struct FVector2D UGbxGFxMovie::GetViewportOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.GetViewportOffset");
		
		UGbxGFxMovie_GetViewportOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1EC40
	 * 		Name   -> Function GbxUI.GbxGFxMovie.GetViewportDimensions
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
	 */
	struct FVector2D UGbxGFxMovie::GetViewportDimensions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.GetViewportDimensions");
		
		UGbxGFxMovie_GetViewportDimensions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1EC00
	 * 		Name   -> Function GbxUI.GbxGFxMovie.GetStageDimensions
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
	 */
	struct FVector2D UGbxGFxMovie::GetStageDimensions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.GetStageDimensions");
		
		UGbxGFxMovie_GetStageDimensions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1EBD0
	 * 		Name   -> Function GbxUI.GbxGFxMovie.GetOwningPlayerPawn
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class APawn* UGbxGFxMovie::GetOwningPlayerPawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.GetOwningPlayerPawn");
		
		UGbxGFxMovie_GetOwningPlayerPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021663B0
	 * 		Name   -> Function GbxUI.GbxGFxMovie.GetOwningPlayerController
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AGbxPlayerController* UGbxGFxMovie::GetOwningPlayerController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.GetOwningPlayerController");
		
		UGbxGFxMovie_GetOwningPlayerController_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1EB30
	 * 		Name   -> Function GbxUI.GbxGFxMovie.GetOffsetDisplayTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform UGbxGFxMovie::GetOffsetDisplayTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.GetOffsetDisplayTransform");
		
		UGbxGFxMovie_GetOffsetDisplayTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1EAF0
	 * 		Name   -> Function GbxUI.GbxGFxMovie.GetMovieDimensions
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector2D UGbxGFxMovie::GetMovieDimensions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.GetMovieDimensions");
		
		UGbxGFxMovie_GetMovieDimensions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1EA30
	 * 		Name   -> Function GbxUI.GbxGFxMovie.GetBaseDisplayTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform UGbxGFxMovie::GetBaseDisplayTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.GetBaseDisplayTransform");
		
		UGbxGFxMovie_GetBaseDisplayTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F20230
	 * 		Name   -> Function GbxUI.GbxGFxMovie.extTransitionComplete
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	void UGbxGFxMovie::extTransitionComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.extTransitionComplete");
		
		UGbxGFxMovie_extTransitionComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F20190
	 * 		Name   -> Function GbxUI.GbxGFxMovie.extAnimationFinished
	 * 		Flags  -> (Native, Public, Const)
	 * Parameters:
	 * 		class FString                                      TargetName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxMovie::extAnimationFinished(const class FString& TargetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.extAnimationFinished");
		
		UGbxGFxMovie_extAnimationFinished_Params params {};
		params.TargetName = TargetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1E970
	 * 		Name   -> Function GbxUI.GbxGFxMovie.ApplyNewAudioSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UDataTable*                                  NewDataTable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUIAudioSettingOperation                           MergeOperation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxMovie::ApplyNewAudioSettings(class UDataTable* NewDataTable, EUIAudioSettingOperation MergeOperation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMovie.ApplyNewAudioSettings");
		
		UGbxGFxMovie_ApplyNewAudioSettings_Params params {};
		params.NewDataTable = NewDataTable;
		params.MergeOperation = MergeOperation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxMovie.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxMovie::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxMovie");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1FB30
	 * 		Name   -> Function GbxUI.GbxGFxMenu.SetWidgetAdjacency
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FGbxFocusableWidgetAdjacencyInfo            AdjacencyInfo                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxMenu::SetWidgetAdjacency(const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenu.SetWidgetAdjacency");
		
		UGbxGFxMenu_SetWidgetAdjacency_Params params {};
		params.AdjacencyInfo = AdjacencyInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1F810
	 * 		Name   -> Function GbxUI.GbxGFxMenu.SetFocusedWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		bool                                               bFromMouse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxMenu::SetFocusedWidget(bool bFromMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenu.SetFocusedWidget");
		
		UGbxGFxMenu_SetFocusedWidget_Params params {};
		params.bFromMouse = bFromMouse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1F680
	 * 		Name   -> Function GbxUI.GbxGFxMenu.SetFocusableWidgetAdjancency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UObject*                                     AdjacentUp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     AdjacentDown                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     AdjacentLeft                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     AdjacentRight                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxMenu::SetFocusableWidgetAdjancency(class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenu.SetFocusableWidgetAdjancency");
		
		UGbxGFxMenu_SetFocusableWidgetAdjancency_Params params {};
		params.AdjacentUp = AdjacentUp;
		params.AdjacentDown = AdjacentDown;
		params.AdjacentLeft = AdjacentLeft;
		params.AdjacentRight = AdjacentRight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1EFE0
	 * 		Name   -> Function GbxUI.GbxGFxMenu.RegisterFocusableWidgetWithAdjacency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UObject*                                     AdjacentUp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     AdjacentDown                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     AdjacentLeft                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     AdjacentRight                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxMenu::RegisterFocusableWidgetWithAdjacency(class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenu.RegisterFocusableWidgetWithAdjacency");
		
		UGbxGFxMenu_RegisterFocusableWidgetWithAdjacency_Params params {};
		params.AdjacentUp = AdjacentUp;
		params.AdjacentDown = AdjacentDown;
		params.AdjacentLeft = AdjacentLeft;
		params.AdjacentRight = AdjacentRight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1EEC0
	 * 		Name   -> Function GbxUI.GbxGFxMenu.RegisterFocusableWidget
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FGbxFocusableWidgetAdjacencyInfo            AdjacencyInfo                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxMenu::RegisterFocusableWidget(const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenu.RegisterFocusableWidget");
		
		UGbxGFxMenu_RegisterFocusableWidget_Params params {};
		params.AdjacencyInfo = AdjacencyInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1ED50
	 * 		Name   -> Function GbxUI.GbxGFxMenu.MenuStack_Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void UGbxGFxMenu::MenuStack_Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenu.MenuStack_Clear");
		
		UGbxGFxMenu_MenuStack_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1ECC0
	 * 		Name   -> Function GbxUI.GbxGFxMenu.IsWidgetFocused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     WidgetInQuestion                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxGFxMenu::IsWidgetFocused(class UObject* WidgetInQuestion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenu.IsWidgetFocused");
		
		UGbxGFxMenu_IsWidgetFocused_Params params {};
		params.WidgetInQuestion = WidgetInQuestion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1EAC0
	 * 		Name   -> Function GbxUI.GbxGFxMenu.GetFocusedWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UObject* UGbxGFxMenu::GetFocusedWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenu.GetFocusedWidget");
		
		UGbxGFxMenu_GetFocusedWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1B5F0
	 * 		Name   -> Function GbxUI.GbxGFxHUDWidget.extInitAnimationFinished
	 * 		Flags  -> (Native, Public, Const)
	 */
	void UGbxGFxHUDWidget::extInitAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxHUDWidget.extInitAnimationFinished");
		
		UGbxGFxHUDWidget_extInitAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1B5D0
	 * 		Name   -> Function GbxUI.GbxGFxHUDWidget.extHideAnimationFinished
	 * 		Flags  -> (Native, Public, Const)
	 */
	void UGbxGFxHUDWidget::extHideAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxHUDWidget.extHideAnimationFinished");
		
		UGbxGFxHUDWidget_extHideAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxHUDWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxHUDWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxHUDWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F35BD0
	 * 		Name   -> Function GbxUI.GbxUserWidget.SetLabelText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        LabelText                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	void UGbxUserWidget::SetLabelText(const class FText& LabelText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.SetLabelText");
		
		UGbxUserWidget_SetLabelText_Params params {};
		params.LabelText = LabelText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34E50
	 * 		Name   -> Function GbxUI.GbxUserWidget.OnFocusableWidgetUnhovered
	 * 		Flags  -> (Native, Public)
	 */
	void UGbxUserWidget::OnFocusableWidgetUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.OnFocusableWidgetUnhovered");
		
		UGbxUserWidget_OnFocusableWidgetUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34E30
	 * 		Name   -> Function GbxUI.GbxUserWidget.OnFocusableWidgetReleased
	 * 		Flags  -> (Native, Public)
	 */
	void UGbxUserWidget::OnFocusableWidgetReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.OnFocusableWidgetReleased");
		
		UGbxUserWidget_OnFocusableWidgetReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34E10
	 * 		Name   -> Function GbxUI.GbxUserWidget.OnFocusableWidgetPressed
	 * 		Flags  -> (Native, Public)
	 */
	void UGbxUserWidget::OnFocusableWidgetPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.OnFocusableWidgetPressed");
		
		UGbxUserWidget_OnFocusableWidgetPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014AA4C0
	 * 		Name   -> Function GbxUI.GbxUserWidget.OnFocusableWidgetHovered
	 * 		Flags  -> (Native, Public)
	 */
	void UGbxUserWidget::OnFocusableWidgetHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.OnFocusableWidgetHovered");
		
		UGbxUserWidget_OnFocusableWidgetHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34DF0
	 * 		Name   -> Function GbxUI.GbxUserWidget.OnFocusableWidgetClicked
	 * 		Flags  -> (Native, Public)
	 */
	void UGbxUserWidget::OnFocusableWidgetClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.OnFocusableWidgetClicked");
		
		UGbxUserWidget_OnFocusableWidgetClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F349A0
	 * 		Name   -> Function GbxUI.GbxUserWidget.IsRegisteredAsFocusableWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGbxUserWidget::IsRegisteredAsFocusableWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.IsRegisteredAsFocusableWidget");
		
		UGbxUserWidget_IsRegisteredAsFocusableWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15040
	 * 		Name   -> Function GbxUI.GbxUserWidget.IsFocusableWidgetStateHovered
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGbxFocusableWidgetState                           State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxUserWidget::STATIC_IsFocusableWidgetStateHovered(EGbxFocusableWidgetState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.IsFocusableWidgetStateHovered");
		
		UGbxUserWidget_IsFocusableWidgetStateHovered_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F14FC0
	 * 		Name   -> Function GbxUI.GbxUserWidget.IsFocusableWidgetStateFocused
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGbxFocusableWidgetState                           State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxUserWidget::STATIC_IsFocusableWidgetStateFocused(EGbxFocusableWidgetState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.IsFocusableWidgetStateFocused");
		
		UGbxUserWidget_IsFocusableWidgetStateFocused_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxUserWidget.HandleFocusableWidgetStateChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGbxFocusableWidgetState                           NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBecameFocused                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLostFocus                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxUserWidget::HandleFocusableWidgetStateChanged(EGbxFocusableWidgetState NewState, bool bBecameFocused, bool bLostFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.HandleFocusableWidgetStateChanged");
		
		UGbxUserWidget_HandleFocusableWidgetStateChanged_Params params {};
		params.NewState = NewState;
		params.bBecameFocused = bBecameFocused;
		params.bLostFocus = bLostFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34080
	 * 		Name   -> Function GbxUI.GbxUserWidget.GotoAndStop
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FFrameTime                                  StopTime                                                   (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxUserWidget::GotoAndStop(const struct FFrameTime& StopTime, class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.GotoAndStop");
		
		UGbxUserWidget_GotoAndStop_Params params {};
		params.StopTime = StopTime;
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F33F00
	 * 		Name   -> Function GbxUI.GbxUserWidget.GetAllChildWidgetsOfClass
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      TargetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UWidget*>                             OutputArray                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGbxUserWidget::GetAllChildWidgetsOfClass(class UClass* TargetClass, TArray<class UWidget*>* OutputArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUserWidget.GetAllChildWidgetsOfClass");
		
		UGbxUserWidget_GetAllChildWidgetsOfClass_Params params {};
		params.TargetClass = TargetClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputArray != nullptr)
			*OutputArray = params.OutputArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxUserWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxUserWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxUserWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F35D10
	 * 		Name   -> Function GbxUI.GbxUmgMenu.SetWidgetAdjacency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxFocusableWidgetAdjacencyInfo            AdjacencyInfo                                              (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxUmgMenu::SetWidgetAdjacency(class UObject* Widget, const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.SetWidgetAdjacency");
		
		UGbxUmgMenu_SetWidgetAdjacency_Params params {};
		params.Widget = Widget;
		params.AdjacencyInfo = AdjacencyInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F35C90
	 * 		Name   -> Function GbxUI.GbxUmgMenu.SetSlateFocusedWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxUmgMenu::SetSlateFocusedWidget(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.SetSlateFocusedWidget");
		
		UGbxUmgMenu_SetSlateFocusedWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F35B30
	 * 		Name   -> Function GbxUI.GbxUmgMenu.SetHintBarContainer
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	void UGbxUmgMenu::SetHintBarContainer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.SetHintBarContainer");
		
		UGbxUmgMenu_SetHintBarContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F35A60
	 * 		Name   -> Function GbxUI.GbxUmgMenu.SetFocusedWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromMouse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxUmgMenu::SetFocusedWidget(class UObject* Widget, bool bFromMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.SetFocusedWidget");
		
		UGbxUmgMenu_SetFocusedWidget_Params params {};
		params.Widget = Widget;
		params.bFromMouse = bFromMouse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F358D0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.SetFocusableWidgetAdjancency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     AdjacentUp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     AdjacentDown                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     AdjacentLeft                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     AdjacentRight                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxUmgMenu::SetFocusableWidgetAdjancency(class UObject* Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.SetFocusableWidgetAdjancency");
		
		UGbxUmgMenu_SetFocusableWidgetAdjancency_Params params {};
		params.Widget = Widget;
		params.AdjacentUp = AdjacentUp;
		params.AdjacentDown = AdjacentDown;
		params.AdjacentLeft = AdjacentLeft;
		params.AdjacentRight = AdjacentRight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F35670
	 * 		Name   -> Function GbxUI.GbxUmgMenu.RegisterStagePlacedHint
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InInputAction                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxUmgMenu::RegisterStagePlacedHint(const class FName& InInputAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.RegisterStagePlacedHint");
		
		UGbxUmgMenu_RegisterStagePlacedHint_Params params {};
		params.InInputAction = InInputAction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F354E0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.RegisterFocusableWidgetWithAdjacency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     AdjacentUp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     AdjacentDown                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     AdjacentLeft                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     AdjacentRight                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxUmgMenu::RegisterFocusableWidgetWithAdjacency(class UObject* Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.RegisterFocusableWidgetWithAdjacency");
		
		UGbxUmgMenu_RegisterFocusableWidgetWithAdjacency_Params params {};
		params.Widget = Widget;
		params.AdjacentUp = AdjacentUp;
		params.AdjacentDown = AdjacentDown;
		params.AdjacentLeft = AdjacentLeft;
		params.AdjacentRight = AdjacentRight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F353D0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.RegisterFocusableWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxFocusableWidgetAdjacencyInfo            AdjacencyInfo                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxUmgMenu::RegisterFocusableWidget(class UObject* Widget, const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.RegisterFocusableWidget");
		
		UGbxUmgMenu_RegisterFocusableWidget_Params params {};
		params.Widget = Widget;
		params.AdjacencyInfo = AdjacencyInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02E073B0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.PopulateHintBar
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UGbxUmgMenu::PopulateHintBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.PopulateHintBar");
		
		UGbxUmgMenu_PopulateHintBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34DD0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.NavigateBack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxUmgMenu::NavigateBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.NavigateBack");
		
		UGbxUmgMenu_NavigateBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34C70
	 * 		Name   -> Function GbxUI.GbxUmgMenu.MenuStack_SwitchTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGbxMenuData*                                MenuDataIn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UGbxUmgMenu::MenuStack_SwitchTo(class UGbxMenuData* MenuDataIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.MenuStack_SwitchTo");
		
		UGbxUmgMenu_MenuStack_SwitchTo_Params params {};
		params.MenuDataIn = MenuDataIn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34BE0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.MenuStack_Push
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGbxMenuData*                                MenuDataIn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UGbxUmgMenu::MenuStack_Push(class UGbxMenuData* MenuDataIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.MenuStack_Push");
		
		UGbxUmgMenu_MenuStack_Push_Params params {};
		params.MenuDataIn = MenuDataIn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34B20
	 * 		Name   -> Function GbxUI.GbxUmgMenu.MenuStack_PopToSwitchTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Menu                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGbxMenuData*                                MenuDataIn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UGbxUmgMenu::MenuStack_PopToSwitchTo(class UObject* Menu, class UGbxMenuData* MenuDataIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.MenuStack_PopToSwitchTo");
		
		UGbxUmgMenu_MenuStack_PopToSwitchTo_Params params {};
		params.Menu = Menu;
		params.MenuDataIn = MenuDataIn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34AA0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.MenuStack_PopTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Menu                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxUmgMenu::MenuStack_PopTo(class UObject* Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.MenuStack_PopTo");
		
		UGbxUmgMenu_MenuStack_PopTo_Params params {};
		params.Menu = Menu;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34A80
	 * 		Name   -> Function GbxUI.GbxUmgMenu.MenuStack_Pop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxUmgMenu::MenuStack_Pop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.MenuStack_Pop");
		
		UGbxUmgMenu_MenuStack_Pop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34A60
	 * 		Name   -> Function GbxUI.GbxUmgMenu.MenuStack_Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxUmgMenu::MenuStack_Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.MenuStack_Clear");
		
		UGbxUmgMenu_MenuStack_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F349D0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.IsWidgetFocused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     WidgetInQuestion                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxUmgMenu::IsWidgetFocused(class UObject* WidgetInQuestion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.IsWidgetFocused");
		
		UGbxUmgMenu_IsWidgetFocused_Params params {};
		params.WidgetInQuestion = WidgetInQuestion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F347C0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.IsActiveMenuOnStack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGbxUmgMenu::IsActiveMenuOnStack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.IsActiveMenuOnStack");
		
		UGbxUmgMenu_IsActiveMenuOnStack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.HandleMenuInputDeviceChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxMenuInputDevice                                NewInputDevice                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxUmgMenu::HandleMenuInputDeviceChanged(EGbxMenuInputDevice NewInputDevice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.HandleMenuInputDeviceChanged");
		
		UGbxUmgMenu_HandleMenuInputDeviceChanged_Params params {};
		params.NewInputDevice = NewInputDevice;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.HandleMenuInputAction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        InputAction                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ControllerId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxUmgMenu::HandleMenuInputAction(const class FName& InputAction, int32_t ControllerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.HandleMenuInputAction");
		
		UGbxUmgMenu_HandleMenuInputAction_Params params {};
		params.InputAction = InputAction;
		params.ControllerId = ControllerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.HandleMenuInit
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGbxUmgMenu::HandleMenuInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.HandleMenuInit");
		
		UGbxUmgMenu_HandleMenuInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.HandleMenuDeinit
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGbxUmgMenu::HandleMenuDeinit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.HandleMenuDeinit");
		
		UGbxUmgMenu_HandleMenuDeinit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.HandleMenuDeactivate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGbxUmgMenu::HandleMenuDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.HandleMenuDeactivate");
		
		UGbxUmgMenu_HandleMenuDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.HandleMenuAspectRatioChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewAspectRatio                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxUmgMenu::HandleMenuAspectRatioChanged(float NewAspectRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.HandleMenuAspectRatioChanged");
		
		UGbxUmgMenu_HandleMenuAspectRatioChanged_Params params {};
		params.NewAspectRatio = NewAspectRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.HandleMenuActivate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGbxUmgMenu::HandleMenuActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.HandleMenuActivate");
		
		UGbxUmgMenu_HandleMenuActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34050
	 * 		Name   -> Function GbxUI.GbxUmgMenu.GetListItemFactory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGbxListItemFactory* UGbxUmgMenu::GetListItemFactory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.GetListItemFactory");
		
		UGbxUmgMenu_GetListItemFactory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34020
	 * 		Name   -> Function GbxUI.GbxUmgMenu.GetFocusedWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UObject* UGbxUmgMenu::GetFocusedWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.GetFocusedWidget");
		
		UGbxUmgMenu_GetFocusedWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F33FF0
	 * 		Name   -> Function GbxUI.GbxUmgMenu.GetCurrentInputDevice
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EGbxMenuInputDevice UGbxUmgMenu::GetCurrentInputDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUmgMenu.GetCurrentInputDevice");
		
		UGbxUmgMenu_GetCurrentInputDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxUmgMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxUmgMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxUmgMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxMenuSwitcherSubmenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxMenuSwitcherSubmenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxMenuSwitcherSubmenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxDebugMenuSubmenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxDebugMenuSubmenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxDebugMenuSubmenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxMenuData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxMenuData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxMenuData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxMenuData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxMenuData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxMenuData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1F9D0
	 * 		Name   -> Function GbxUI.GbxGFxObject.SetOffsetDisplayTransform
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxObject::SetOffsetDisplayTransform(const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxObject.SetOffsetDisplayTransform");
		
		UGbxGFxObject_SetOffsetDisplayTransform_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1F5A0
	 * 		Name   -> Function GbxUI.GbxGFxObject.SetBaseDisplayTransform
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxObject::SetBaseDisplayTransform(const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxObject.SetBaseDisplayTransform");
		
		UGbxGFxObject_SetBaseDisplayTransform_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1F170
	 * 		Name   -> Function GbxUI.GbxGFxObject.RotateAboutPoint
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Degrees                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Point                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxObject::RotateAboutPoint(float Degrees, const struct FVector2D& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxObject.RotateAboutPoint");
		
		UGbxGFxObject_RotateAboutPoint_Params params {};
		params.Degrees = Degrees;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1EB90
	 * 		Name   -> Function GbxUI.GbxGFxObject.GetOffsetDisplayTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform UGbxGFxObject::GetOffsetDisplayTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxObject.GetOffsetDisplayTransform");
		
		UGbxGFxObject_GetOffsetDisplayTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1EA90
	 * 		Name   -> Function GbxUI.GbxGFxObject.GetBaseDisplayTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform UGbxGFxObject::GetBaseDisplayTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxObject.GetBaseDisplayTransform");
		
		UGbxGFxObject_GetBaseDisplayTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F16040
	 * 		Name   -> Function GbxUI.GbxGFxButton.SetLockedState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGbxGFxButtonLockedState                           InLockedState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldRefresh                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxButton::SetLockedState(EGbxGFxButtonLockedState InLockedState, bool bShouldRefresh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.SetLockedState");
		
		UGbxGFxButton_SetLockedState_Params params {};
		params.InLockedState = InLockedState;
		params.bShouldRefresh = bShouldRefresh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15F20
	 * 		Name   -> Function GbxUI.GbxGFxButton.SetLabelText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceUpdate                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxButton::SetLabelText(const class FText& Text, bool bForceUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.SetLabelText");
		
		UGbxGFxButton_SetLabelText_Params params {};
		params.Text = Text;
		params.bForceUpdate = bForceUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15B80
	 * 		Name   -> Function GbxUI.GbxGFxButton.SetCheckedState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGbxGFxButtonCheckedState                          InCheckedState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldRefresh                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxButton::SetCheckedState(EGbxGFxButtonCheckedState InCheckedState, bool bShouldRefresh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.SetCheckedState");
		
		UGbxGFxButton_SetCheckedState_Params params {};
		params.InCheckedState = InCheckedState;
		params.bShouldRefresh = bShouldRefresh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15B00
	 * 		Name   -> Function GbxUI.GbxGFxButton.SetButtonType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGbxGFxButtonType                                  InButtonType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxButton::SetButtonType(EGbxGFxButtonType InButtonType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.SetButtonType");
		
		UGbxGFxButton_SetButtonType_Params params {};
		params.InButtonType = InButtonType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F157C0
	 * 		Name   -> Function GbxUI.GbxGFxButton.RefreshView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGbxFocusableWidgetState                           PrevState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxButton::RefreshView(EGbxFocusableWidgetState PrevState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.RefreshView");
		
		UGbxGFxButton_RefreshView_Params params {};
		params.PrevState = PrevState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxGFxButton.K2_HandleFocusableWidgetStateChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGbxFocusableWidgetState                           NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBecameFocused                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLostFocus                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxButton::K2_HandleFocusableWidgetStateChanged(EGbxFocusableWidgetState NewState, bool bBecameFocused, bool bLostFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.K2_HandleFocusableWidgetStateChanged");
		
		UGbxGFxButton_K2_HandleFocusableWidgetStateChanged_Params params {};
		params.NewState = NewState;
		params.bBecameFocused = bBecameFocused;
		params.bLostFocus = bLostFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15170
	 * 		Name   -> Function GbxUI.GbxGFxButton.IsRegisteredAsFocusableWidget
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGbxGFxButton::IsRegisteredAsFocusableWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.IsRegisteredAsFocusableWidget");
		
		UGbxGFxButton_IsRegisteredAsFocusableWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15140
	 * 		Name   -> Function GbxUI.GbxGFxButton.IsLocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGbxGFxButton::IsLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.IsLocked");
		
		UGbxGFxButton_IsLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F150C0
	 * 		Name   -> Function GbxUI.GbxGFxButton.IsFocusableWidgetStateUp
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGbxFocusableWidgetState                           State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxGFxButton::STATIC_IsFocusableWidgetStateUp(EGbxFocusableWidgetState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.IsFocusableWidgetStateUp");
		
		UGbxGFxButton_IsFocusableWidgetStateUp_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15040
	 * 		Name   -> Function GbxUI.GbxGFxButton.IsFocusableWidgetStateHovered
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGbxFocusableWidgetState                           State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxGFxButton::STATIC_IsFocusableWidgetStateHovered(EGbxFocusableWidgetState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.IsFocusableWidgetStateHovered");
		
		UGbxGFxButton_IsFocusableWidgetStateHovered_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F14FC0
	 * 		Name   -> Function GbxUI.GbxGFxButton.IsFocusableWidgetStateFocused
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGbxFocusableWidgetState                           State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxGFxButton::STATIC_IsFocusableWidgetStateFocused(EGbxFocusableWidgetState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.IsFocusableWidgetStateFocused");
		
		UGbxGFxButton_IsFocusableWidgetStateFocused_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F14F40
	 * 		Name   -> Function GbxUI.GbxGFxButton.IsFocusableWidgetStateDown
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGbxFocusableWidgetState                           State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxGFxButton::STATIC_IsFocusableWidgetStateDown(EGbxFocusableWidgetState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.IsFocusableWidgetStateDown");
		
		UGbxGFxButton_IsFocusableWidgetStateDown_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F14EC0
	 * 		Name   -> Function GbxUI.GbxGFxButton.IsFocusableWidgetStateDisabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGbxFocusableWidgetState                           State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxGFxButton::STATIC_IsFocusableWidgetStateDisabled(EGbxFocusableWidgetState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.IsFocusableWidgetStateDisabled");
		
		UGbxGFxButton_IsFocusableWidgetStateDisabled_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F14E30
	 * 		Name   -> Function GbxUI.GbxGFxButton.IsChecked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGbxGFxButton::IsChecked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.IsChecked");
		
		UGbxGFxButton_IsChecked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F14DA0
	 * 		Name   -> Function GbxUI.GbxGFxButton.GetLockedState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EGbxGFxButtonLockedState UGbxGFxButton::GetLockedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.GetLockedState");
		
		UGbxGFxButton_GetLockedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F14D70
	 * 		Name   -> Function GbxUI.GbxGFxButton.GetCheckedState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EGbxGFxButtonCheckedState UGbxGFxButton::GetCheckedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.GetCheckedState");
		
		UGbxGFxButton_GetCheckedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F14D40
	 * 		Name   -> Function GbxUI.GbxGFxButton.GetButtonType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EGbxGFxButtonType UGbxGFxButton::GetButtonType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxButton.GetButtonType");
		
		UGbxGFxButton_GetButtonType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxUI.GbxGFxButton.GbxGFxButtonEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		class UGbxGFxButton*                               BUTTON                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxButton::GbxGFxButtonEvent__DelegateSignature(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxUI.GbxGFxButton.GbxGFxButtonEvent__DelegateSignature");
		
		UGbxGFxButton_GbxGFxButtonEvent__DelegateSignature_Params params {};
		params.BUTTON = BUTTON;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxListCell.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxListCell::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxListCell");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxListCellWithData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxListCellWithData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxListCellWithData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1B460
	 * 		Name   -> Function GbxUI.GbxGFxListItemSpinner.OnSpinnerValueUpdated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGbxGFxListItemSpinner::OnSpinnerValueUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxListItemSpinner.OnSpinnerValueUpdated");
		
		UGbxGFxListItemSpinner_OnSpinnerValueUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxListItemSpinner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxListItemSpinner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxListItemSpinner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxMenuSwitcherSubmenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxMenuSwitcherSubmenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxMenuSwitcherSubmenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxMenuSwitcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxMenuSwitcher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxMenuSwitcher");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxMovieLoader.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxMovieLoader::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxMovieLoader");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F25150
	 * 		Name   -> Function GbxUI.GbxGFxProgressBar.SetPercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InPercent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxProgressBar::SetPercent(float InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.SetPercent");
		
		UGbxGFxProgressBar_SetPercent_Params params {};
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F25080
	 * 		Name   -> Function GbxUI.GbxGFxProgressBar.SetMaxValueText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxProgressBar::SetMaxValueText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.SetMaxValueText");
		
		UGbxGFxProgressBar_SetMaxValueText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24F50
	 * 		Name   -> Function GbxUI.GbxGFxProgressBar.SetFillColorAndOpacity
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.SetFillColorAndOpacity");
		
		UGbxGFxProgressBar_SetFillColorAndOpacity_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24E80
	 * 		Name   -> Function GbxUI.GbxGFxProgressBar.SetCurrentValueText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxProgressBar::SetCurrentValueText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.SetCurrentValueText");
		
		UGbxGFxProgressBar_SetCurrentValueText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24920
	 * 		Name   -> Function GbxUI.GbxGFxProgressBar.PassedPercentThreshold
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Threshold                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OldValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurrentValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncreasing                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDecreasing                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxGFxProgressBar::STATIC_PassedPercentThreshold(float Threshold, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.PassedPercentThreshold");
		
		UGbxGFxProgressBar_PassedPercentThreshold_Params params {};
		params.Threshold = Threshold;
		params.OldValue = OldValue;
		params.CurrentValue = CurrentValue;
		params.bIncreasing = bIncreasing;
		params.bDecreasing = bDecreasing;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F245F0
	 * 		Name   -> Function GbxUI.GbxGFxProgressBar.InterpolateToPercentWithInterpolator
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InPercent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxProgressBarInterpolator                 Interpolator                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxProgressBar::InterpolateToPercentWithInterpolator(float InPercent, const struct FGbxProgressBarInterpolator& Interpolator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.InterpolateToPercentWithInterpolator");
		
		UGbxGFxProgressBar_InterpolateToPercentWithInterpolator_Params params {};
		params.InPercent = InPercent;
		params.Interpolator = Interpolator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24570
	 * 		Name   -> Function GbxUI.GbxGFxProgressBar.InterpolateToPercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InPercent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxProgressBar::InterpolateToPercent(float InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.InterpolateToPercent");
		
		UGbxGFxProgressBar_InterpolateToPercent_Params params {};
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxGFxProgressBar.HandlePercentChanged
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		float                                              OldValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurrentValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsInterpolating                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxProgressBarInterpolator                 ActiveInterpolator                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxProgressBar::HandlePercentChanged(float OldValue, float CurrentValue, bool bIsInterpolating, const struct FGbxProgressBarInterpolator& ActiveInterpolator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.HandlePercentChanged");
		
		UGbxGFxProgressBar_HandlePercentChanged_Params params {};
		params.OldValue = OldValue;
		params.CurrentValue = CurrentValue;
		params.bIsInterpolating = bIsInterpolating;
		params.ActiveInterpolator = ActiveInterpolator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxGFxProgressBar.HandleEnterPercentRange
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        RangeName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxProgressBar::HandleEnterPercentRange(const class FName& RangeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.HandleEnterPercentRange");
		
		UGbxGFxProgressBar_HandleEnterPercentRange_Params params {};
		params.RangeName = RangeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24420
	 * 		Name   -> Function GbxUI.GbxGFxProgressBar.GetPercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGbxGFxProgressBar::GetPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.GetPercent");
		
		UGbxGFxProgressBar_GetPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F241E0
	 * 		Name   -> Function GbxUI.GbxGFxProgressBar.EnteredPercentRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              RangeMin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeMax                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OldValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurrentValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncreasing                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDecreasing                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxGFxProgressBar::STATIC_EnteredPercentRange(float RangeMin, float RangeMax, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxProgressBar.EnteredPercentRange");
		
		UGbxGFxProgressBar_EnteredPercentRange_Params params {};
		params.RangeMin = RangeMin;
		params.RangeMax = RangeMax;
		params.OldValue = OldValue;
		params.CurrentValue = CurrentValue;
		params.bIncreasing = bIncreasing;
		params.bDecreasing = bDecreasing;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxProgressBar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxProgressBar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxProgressBar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1B260
	 * 		Name   -> Function GbxUI.GbxGFxGridScrollingList.OnScrollBarPositionUpdated
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		float                                              SliderPercentage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxGridScrollingList::OnScrollBarPositionUpdated(float SliderPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxGridScrollingList.OnScrollBarPositionUpdated");
		
		UGbxGFxGridScrollingList_OnScrollBarPositionUpdated_Params params {};
		params.SliderPercentage = SliderPercentage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxGridScrollingList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxGridScrollingList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxGridScrollingList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxPooledGridList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxPooledGridList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxPooledGridList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxRadioButtonList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxRadioButtonList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxRadioButtonList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1B3E0
	 * 		Name   -> Function GbxUI.GbxGFxListItemNumber.OnSliderUpdated
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              SliderPct                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxListItemNumber::OnSliderUpdated(float SliderPct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxListItemNumber.OnSliderUpdated");
		
		UGbxGFxListItemNumber_OnSliderUpdated_Params params {};
		params.SliderPct = SliderPct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxListItemNumber.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxListItemNumber::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxListItemNumber");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxEditableTextField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxEditableTextField::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxEditableTextField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxGridScrollingListPaged.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxGridScrollingListPaged::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxGridScrollingListPaged");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxMenuSwitcherMenuData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxMenuSwitcherMenuData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxMenuSwitcherMenuData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxHUDContainer.HandleInit
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGbxHUDContainer::HandleInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUDContainer.HandleInit");
		
		UGbxHUDContainer_HandleInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxHUDContainer.HandleDeinit
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGbxHUDContainer::HandleDeinit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUDContainer.HandleDeinit");
		
		UGbxHUDContainer_HandleDeinit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxHUDContainer.HandleDeactivate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGbxHUDContainer::HandleDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUDContainer.HandleDeactivate");
		
		UGbxHUDContainer_HandleDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxHUDContainer.HandleActivate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGbxHUDContainer::HandleActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUDContainer.HandleActivate");
		
		UGbxHUDContainer_HandleActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxHUDContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxHUDContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxHUDContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxHUDWidget.HandleInit
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGbxHUDWidget::HandleInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUDWidget.HandleInit");
		
		UGbxHUDWidget_HandleInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxHUDWidget.HandleDeinit
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGbxHUDWidget::HandleDeinit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUDWidget.HandleDeinit");
		
		UGbxHUDWidget_HandleDeinit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxHUDWidget.HandleDeactivate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGbxHUDWidget::HandleDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUDWidget.HandleDeactivate");
		
		UGbxHUDWidget_HandleDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxHUDWidget.HandleActivate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGbxHUDWidget::HandleActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUDWidget.HandleActivate");
		
		UGbxHUDWidget_HandleActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxHUDWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxHUDWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxHUDWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F29E00
	 * 		Name   -> Function GbxUI.GbxListItem.GetItemIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UGbxListItem::GetItemIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItem.GetItemIndex");
		
		UGbxListItem_GetItemIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxListItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxListItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxListItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxListItemText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxListItemText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxListItemText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxHUDContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxHUDContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxHUDContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F251D0
	 * 		Name   -> Function GbxUI.GbxHUD.SwitchToHUDState
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGbxHUDStateData*                            State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxHUD::STATIC_SwitchToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.SwitchToHUDState");
		
		AGbxHUD_SwitchToHUDState_Params params {};
		params.PlayerController = PlayerController;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24FD0
	 * 		Name   -> Function GbxUI.GbxHUD.SetHUDContainer
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGbxHUDData*                                 ContainerDefinition                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxHUD::STATIC_SetHUDContainer(class AGbxPlayerController* PlayerController, class UGbxHUDData* ContainerDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.SetHUDContainer");
		
		AGbxHUD_SetHUDContainer_Params params {};
		params.PlayerController = PlayerController;
		params.ContainerDefinition = ContainerDefinition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24D80
	 * 		Name   -> Function GbxUI.GbxHUD.PushHUDState
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGbxHUDStateData*                            State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowDuplicatePush                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxHUD::STATIC_PushHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State, bool bAllowDuplicatePush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.PushHUDState");
		
		AGbxHUD_PushHUDState_Params params {};
		params.PlayerController = PlayerController;
		params.State = State;
		params.bAllowDuplicatePush = bAllowDuplicatePush;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24C90
	 * 		Name   -> Function GbxUI.GbxHUD.PopToSwitchToHUDState
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGbxHUDStateData*                            PopToState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGbxHUDStateData*                            SwitchToState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxHUD::STATIC_PopToSwitchToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* PopToState, class UGbxHUDStateData* SwitchToState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.PopToSwitchToHUDState");
		
		AGbxHUD_PopToSwitchToHUDState_Params params {};
		params.PlayerController = PlayerController;
		params.PopToState = PopToState;
		params.SwitchToState = SwitchToState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24BE0
	 * 		Name   -> Function GbxUI.GbxHUD.PopToHUDState
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGbxHUDStateData*                            State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxHUD::STATIC_PopToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.PopToHUDState");
		
		AGbxHUD_PopToHUDState_Params params {};
		params.PlayerController = PlayerController;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24B30
	 * 		Name   -> Function GbxUI.GbxHUD.PopSpecifiedHUDState
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGbxHUDStateData*                            State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxHUD::STATIC_PopSpecifiedHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.PopSpecifiedHUDState");
		
		AGbxHUD_PopSpecifiedHUDState_Params params {};
		params.PlayerController = PlayerController;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24AC0
	 * 		Name   -> Function GbxUI.GbxHUD.PopHUDState
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxHUD::STATIC_PopHUDState(class AGbxPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.PopHUDState");
		
		AGbxHUD_PopHUDState_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F248A0
	 * 		Name   -> Function GbxUI.GbxHUD.OnPrimaryCharacterChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class AGbxCharacter*                               Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxHUD::OnPrimaryCharacterChanged(class AGbxCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.OnPrimaryCharacterChanged");
		
		AGbxHUD_OnPrimaryCharacterChanged_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F247D0
	 * 		Name   -> Function GbxUI.GbxHUD.OnPawnChanged
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       OldPawn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxHUD::OnPawnChanged(class APawn* Pawn, class APawn* OldPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.OnPawnChanged");
		
		AGbxHUD_OnPawnChanged_Params params {};
		params.Pawn = Pawn;
		params.OldPawn = OldPawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24500
	 * 		Name   -> Function GbxUI.GbxHUD.GotoPreviousHUDState
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxHUD::STATIC_GotoPreviousHUDState(class AGbxPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.GotoPreviousHUDState");
		
		AGbxHUD_GotoPreviousHUDState_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24450
	 * 		Name   -> Function GbxUI.GbxHUD.GotoHUDState
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGbxHUDStateData*                            State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxHUD::STATIC_GotoHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.GotoHUDState");
		
		AGbxHUD_GotoHUDState_Params params {};
		params.PlayerController = PlayerController;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F243A0
	 * 		Name   -> Function GbxUI.GbxHUD.GetCurrentHUDState
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxHUDStateData* AGbxHUD::STATIC_GetCurrentHUDState(class AGbxPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.GetCurrentHUDState");
		
		AGbxHUD_GetCurrentHUDState_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24020
	 * 		Name   -> Function GbxUI.GbxHUD.ClearToDefaultHUDState
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxHUD::STATIC_ClearToDefaultHUDState(class AGbxPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.ClearToDefaultHUDState");
		
		AGbxHUD_ClearToDefaultHUDState_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F23FB0
	 * 		Name   -> Function GbxUI.GbxHUD.ClearHUDStates
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxHUD::STATIC_ClearHUDStates(class AGbxPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHUD.ClearHUDStates");
		
		AGbxHUD_ClearHUDStates_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGbxHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2FCA0
	 * 		Name   -> Function GbxUI.GbxUILibrary.SendTextToDebugHUD
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        Text                                                       (Parm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TextSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxUILibrary::STATIC_SendTextToDebugHUD(class UObject* WorldContextObject, const class FText& Text, const struct FLinearColor& Color, int32_t TextSize, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.SendTextToDebugHUD");
		
		UGbxUILibrary_SendTextToDebugHUD_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Text = Text;
		params.Color = Color;
		params.TextSize = TextSize;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2FB80
	 * 		Name   -> Function GbxUI.GbxUILibrary.PlayFullScreenMovie
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        GbxPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPlayOnceAndDestroy                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxFullScreenMovie* UGbxUILibrary::STATIC_PlayFullScreenMovie(class AGbxPlayerController* GbxPC, class UMediaSource* MediaSource, bool bPlayOnceAndDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.PlayFullScreenMovie");
		
		UGbxUILibrary_PlayFullScreenMovie_Params params {};
		params.GbxPC = GbxPC;
		params.MediaSource = MediaSource;
		params.bPlayOnceAndDestroy = bPlayOnceAndDestroy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2F670
	 * 		Name   -> Function GbxUI.GbxUILibrary.CreateTextListItemWithDelegates
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        LabelText                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ClickedDelegate                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SelectedDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UGbxListItemText* UGbxUILibrary::STATIC_CreateTextListItemWithDelegates(class APlayerController* OwningPlayer, const class FText& LabelText, const class FScriptDelegate& ClickedDelegate, const class FScriptDelegate& SelectedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateTextListItemWithDelegates");
		
		UGbxUILibrary_CreateTextListItemWithDelegates_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.LabelText = LabelText;
		params.ClickedDelegate = ClickedDelegate;
		params.SelectedDelegate = SelectedDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2F4F0
	 * 		Name   -> Function GbxUI.GbxUILibrary.CreateTextListItem
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        LabelText                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	class UGbxListItemText* UGbxUILibrary::STATIC_CreateTextListItem(class APlayerController* OwningPlayer, const class FText& LabelText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateTextListItem");
		
		UGbxUILibrary_CreateTextListItem_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.LabelText = LabelText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2F1D0
	 * 		Name   -> Function GbxUI.GbxUILibrary.CreateNumberListItemWithDelegates
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        LabelText                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              InitialValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SliderMin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SliderMax                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SliderStep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ChangedDelegate                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SelectedDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UGbxListItemNumber* UGbxUILibrary::STATIC_CreateNumberListItemWithDelegates(class APlayerController* OwningPlayer, const class FText& LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep, const class FScriptDelegate& ChangedDelegate, const class FScriptDelegate& SelectedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateNumberListItemWithDelegates");
		
		UGbxUILibrary_CreateNumberListItemWithDelegates_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.LabelText = LabelText;
		params.InitialValue = InitialValue;
		params.SliderMin = SliderMin;
		params.SliderMax = SliderMax;
		params.SliderStep = SliderStep;
		params.ChangedDelegate = ChangedDelegate;
		params.SelectedDelegate = SelectedDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2EF70
	 * 		Name   -> Function GbxUI.GbxUILibrary.CreateNumberListItem
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        LabelText                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              InitialValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SliderMin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SliderMax                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SliderStep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxListItemNumber* UGbxUILibrary::STATIC_CreateNumberListItem(class APlayerController* OwningPlayer, const class FText& LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateNumberListItem");
		
		UGbxUILibrary_CreateNumberListItem_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.LabelText = LabelText;
		params.InitialValue = InitialValue;
		params.SliderMin = SliderMin;
		params.SliderMax = SliderMax;
		params.SliderStep = SliderStep;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2EDA0
	 * 		Name   -> Function GbxUI.GbxUILibrary.CreateListItemWithDelegates
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ItemClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ClickedDelegate                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SelectedDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UGbxListItem* UGbxUILibrary::STATIC_CreateListItemWithDelegates(class APlayerController* OwningPlayer, class UClass* ItemClass, const class FScriptDelegate& ClickedDelegate, const class FScriptDelegate& SelectedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateListItemWithDelegates");
		
		UGbxUILibrary_CreateListItemWithDelegates_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.ItemClass = ItemClass;
		params.ClickedDelegate = ClickedDelegate;
		params.SelectedDelegate = SelectedDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2EC80
	 * 		Name   -> Function GbxUI.GbxUILibrary.CreateListItem
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ItemClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxListItem* UGbxUILibrary::STATIC_CreateListItem(class APlayerController* OwningPlayer, class UClass* ItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateListItem");
		
		UGbxUILibrary_CreateListItem_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2EAE0
	 * 		Name   -> Function GbxUI.GbxUILibrary.CreateDefaultListItemWithDelegates
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ClickedDelegate                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SelectedDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UGbxListItem* UGbxUILibrary::STATIC_CreateDefaultListItemWithDelegates(class APlayerController* OwningPlayer, const class FScriptDelegate& ClickedDelegate, const class FScriptDelegate& SelectedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateDefaultListItemWithDelegates");
		
		UGbxUILibrary_CreateDefaultListItemWithDelegates_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.ClickedDelegate = ClickedDelegate;
		params.SelectedDelegate = SelectedDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2EA00
	 * 		Name   -> Function GbxUI.GbxUILibrary.CreateDefaultListItem
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxListItem* UGbxUILibrary::STATIC_CreateDefaultListItem(class APlayerController* OwningPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateDefaultListItem");
		
		UGbxUILibrary_CreateDefaultListItem_Params params {};
		params.OwningPlayer = OwningPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2E740
	 * 		Name   -> Function GbxUI.GbxUILibrary.CreateComboBoxListItemWithDelegates
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        LabelText                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<class FText>                                Items                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InitialIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ChangedDelegate                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SelectedDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UGbxListItemComboBox* UGbxUILibrary::STATIC_CreateComboBoxListItemWithDelegates(class APlayerController* OwningPlayer, const class FText& LabelText, TArray<class FText> Items, int32_t InitialIndex, const class FScriptDelegate& ChangedDelegate, const class FScriptDelegate& SelectedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateComboBoxListItemWithDelegates");
		
		UGbxUILibrary_CreateComboBoxListItemWithDelegates_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.LabelText = LabelText;
		params.Items = Items;
		params.InitialIndex = InitialIndex;
		params.ChangedDelegate = ChangedDelegate;
		params.SelectedDelegate = SelectedDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2E540
	 * 		Name   -> Function GbxUI.GbxUILibrary.CreateComboBoxListItem
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        LabelText                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<class FText>                                Items                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InitialIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxListItemComboBox* UGbxUILibrary::STATIC_CreateComboBoxListItem(class APlayerController* OwningPlayer, const class FText& LabelText, TArray<class FText> Items, int32_t InitialIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateComboBoxListItem");
		
		UGbxUILibrary_CreateComboBoxListItem_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.LabelText = LabelText;
		params.Items = Items;
		params.InitialIndex = InitialIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2E2D0
	 * 		Name   -> Function GbxUI.GbxUILibrary.CreateBooleanListItemWithDelegates
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        LabelText                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               InitialValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ChangedDelegate                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SelectedDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UGbxListItemBoolean* UGbxUILibrary::STATIC_CreateBooleanListItemWithDelegates(class APlayerController* OwningPlayer, const class FText& LabelText, bool InitialValue, const class FScriptDelegate& ChangedDelegate, const class FScriptDelegate& SelectedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateBooleanListItemWithDelegates");
		
		UGbxUILibrary_CreateBooleanListItemWithDelegates_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.LabelText = LabelText;
		params.InitialValue = InitialValue;
		params.ChangedDelegate = ChangedDelegate;
		params.SelectedDelegate = SelectedDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2E100
	 * 		Name   -> Function GbxUI.GbxUILibrary.CreateBooleanListItem
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        LabelText                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               InitialValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxListItemBoolean* UGbxUILibrary::STATIC_CreateBooleanListItem(class APlayerController* OwningPlayer, const class FText& LabelText, bool InitialValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.CreateBooleanListItem");
		
		UGbxUILibrary_CreateBooleanListItem_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.LabelText = LabelText;
		params.InitialValue = InitialValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2E030
	 * 		Name   -> Function GbxUI.GbxUILibrary.AbbreviateNumberText
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ValueToFormat                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UGbxUILibrary::STATIC_AbbreviateNumberText(float ValueToFormat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILibrary.AbbreviateNumberText");
		
		UGbxUILibrary_AbbreviateNumberText_Params params {};
		params.ValueToFormat = ValueToFormat;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxUILibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxUILibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxUILibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxUIGlobals.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxUIGlobals::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxUIGlobals");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxUmgMenuData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxUmgMenuData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxUmgMenuData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15840
	 * 		Name   -> Function GbxUI.GbxCascadingList.SetActiveList
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UGbxGridListWidget*                          List                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxCascadingList::SetActiveList(class UGbxGridListWidget* List)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.SetActiveList");
		
		UGbxCascadingList_SetActiveList_Params params {};
		params.List = List;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15720
	 * 		Name   -> Function GbxUI.GbxCascadingList.PushItems
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FGbxCascadingListItemData>           Items                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxCascadingList::PushItems(TArray<struct FGbxCascadingListItemData> Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.PushItems");
		
		UGbxCascadingList_PushItems_Params params {};
		params.Items = Items;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15700
	 * 		Name   -> Function GbxUI.GbxCascadingList.Pop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxCascadingList::Pop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.Pop");
		
		UGbxCascadingList_Pop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxCascadingList.OnShiftListsForward
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGbxCascadingList::OnShiftListsForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.OnShiftListsForward");
		
		UGbxCascadingList_OnShiftListsForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxCascadingList.OnShiftListsBack
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGbxCascadingList::OnShiftListsBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.OnShiftListsBack");
		
		UGbxCascadingList_OnShiftListsBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F155E0
	 * 		Name   -> Function GbxUI.GbxCascadingList.OnItemSelected_Internal
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UGbxListItem*                                Item                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxCascadingList::OnItemSelected_Internal(class UGbxListItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.OnItemSelected_Internal");
		
		UGbxCascadingList_OnItemSelected_Internal_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15560
	 * 		Name   -> Function GbxUI.GbxCascadingList.OnItemClicked_Internal
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UGbxListItem*                                Item                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxCascadingList::OnItemClicked_Internal(class UGbxListItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.OnItemClicked_Internal");
		
		UGbxCascadingList_OnItemClicked_Internal_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F14E00
	 * 		Name   -> Function GbxUI.GbxCascadingList.HasItems
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGbxCascadingList::HasItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.HasItems");
		
		UGbxCascadingList_HasItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F14DD0
	 * 		Name   -> Function GbxUI.GbxCascadingList.GetStackDepth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UGbxCascadingList::GetStackDepth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.GetStackDepth");
		
		UGbxCascadingList_GetStackDepth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F14CE0
	 * 		Name   -> Function GbxUI.GbxCascadingList.Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxCascadingList::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCascadingList.Clear");
		
		UGbxCascadingList_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCascadingList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCascadingList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxCascadingList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F152F0
	 * 		Name   -> Function GbxUI.GbxComboBoxDropdownMenu.OnChoiceClicked
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UGbxListItem*                                ListItem                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxComboBoxDropdownMenu::OnChoiceClicked(class UGbxListItem* ListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxComboBoxDropdownMenu.OnChoiceClicked");
		
		UGbxComboBoxDropdownMenu_OnChoiceClicked_Params params {};
		params.ListItem = ListItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F14D20
	 * 		Name   -> Function GbxUI.GbxComboBoxDropdownMenu.DismissWithoutChanging
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxComboBoxDropdownMenu::DismissWithoutChanging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxComboBoxDropdownMenu.DismissWithoutChanging");
		
		UGbxComboBoxDropdownMenu_DismissWithoutChanging_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxComboBoxDropdownMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxComboBoxDropdownMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxComboBoxDropdownMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15410
	 * 		Name   -> Function GbxUI.GbxComboBox.OnComboBoxClicked
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class UGbxUserWidget*                              Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxComboBox::OnComboBoxClicked(class UGbxUserWidget* Widget, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxComboBox.OnComboBoxClicked");
		
		UGbxComboBox_OnComboBoxClicked_Params params {};
		params.Widget = Widget;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014C06B0
	 * 		Name   -> Function GbxUI.GbxComboBox.GetCurentChoiceReferenceIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UGbxComboBox::GetCurentChoiceReferenceIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxComboBox.GetCurentChoiceReferenceIndex");
		
		UGbxComboBox_GetCurentChoiceReferenceIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxComboBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxComboBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxComboBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F168A0
	 * 		Name   -> Function GbxUI.GbxCoreDialogBoxHelpers.ShowYesNoDialog
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        HeaderText                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class FText                                        MessageText                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bAnyUserCanInteract                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxDialogBox* UGbxCoreDialogBoxHelpers::STATIC_ShowYesNoDialog(class AGbxPlayerController* pc, const class FText& HeaderText, const class FText& MessageText, bool bAnyUserCanInteract)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCoreDialogBoxHelpers.ShowYesNoDialog");
		
		UGbxCoreDialogBoxHelpers_ShowYesNoDialog_Params params {};
		params.pc = pc;
		params.HeaderText = HeaderText;
		params.MessageText = MessageText;
		params.bAnyUserCanInteract = bAnyUserCanInteract;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F16690
	 * 		Name   -> Function GbxUI.GbxCoreDialogBoxHelpers.ShowOkayDialog
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        HeaderText                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class FText                                        MessageText                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bAnyUserCanInteract                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGbxDialogBoxHelpersDialogTemplate                 Template                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxDialogBox* UGbxCoreDialogBoxHelpers::STATIC_ShowOkayDialog(class AGbxPlayerController* pc, const class FText& HeaderText, const class FText& MessageText, bool bAnyUserCanInteract, EGbxDialogBoxHelpersDialogTemplate Template)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCoreDialogBoxHelpers.ShowOkayDialog");
		
		UGbxCoreDialogBoxHelpers_ShowOkayDialog_Params params {};
		params.pc = pc;
		params.HeaderText = HeaderText;
		params.MessageText = MessageText;
		params.bAnyUserCanInteract = bAnyUserCanInteract;
		params.Template = Template;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F164F0
	 * 		Name   -> Function GbxUI.GbxCoreDialogBoxHelpers.ShowDialog
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxDialogBoxInfo                           DialogBoxInfo                                              (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	class UGbxDialogBox* UGbxCoreDialogBoxHelpers::STATIC_ShowDialog(class AGbxPlayerController* pc, const struct FGbxDialogBoxInfo& DialogBoxInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCoreDialogBoxHelpers.ShowDialog");
		
		UGbxCoreDialogBoxHelpers_ShowDialog_Params params {};
		params.pc = pc;
		params.DialogBoxInfo = DialogBoxInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F16300
	 * 		Name   -> Function GbxUI.GbxCoreDialogBoxHelpers.ShowConfirmCancelDialog
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        HeaderText                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class FText                                        MessageText                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bAnyUserCanInteract                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxDialogBox* UGbxCoreDialogBoxHelpers::STATIC_ShowConfirmCancelDialog(class AGbxPlayerController* pc, const class FText& HeaderText, const class FText& MessageText, bool bAnyUserCanInteract)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCoreDialogBoxHelpers.ShowConfirmCancelDialog");
		
		UGbxCoreDialogBoxHelpers_ShowConfirmCancelDialog_Params params {};
		params.pc = pc;
		params.HeaderText = HeaderText;
		params.MessageText = MessageText;
		params.bAnyUserCanInteract = bAnyUserCanInteract;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F16110
	 * 		Name   -> Function GbxUI.GbxCoreDialogBoxHelpers.ShowBlockingDialog
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        HeaderText                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class FText                                        MessageText                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bBlocksAllUsers                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxDialogBox* UGbxCoreDialogBoxHelpers::STATIC_ShowBlockingDialog(class AGbxPlayerController* pc, const class FText& HeaderText, const class FText& MessageText, bool bBlocksAllUsers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxCoreDialogBoxHelpers.ShowBlockingDialog");
		
		UGbxCoreDialogBoxHelpers_ShowBlockingDialog_Params params {};
		params.pc = pc;
		params.HeaderText = HeaderText;
		params.MessageText = MessageText;
		params.bBlocksAllUsers = bBlocksAllUsers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCoreDialogBoxHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCoreDialogBoxHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxCoreDialogBoxHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCrosshairDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCrosshairDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxCrosshairDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxMenuSwitcherMenuData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxMenuSwitcherMenuData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxMenuSwitcherMenuData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxDebugMenuData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxDebugMenuData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxDebugMenuData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F30450
	 * 		Name   -> Function GbxUI.GbxMenuSwitcher.SwitchToPage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        SubMenuId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxMenuSwitcher::SwitchToPage(const class FName& SubMenuId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuSwitcher.SwitchToPage");
		
		UGbxMenuSwitcher_SwitchToPage_Params params {};
		params.SubMenuId = SubMenuId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2FC80
	 * 		Name   -> Function GbxUI.GbxMenuSwitcher.PrevPage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxMenuSwitcher::PrevPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuSwitcher.PrevPage");
		
		UGbxMenuSwitcher_PrevPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2FAE0
	 * 		Name   -> Function GbxUI.GbxMenuSwitcher.NextPage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxMenuSwitcher::NextPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuSwitcher.NextPage");
		
		UGbxMenuSwitcher_NextPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2F8A0
	 * 		Name   -> Function GbxUI.GbxMenuSwitcher.GetCurrentSubmenuId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UGbxMenuSwitcher::GetCurrentSubmenuId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuSwitcher.GetCurrentSubmenuId");
		
		UGbxMenuSwitcher_GetCurrentSubmenuId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxMenuSwitcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxMenuSwitcher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxMenuSwitcher");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F153F0
	 * 		Name   -> Function GbxUI.GbxDebugMenu.OnCloseClicked
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGbxDebugMenu::OnCloseClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDebugMenu.OnCloseClicked");
		
		UGbxDebugMenu_OnCloseClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F151A0
	 * 		Name   -> Function GbxUI.GbxDebugMenu.OnCategorySelected
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class UGbxUserWidget*                              Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxDebugMenu::OnCategorySelected(class UGbxUserWidget* Widget, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDebugMenu.OnCategorySelected");
		
		UGbxDebugMenu_OnCategorySelected_Params params {};
		params.Widget = Widget;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxDebugMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxDebugMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxDebugMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15680
	 * 		Name   -> Function GbxUI.GbxDebugRumbleMenu.OnSliderValueChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UGbxListItem*                                Item                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDebugRumbleMenu::OnSliderValueChanged(class UGbxListItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDebugRumbleMenu.OnSliderValueChanged");
		
		UGbxDebugRumbleMenu_OnSliderValueChanged_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxDebugRumbleMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxDebugRumbleMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxDebugRumbleMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxDialogBoxData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxDialogBoxData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxDialogBoxData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxDialogBox.UpdateText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewHeaderText                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        NewBodyText                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBox::UpdateText(const class FText& NewHeaderText, const class FText& NewBodyText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDialogBox.UpdateText");
		
		UGbxDialogBox_UpdateText_Params params {};
		params.NewHeaderText = NewHeaderText;
		params.NewBodyText = NewBodyText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxDialogBox.SetupDialog
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGbxDialogBoxInfo                           DialogBoxInfo                                              (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBox::SetupDialog(const struct FGbxDialogBoxInfo& DialogBoxInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDialogBox.SetupDialog");
		
		UGbxDialogBox_SetupDialog_Params params {};
		params.DialogBoxInfo = DialogBoxInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15E00
	 * 		Name   -> Function GbxUI.GbxDialogBox.SetHeaderTextFormatArg
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ArgName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        ReplacementText                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBox::SetHeaderTextFormatArg(const class FString& ArgName, const class FText& ReplacementText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDialogBox.SetHeaderTextFormatArg");
		
		UGbxDialogBox_SetHeaderTextFormatArg_Params params {};
		params.ArgName = ArgName;
		params.ReplacementText = ReplacementText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15CE0
	 * 		Name   -> Function GbxUI.GbxDialogBox.SetHeaderText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        NewText                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bClearFormatArgs                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBox::SetHeaderText(const class FText& NewText, bool bClearFormatArgs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDialogBox.SetHeaderText");
		
		UGbxDialogBox_SetHeaderText_Params params {};
		params.NewText = NewText;
		params.bClearFormatArgs = bClearFormatArgs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F159E0
	 * 		Name   -> Function GbxUI.GbxDialogBox.SetBodyTextFormatArg
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ArgName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        ReplacementText                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBox::SetBodyTextFormatArg(const class FString& ArgName, const class FText& ReplacementText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDialogBox.SetBodyTextFormatArg");
		
		UGbxDialogBox_SetBodyTextFormatArg_Params params {};
		params.ArgName = ArgName;
		params.ReplacementText = ReplacementText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F158C0
	 * 		Name   -> Function GbxUI.GbxDialogBox.SetBodyText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        NewText                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bClearFormatArgs                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBox::SetBodyText(const class FText& NewText, bool bClearFormatArgs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDialogBox.SetBodyText");
		
		UGbxDialogBox_SetBodyText_Params params {};
		params.NewText = NewText;
		params.bClearFormatArgs = bClearFormatArgs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15370
	 * 		Name   -> Function GbxUI.GbxDialogBox.OnChoiceClicked
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UGbxListItem*                                ClickedItem                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxDialogBox::OnChoiceClicked(class UGbxListItem* ClickedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDialogBox.OnChoiceClicked");
		
		UGbxDialogBox_OnChoiceClicked_Params params {};
		params.ClickedItem = ClickedItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F14D00
	 * 		Name   -> Function GbxUI.GbxDialogBox.Dismiss
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxDialogBox::Dismiss()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxDialogBox.Dismiss");
		
		UGbxDialogBox_Dismiss_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxDialogBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxDialogBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxDialogBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxDialogBoxChoiceWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxDialogBoxChoiceWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxDialogBoxChoiceWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxDragDropContainerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxDragDropContainerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxDragDropContainerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxFocusableWidgetStyleData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxFocusableWidgetStyleData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxFocusableWidgetStyleData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15C50
	 * 		Name   -> Function GbxUI.GbxFocusableWidget.SetFocusableWidgetEnabled
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxFocusableWidget::SetFocusableWidgetEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxFocusableWidget.SetFocusableWidgetEnabled");
		
		UGbxFocusableWidget_SetFocusableWidgetEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F14E90
	 * 		Name   -> Function GbxUI.GbxFocusableWidget.IsFocusableWidgetFocused
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGbxFocusableWidget::IsFocusableWidgetFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxFocusableWidget.IsFocusableWidgetFocused");
		
		UGbxFocusableWidget_IsFocusableWidgetFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F14E60
	 * 		Name   -> Function GbxUI.GbxFocusableWidget.IsFocusableWidgetEnabled
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGbxFocusableWidget::IsFocusableWidgetEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxFocusableWidget.IsFocusableWidgetEnabled");
		
		UGbxFocusableWidget_IsFocusableWidgetEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014C0720
	 * 		Name   -> Function GbxUI.GbxFocusableWidget.GetFocusableWidgetState
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EGbxFocusableWidgetState UGbxFocusableWidget::GetFocusableWidgetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxFocusableWidget.GetFocusableWidgetState");
		
		UGbxFocusableWidget_GetFocusableWidgetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxFocusableWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxFocusableWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxFocusableWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F15660
	 * 		Name   -> Function GbxUI.GbxFullScreenMovie.OnMovieFinishedPlaying
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGbxFullScreenMovie::OnMovieFinishedPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxFullScreenMovie.OnMovieFinishedPlaying");
		
		UGbxFullScreenMovie_OnMovieFinishedPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxFullScreenMovie.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxFullScreenMovie::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxFullScreenMovie");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxContextualMenuData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxContextualMenuData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxContextualMenuData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1B2E0
	 * 		Name   -> Function GbxUI.GbxGFxContextualMenu.OnSelectionChanged
	 * 		Flags  -> (Final, Native, Private, Const)
	 * Parameters:
	 * 		class UGbxGFxListCell*                             Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxContextualMenu::OnSelectionChanged(class UGbxGFxListCell* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxContextualMenu.OnSelectionChanged");
		
		UGbxGFxContextualMenu_OnSelectionChanged_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1AAD0
	 * 		Name   -> Function GbxUI.GbxGFxContextualMenu.OnContextualMenuItemClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		class UGbxGFxButton*                               PressedButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxContextualMenu::OnContextualMenuItemClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxContextualMenu.OnContextualMenuItemClicked");
		
		UGbxGFxContextualMenu_OnContextualMenuItemClicked_Params params {};
		params.PressedButton = PressedButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxContextualMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxContextualMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxContextualMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxContextualMenuHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxContextualMenuHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxContextualMenuHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1AD70
	 * 		Name   -> Function GbxUI.GbxGFxDragDropManager.OnDropButtonUnhovered
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class UGbxGFxButton*                               UnhoveredButton                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxDragDropManager::OnDropButtonUnhovered(class UGbxGFxButton* UnhoveredButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxDragDropManager.OnDropButtonUnhovered");
		
		UGbxGFxDragDropManager_OnDropButtonUnhovered_Params params {};
		params.UnhoveredButton = UnhoveredButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1AC20
	 * 		Name   -> Function GbxUI.GbxGFxDragDropManager.OnDropButtonHovered
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class UGbxGFxButton*                               HoveredButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxDragDropManager::OnDropButtonHovered(class UGbxGFxButton* HoveredButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxDragDropManager.OnDropButtonHovered");
		
		UGbxGFxDragDropManager_OnDropButtonHovered_Params params {};
		params.HoveredButton = HoveredButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxDragDropManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxDragDropManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxDragDropManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1B030
	 * 		Name   -> Function GbxUI.GbxGFxDropDownList.OnEntryClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UGbxGFxButton*                               BUTTON                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxDropDownList::OnEntryClicked(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxDropDownList.OnEntryClicked");
		
		UGbxGFxDropDownList_OnEntryClicked_Params params {};
		params.BUTTON = BUTTON;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1AEC0
	 * 		Name   -> Function GbxUI.GbxGFxDropDownList.OnDropDownButtonClicked
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UGbxGFxButton*                               BUTTON                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxDropDownList::OnDropDownButtonClicked(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxDropDownList.OnDropDownButtonClicked");
		
		UGbxGFxDropDownList_OnDropDownButtonClicked_Params params {};
		params.BUTTON = BUTTON;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxDropDownList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxDropDownList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxDropDownList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxComboBoxScrollingList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxComboBoxScrollingList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxComboBoxScrollingList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxHintBarContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxHintBarContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxHintBarContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1B480
	 * 		Name   -> Function GbxUI.GbxGFxHintWidget.OnThisHintClicked
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class UGbxGFxButton*                               BUTTON                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxHintWidget::OnThisHintClicked(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxHintWidget.OnThisHintClicked");
		
		UGbxGFxHintWidget_OnThisHintClicked_Params params {};
		params.BUTTON = BUTTON;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxHintWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxHintWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxHintWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1B360
	 * 		Name   -> Function GbxUI.GbxGFxListItemComboBox.OnSelectionUpdated
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UGbxGFxListCell*                             Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxListItemComboBox::OnSelectionUpdated(class UGbxGFxListCell* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxListItemComboBox.OnSelectionUpdated");
		
		UGbxGFxListItemComboBox_OnSelectionUpdated_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1B1E0
	 * 		Name   -> Function GbxUI.GbxGFxListItemComboBox.OnOwningListSelectionChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UGbxGFxListCell*                             Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxListItemComboBox::OnOwningListSelectionChanged(class UGbxGFxListCell* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxListItemComboBox.OnOwningListSelectionChanged");
		
		UGbxGFxListItemComboBox_OnOwningListSelectionChanged_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1B010
	 * 		Name   -> Function GbxUI.GbxGFxListItemComboBox.OnDropDownButtonClicked
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGbxGFxListItemComboBox::OnDropDownButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxListItemComboBox.OnDropDownButtonClicked");
		
		UGbxGFxListItemComboBox_OnDropDownButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxListItemComboBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxListItemComboBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxListItemComboBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxListItemControls.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxListItemControls::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxListItemControls");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxUI.GbxGFxMediaPlayer.OnMovieTracksChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGbxGFxMediaPlayer::OnMovieTracksChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMediaPlayer.OnMovieTracksChanged");
		
		UGbxGFxMediaPlayer_OnMovieTracksChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxUI.GbxGFxMediaPlayer.OnMovieSeekCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGbxGFxMediaPlayer::OnMovieSeekCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMediaPlayer.OnMovieSeekCompleted");
		
		UGbxGFxMediaPlayer_OnMovieSeekCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1B1A0
	 * 		Name   -> Function GbxUI.GbxGFxMediaPlayer.OnMoviePlaybackSuspended
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGbxGFxMediaPlayer::OnMoviePlaybackSuspended()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMediaPlayer.OnMoviePlaybackSuspended");
		
		UGbxGFxMediaPlayer_OnMoviePlaybackSuspended_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1B1C0
	 * 		Name   -> Function GbxUI.GbxGFxMediaPlayer.OnMoviePlaybackResumed
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGbxGFxMediaPlayer::OnMoviePlaybackResumed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMediaPlayer.OnMoviePlaybackResumed");
		
		UGbxGFxMediaPlayer_OnMoviePlaybackResumed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014076D0
	 * 		Name   -> Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaOpenFailed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class FString                                      FailedUrl                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxMediaPlayer::OnMovieMediaOpenFailed(const class FString& FailedUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaOpenFailed");
		
		UGbxGFxMediaPlayer_OnMovieMediaOpenFailed_Params params {};
		params.FailedUrl = FailedUrl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014076D0
	 * 		Name   -> Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaOpened
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class FString                                      OpenedUrl                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxMediaPlayer::OnMovieMediaOpened(const class FString& OpenedUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaOpened");
		
		UGbxGFxMediaPlayer_OnMovieMediaOpened_Params params {};
		params.OpenedUrl = OpenedUrl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1B1A0
	 * 		Name   -> Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaClosed
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGbxGFxMediaPlayer::OnMovieMediaClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaClosed");
		
		UGbxGFxMediaPlayer_OnMovieMediaClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1B180
	 * 		Name   -> Function GbxUI.GbxGFxMediaPlayer.OnMovieEndReached
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGbxGFxMediaPlayer::OnMovieEndReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMediaPlayer.OnMovieEndReached");
		
		UGbxGFxMediaPlayer_OnMovieEndReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxUI.GbxGFxMediaPlayer.GbxGFxMediaPlayerEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UGbxGFxMediaPlayer::GbxGFxMediaPlayerEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxUI.GbxGFxMediaPlayer.GbxGFxMediaPlayerEvent__DelegateSignature");
		
		UGbxGFxMediaPlayer_GbxGFxMediaPlayerEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxMediaPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxMediaPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxMediaPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxMenuSwitcherNavCell.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxMenuSwitcherNavCell::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxMenuSwitcherNavCell");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F1ED70
	 * 		Name   -> Function GbxUI.GbxGFxMenuSwitcherNavWidget.OnTabClicked
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class UGbxGFxButton*                               BUTTON                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxMenuSwitcherNavWidget::OnTabClicked(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxMenuSwitcherNavWidget.OnTabClicked");
		
		UGbxGFxMenuSwitcherNavWidget_OnTabClicked_Params params {};
		params.BUTTON = BUTTON;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxMenuSwitcherNavWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxMenuSwitcherNavWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxMenuSwitcherNavWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxSprite.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxSprite::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxSprite");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxMouseBlocker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxMouseBlocker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxMouseBlocker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxMouseCapturePanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxMouseCapturePanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxMouseCapturePanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxRechargeableProgressBar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxRechargeableProgressBar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxRechargeableProgressBar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxUI.GbxGFxSlider.GbxGFxSliderUpdateEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		float                                              SliderPercent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxSlider::GbxGFxSliderUpdateEvent__DelegateSignature(float SliderPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxUI.GbxGFxSlider.GbxGFxSliderUpdateEvent__DelegateSignature");
		
		UGbxGFxSlider_GbxGFxSliderUpdateEvent__DelegateSignature_Params params {};
		params.SliderPercent = SliderPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24090
	 * 		Name   -> Function GbxUI.GbxGFxSlider.EndSlide
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class UGbxGFxButton*                               BUTTON                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxSlider::EndSlide(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxSlider.EndSlide");
		
		UGbxGFxSlider_EndSlide_Params params {};
		params.BUTTON = BUTTON;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F23E60
	 * 		Name   -> Function GbxUI.GbxGFxSlider.BeginRightSlide
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class UGbxGFxButton*                               BUTTON                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxSlider::BeginRightSlide(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxSlider.BeginRightSlide");
		
		UGbxGFxSlider_BeginRightSlide_Params params {};
		params.BUTTON = BUTTON;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F23D10
	 * 		Name   -> Function GbxUI.GbxGFxSlider.BeginLeftSlide
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class UGbxGFxButton*                               BUTTON                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxGFxSlider::BeginLeftSlide(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxGFxSlider.BeginLeftSlide");
		
		UGbxGFxSlider_BeginLeftSlide_Params params {};
		params.BUTTON = BUTTON;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxSlider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxSlider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxSlider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGridListWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGridListWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGridListWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGuidePanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGuidePanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGuidePanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxHintBarWidgetContainer.HintBarSetVisible
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxHintBarWidgetContainer::HintBarSetVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHintBarWidgetContainer.HintBarSetVisible");
		
		UGbxHintBarWidgetContainer_HintBarSetVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxHintBarWidgetContainer.HintBarInitOwnerInfo
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGbxHintBar*                                 HintBarOwner                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGbxPlayerController*                        PlayerControllerContext                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxHintBarWidgetContainer::HintBarInitOwnerInfo(class UGbxHintBar* HintBarOwner, class AGbxPlayerController* PlayerControllerContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHintBarWidgetContainer.HintBarInitOwnerInfo");
		
		UGbxHintBarWidgetContainer_HintBarInitOwnerInfo_Params params {};
		params.HintBarOwner = HintBarOwner;
		params.PlayerControllerContext = PlayerControllerContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxHintBarWidgetContainer.HintBarClearAllHints
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGbxHintBarWidgetContainer::HintBarClearAllHints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHintBarWidgetContainer.HintBarClearAllHints");
		
		UGbxHintBarWidgetContainer_HintBarClearAllHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxHintBarWidgetContainer.HintBarAppendHint
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGbxHintInfo                                HintInfo                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxHintBarWidgetContainer::HintBarAppendHint(const struct FGbxHintInfo& HintInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHintBarWidgetContainer.HintBarAppendHint");
		
		UGbxHintBarWidgetContainer_HintBarAppendHint_Params params {};
		params.HintInfo = HintInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxHintBarWidgetContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxHintBarWidgetContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxHintBarWidgetContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24700
	 * 		Name   -> Function GbxUI.GbxHintBar.OnHintClicked
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InputAction                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHeld                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxHintBar::OnHintClicked(const class FName& InputAction, bool bHeld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHintBar.OnHintClicked");
		
		UGbxHintBar_OnHintClicked_Params params {};
		params.InputAction = InputAction;
		params.bHeld = bHeld;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxHintBar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxHintBar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxHintBar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxHintWidget.HintWidgetSetVisible
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxHintWidget::HintWidgetSetVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHintWidget.HintWidgetSetVisible");
		
		UGbxHintWidget_HintWidgetSetVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxHintWidget.HintWidgetSetInfo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGbxHintInfo                                HintInfo                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxHintWidget::HintWidgetSetInfo(const struct FGbxHintInfo& HintInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHintWidget.HintWidgetSetInfo");
		
		UGbxHintWidget_HintWidgetSetInfo_Params params {};
		params.HintInfo = HintInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxHintWidget.HintWidgetInitOwnerInfo
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGbxHintBar*                                 HintBarOwner                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGbxPlayerController*                        PlayerControllerContext                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxHintWidget::HintWidgetInitOwnerInfo(class UGbxHintBar* HintBarOwner, class AGbxPlayerController* PlayerControllerContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxHintWidget.HintWidgetInitOwnerInfo");
		
		UGbxHintWidget_HintWidgetInitOwnerInfo_Params params {};
		params.HintBarOwner = HintBarOwner;
		params.PlayerControllerContext = PlayerControllerContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxHintWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxHintWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxHintWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxHUDData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxHUDData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxHUDData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDDataProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDDataProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.HUDDataProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxGFxHUDFeedbackData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxGFxHUDFeedbackData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxGFxHUDFeedbackData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxHUDStateData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxHUDStateData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxHUDStateData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2B1A0
	 * 		Name   -> Function GbxUI.GbxList.TryToAcquireMenuFocus
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bFromMouse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxList::TryToAcquireMenuFocus(bool bFromMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.TryToAcquireMenuFocus");
		
		UGbxList_TryToAcquireMenuFocus_Params params {};
		params.bFromMouse = bFromMouse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2AFE0
	 * 		Name   -> Function GbxUI.GbxList.SetSelectionChangedDelegate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              InSelectionChangedDelegate                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxList::SetSelectionChangedDelegate(const class FScriptDelegate& InSelectionChangedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.SetSelectionChangedDelegate");
		
		UGbxList_SetSelectionChangedDelegate_Params params {};
		params.InSelectionChangedDelegate = InSelectionChangedDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2AE50
	 * 		Name   -> Function GbxUI.GbxList.SetSelectedItem
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGbxListItem*                                Item                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bScrollIntoView                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAnimateScroll                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxList::SetSelectedItem(class UGbxListItem* Item, bool bScrollIntoView, bool bAnimateScroll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.SetSelectedItem");
		
		UGbxList_SetSelectedItem_Params params {};
		params.Item = Item;
		params.bScrollIntoView = bScrollIntoView;
		params.bAnimateScroll = bAnimateScroll;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2AD40
	 * 		Name   -> Function GbxUI.GbxList.SetSelectedIndex
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewSelection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bScrollIntoView                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAnimateScroll                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxList::SetSelectedIndex(int32_t NewSelection, bool bScrollIntoView, bool bAnimateScroll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.SetSelectedIndex");
		
		UGbxList_SetSelectedIndex_Params params {};
		params.NewSelection = NewSelection;
		params.bScrollIntoView = bScrollIntoView;
		params.bAnimateScroll = bAnimateScroll;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2AC90
	 * 		Name   -> Function GbxUI.GbxList.SetItemClickedDelegate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              InItemClickedDelegate                                      (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxList::SetItemClickedDelegate(const class FScriptDelegate& InItemClickedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.SetItemClickedDelegate");
		
		UGbxList_SetItemClickedDelegate_Params params {};
		params.InItemClickedDelegate = InItemClickedDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2AA10
	 * 		Name   -> Function GbxUI.GbxList.RemoveListItem
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGbxListItem*                                Item                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxList::RemoveListItem(class UGbxListItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.RemoveListItem");
		
		UGbxList_RemoveListItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A9F0
	 * 		Name   -> Function GbxUI.GbxList.RemoveAllListItems
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UGbxList::RemoveAllListItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.RemoveAllListItems");
		
		UGbxList_RemoveAllListItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A5D0
	 * 		Name   -> Function GbxUI.GbxList.OnItemClicked
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGbxListItem*                                Item                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxList::OnItemClicked(class UGbxListItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.OnItemClicked");
		
		UGbxList_OnItemClicked_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A580
	 * 		Name   -> Function GbxUI.GbxList.MoveSelectionUp
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGbxList::MoveSelectionUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.MoveSelectionUp");
		
		UGbxList_MoveSelectionUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A550
	 * 		Name   -> Function GbxUI.GbxList.MoveSelectionRight
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGbxList::MoveSelectionRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.MoveSelectionRight");
		
		UGbxList_MoveSelectionRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A520
	 * 		Name   -> Function GbxUI.GbxList.MoveSelectionLeft
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGbxList::MoveSelectionLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.MoveSelectionLeft");
		
		UGbxList_MoveSelectionLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A4F0
	 * 		Name   -> Function GbxUI.GbxList.MoveSelectionDown
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGbxList::MoveSelectionDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.MoveSelectionDown");
		
		UGbxList_MoveSelectionDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A4C0
	 * 		Name   -> Function GbxUI.GbxList.IsListFocused
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGbxList::IsListFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.IsListFocused");
		
		UGbxList_IsListFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A490
	 * 		Name   -> Function GbxUI.GbxList.IsListEnabled
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGbxList::IsListEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.IsListEnabled");
		
		UGbxList_IsListEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A3D0
	 * 		Name   -> Function GbxUI.GbxList.InsertListItem
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGbxListItem*                                Item                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxList::InsertListItem(class UGbxListItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.InsertListItem");
		
		UGbxList_InsertListItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F29F70
	 * 		Name   -> Function GbxUI.GbxList.GetSelectedItem
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGbxListItem* UGbxList::GetSelectedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.GetSelectedItem");
		
		UGbxList_GetSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F29F40
	 * 		Name   -> Function GbxUI.GbxList.GetSelectedIndex
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UGbxList::GetSelectedIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.GetSelectedIndex");
		
		UGbxList_GetSelectedIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F29F10
	 * 		Name   -> Function GbxUI.GbxList.GetNumItemsInList
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UGbxList::GetNumItemsInList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.GetNumItemsInList");
		
		UGbxList_GetNumItemsInList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F29E20
	 * 		Name   -> Function GbxUI.GbxList.GetListItemFactory
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGbxListItemFactory* UGbxList::GetListItemFactory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.GetListItemFactory");
		
		UGbxList_GetListItemFactory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F29D60
	 * 		Name   -> Function GbxUI.GbxList.GetItemAtIndex
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxListItem* UGbxList::GetItemAtIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.GetItemAtIndex");
		
		UGbxList_GetItemAtIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F29C90
	 * 		Name   -> Function GbxUI.GbxList.GetDefaultItemClass
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UClass* UGbxList::GetDefaultItemClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxList.GetDefaultItemClass");
		
		UGbxList_GetDefaultItemClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2AC00
	 * 		Name   -> Function GbxUI.GbxListItemBoolean.SetChecked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bChecked                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxListItemBoolean::SetChecked(bool bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemBoolean.SetChecked");
		
		UGbxListItemBoolean_SetChecked_Params params {};
		params.bChecked = bChecked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A460
	 * 		Name   -> Function GbxUI.GbxListItemBoolean.IsChecked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGbxListItemBoolean::IsChecked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemBoolean.IsChecked");
		
		UGbxListItemBoolean_IsChecked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A030
	 * 		Name   -> Function GbxUI.GbxListItemBoolean.HandleFocusableWidgetPressed
	 * 		Flags  -> (Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxListItemBoolean::HandleFocusableWidgetPressed(const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemBoolean.HandleFocusableWidgetPressed");
		
		UGbxListItemBoolean_HandleFocusableWidgetPressed_Params params {};
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxListItemBoolean.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxListItemBoolean::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxListItemBoolean");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2AF60
	 * 		Name   -> Function GbxUI.GbxListItemComboBox.SetSelectedOptionIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxListItemComboBox::SetSelectedOptionIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemComboBox.SetSelectedOptionIndex");
		
		UGbxListItemComboBox_SetSelectedOptionIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2AAC0
	 * 		Name   -> Function GbxUI.GbxListItemComboBox.SelectPreviousOption
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxListItemComboBox::SelectPreviousOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemComboBox.SelectPreviousOption");
		
		UGbxListItemComboBox_SelectPreviousOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2AAA0
	 * 		Name   -> Function GbxUI.GbxListItemComboBox.SelectNextOption
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxListItemComboBox::SelectNextOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemComboBox.SelectNextOption");
		
		UGbxListItemComboBox_SelectNextOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A6E0
	 * 		Name   -> Function GbxUI.GbxListItemComboBox.OnValueComboBoxChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESelectInfo                                        SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxListItemComboBox::OnValueComboBoxChanged(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemComboBox.OnValueComboBoxChanged");
		
		UGbxListItemComboBox_OnValueComboBoxChanged_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxUI.GbxListItemComboBox.ListItemComboBoxSelectionChangedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            NewSelectedIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxListItemComboBox::ListItemComboBoxSelectionChangedDelegate__DelegateSignature(int32_t NewSelectedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxUI.GbxListItemComboBox.ListItemComboBoxSelectionChangedDelegate__DelegateSignature");
		
		UGbxListItemComboBox_ListItemComboBoxSelectionChangedDelegate__DelegateSignature_Params params {};
		params.NewSelectedIndex = NewSelectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A2E0
	 * 		Name   -> Function GbxUI.GbxListItemComboBox.InitializeComboBox
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FText>                                Items                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InitialValue                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxListItemComboBox::InitializeComboBox(TArray<class FText> Items, int32_t InitialValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemComboBox.InitializeComboBox");
		
		UGbxListItemComboBox_InitializeComboBox_Params params {};
		params.Items = Items;
		params.InitialValue = InitialValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F29FA0
	 * 		Name   -> Function GbxUI.GbxListItemComboBox.GetSelectedOptionIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UGbxListItemComboBox::GetSelectedOptionIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemComboBox.GetSelectedOptionIndex");
		
		UGbxListItemComboBox_GetSelectedOptionIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxListItemComboBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxListItemComboBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxListItemComboBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F299D0
	 * 		Name   -> Function GbxUI.GbxListItemFactory.CreateTextItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        LabelText                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ClickedDelegate                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SelectedDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UGbxListItemText* UGbxListItemFactory::CreateTextItem(class APlayerController* Owner, const class FText& LabelText, const class FScriptDelegate& ClickedDelegate, const class FScriptDelegate& SelectedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemFactory.CreateTextItem");
		
		UGbxListItemFactory_CreateTextItem_Params params {};
		params.Owner = Owner;
		params.LabelText = LabelText;
		params.ClickedDelegate = ClickedDelegate;
		params.SelectedDelegate = SelectedDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F296B0
	 * 		Name   -> Function GbxUI.GbxListItemFactory.CreateNumberItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        LabelText                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              InitialValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SliderMin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SliderMax                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SliderStep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ChangedDelegate                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SelectedDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UGbxListItemNumber* UGbxListItemFactory::CreateNumberItem(class APlayerController* Owner, const class FText& LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep, const class FScriptDelegate& ChangedDelegate, const class FScriptDelegate& SelectedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemFactory.CreateNumberItem");
		
		UGbxListItemFactory_CreateNumberItem_Params params {};
		params.Owner = Owner;
		params.LabelText = LabelText;
		params.InitialValue = InitialValue;
		params.SliderMin = SliderMin;
		params.SliderMax = SliderMax;
		params.SliderStep = SliderStep;
		params.ChangedDelegate = ChangedDelegate;
		params.SelectedDelegate = SelectedDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F294E0
	 * 		Name   -> Function GbxUI.GbxListItemFactory.CreateItemWithDelegates
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ItemClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ClickedDelegate                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SelectedDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UGbxListItem* UGbxListItemFactory::STATIC_CreateItemWithDelegates(class APlayerController* Owner, class UClass* ItemClass, const class FScriptDelegate& ClickedDelegate, const class FScriptDelegate& SelectedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemFactory.CreateItemWithDelegates");
		
		UGbxListItemFactory_CreateItemWithDelegates_Params params {};
		params.Owner = Owner;
		params.ItemClass = ItemClass;
		params.ClickedDelegate = ClickedDelegate;
		params.SelectedDelegate = SelectedDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F293C0
	 * 		Name   -> Function GbxUI.GbxListItemFactory.CreateItem
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ItemClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxListItem* UGbxListItemFactory::STATIC_CreateItem(class APlayerController* Owner, class UClass* ItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemFactory.CreateItem");
		
		UGbxListItemFactory_CreateItem_Params params {};
		params.Owner = Owner;
		params.ItemClass = ItemClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F290F0
	 * 		Name   -> Function GbxUI.GbxListItemFactory.CreateComboBoxItem
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        LabelText                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<class FText>                                Items                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InitialIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ChangedDelegate                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SelectedDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UGbxListItemComboBox* UGbxListItemFactory::CreateComboBoxItem(class APlayerController* Owner, const class FText& LabelText, TArray<class FText> Items, int32_t InitialIndex, const class FScriptDelegate& ChangedDelegate, const class FScriptDelegate& SelectedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemFactory.CreateComboBoxItem");
		
		UGbxListItemFactory_CreateComboBoxItem_Params params {};
		params.Owner = Owner;
		params.LabelText = LabelText;
		params.Items = Items;
		params.InitialIndex = InitialIndex;
		params.ChangedDelegate = ChangedDelegate;
		params.SelectedDelegate = SelectedDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F28E80
	 * 		Name   -> Function GbxUI.GbxListItemFactory.CreateBooleanItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        LabelText                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               InitialValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ChangedDelegate                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SelectedDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UGbxListItemBoolean* UGbxListItemFactory::CreateBooleanItem(class APlayerController* Owner, const class FText& LabelText, bool InitialValue, const class FScriptDelegate& ChangedDelegate, const class FScriptDelegate& SelectedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemFactory.CreateBooleanItem");
		
		UGbxListItemFactory_CreateBooleanItem_Params params {};
		params.Owner = Owner;
		params.LabelText = LabelText;
		params.InitialValue = InitialValue;
		params.ChangedDelegate = ChangedDelegate;
		params.SelectedDelegate = SelectedDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxListItemFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxListItemFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxListItemFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A660
	 * 		Name   -> Function GbxUI.GbxListItemNumber.OnSliderValueChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		float                                              NewPosition                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxListItemNumber::OnSliderValueChanged(float NewPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemNumber.OnSliderValueChanged");
		
		UGbxListItemNumber_OnSliderValueChanged_Params params {};
		params.NewPosition = NewPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A2C0
	 * 		Name   -> Function GbxUI.GbxListItemNumber.IncrementSlider
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxListItemNumber::IncrementSlider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemNumber.IncrementSlider");
		
		UGbxListItemNumber_IncrementSlider_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F29C60
	 * 		Name   -> Function GbxUI.GbxListItemNumber.GetCurrentValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UGbxListItemNumber::GetCurrentValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemNumber.GetCurrentValue");
		
		UGbxListItemNumber_GetCurrentValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F29C00
	 * 		Name   -> Function GbxUI.GbxListItemNumber.DecrementSlider
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxListItemNumber::DecrementSlider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxListItemNumber.DecrementSlider");
		
		UGbxListItemNumber_DecrementSlider_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxListItemNumber.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxListItemNumber::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxListItemNumber");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxMenuInputSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxMenuInputSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxMenuInputSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxMenuInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxMenuInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxMenuInput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxMenuInputListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxMenuInputListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxMenuInputListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxMenuStackMenuInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxMenuStackMenuInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxMenuStackMenuInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2B120
	 * 		Name   -> Function GbxUI.GbxMenuStack.Tick
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxMenuStack::Tick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.Tick");
		
		UGbxMenuStack_Tick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2B090
	 * 		Name   -> Function GbxUI.GbxMenuStack.SwitchTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGbxMenuData*                                MenuData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UGbxMenuStack::SwitchTo(class UGbxMenuData* MenuData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.SwitchTo");
		
		UGbxMenuStack_SwitchTo_Params params {};
		params.MenuData = MenuData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2AB70
	 * 		Name   -> Function GbxUI.GbxMenuStack.SetBlockingMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShouldBlock                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxMenuStack::SetBlockingMode(bool bShouldBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.SetBlockingMode");
		
		UGbxMenuStack_SetBlockingMode_Params params {};
		params.bShouldBlock = bShouldBlock;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2AAE0
	 * 		Name   -> Function GbxUI.GbxMenuStack.SetBlockAllRawInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShouldBlock                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxMenuStack::SetBlockAllRawInput(bool bShouldBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.SetBlockAllRawInput");
		
		UGbxMenuStack_SetBlockAllRawInput_Params params {};
		params.bShouldBlock = bShouldBlock;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A960
	 * 		Name   -> Function GbxUI.GbxMenuStack.Push
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGbxMenuData*                                MenuData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UGbxMenuStack::Push(class UGbxMenuData* MenuData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.Push");
		
		UGbxMenuStack_Push_Params params {};
		params.MenuData = MenuData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A8A0
	 * 		Name   -> Function GbxUI.GbxMenuStack.PopToSwitchTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Menu                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGbxMenuData*                                MenuData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UGbxMenuStack::PopToSwitchTo(class UObject* Menu, class UGbxMenuData* MenuData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.PopToSwitchTo");
		
		UGbxMenuStack_PopToSwitchTo_Params params {};
		params.Menu = Menu;
		params.MenuData = MenuData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A820
	 * 		Name   -> Function GbxUI.GbxMenuStack.PopTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Menu                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxMenuStack::PopTo(class UObject* Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.PopTo");
		
		UGbxMenuStack_PopTo_Params params {};
		params.Menu = Menu;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A800
	 * 		Name   -> Function GbxUI.GbxMenuStack.Pop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxMenuStack::Pop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.Pop");
		
		UGbxMenuStack_Pop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A5B0
	 * 		Name   -> Function GbxUI.GbxMenuStack.Num
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UGbxMenuStack::Num()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.Num");
		
		UGbxMenuStack_Num_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2A150
	 * 		Name   -> Function GbxUI.GbxMenuStack.HandleRawInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputEvent                                        EVENTTYPE                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ControllerId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxMenuStack::HandleRawInput(const struct FKey& Key, EInputEvent EVENTTYPE, int32_t ControllerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.HandleRawInput");
		
		UGbxMenuStack_HandleRawInput_Params params {};
		params.Key = Key;
		params.EVENTTYPE = EVENTTYPE;
		params.ControllerId = ControllerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F29FD0
	 * 		Name   -> Function GbxUI.GbxMenuStack.GetTopMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UObject* UGbxMenuStack::GetTopMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.GetTopMenu");
		
		UGbxMenuStack_GetTopMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F29E50
	 * 		Name   -> Function GbxUI.GbxMenuStack.GetMenuAtIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UGbxMenuStack::GetMenuAtIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.GetMenuAtIndex");
		
		UGbxMenuStack_GetMenuAtIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F29CD0
	 * 		Name   -> Function GbxUI.GbxMenuStack.GetIndexOfMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Menu                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGbxMenuStack::GetIndexOfMenu(class UObject* Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.GetIndexOfMenu");
		
		UGbxMenuStack_GetIndexOfMenu_Params params {};
		params.Menu = Menu;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F29C40
	 * 		Name   -> Function GbxUI.GbxMenuStack.GetCurrentInputDevice
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EGbxMenuInputDevice UGbxMenuStack::GetCurrentInputDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.GetCurrentInputDevice");
		
		UGbxMenuStack_GetCurrentInputDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F29C20
	 * 		Name   -> Function GbxUI.GbxMenuStack.Draw
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxMenuStack::Draw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.Draw");
		
		UGbxMenuStack_Draw_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F28E60
	 * 		Name   -> Function GbxUI.GbxMenuStack.Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGbxMenuStack::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxMenuStack.Clear");
		
		UGbxMenuStack_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxMenuStack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxMenuStack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxMenuStack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxMeshWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxMeshWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxMeshWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxNoClipCanvasPanel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxNoClipCanvasPanel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxNoClipCanvasPanel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F30130
	 * 		Name   -> Function GbxUI.GbxProgressBar.SetShear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InShear                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProgressBar::SetShear(float InShear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.SetShear");
		
		UGbxProgressBar_SetShear_Params params {};
		params.InShear = InShear;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F300B0
	 * 		Name   -> Function GbxUI.GbxProgressBar.SetPercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InPercent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProgressBar::SetPercent(float InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.SetPercent");
		
		UGbxProgressBar_SetPercent_Params params {};
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2FFE0
	 * 		Name   -> Function GbxUI.GbxProgressBar.SetMaxValueText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxProgressBar::SetMaxValueText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.SetMaxValueText");
		
		UGbxProgressBar_SetMaxValueText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2FF60
	 * 		Name   -> Function GbxUI.GbxProgressBar.SetFillColorAndOpacity
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.SetFillColorAndOpacity");
		
		UGbxProgressBar_SetFillColorAndOpacity_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2FE90
	 * 		Name   -> Function GbxUI.GbxProgressBar.SetCurrentValueText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxProgressBar::SetCurrentValueText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.SetCurrentValueText");
		
		UGbxProgressBar_SetCurrentValueText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F24920
	 * 		Name   -> Function GbxUI.GbxProgressBar.PassedPercentThreshold
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Threshold                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OldValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurrentValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncreasing                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDecreasing                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxProgressBar::STATIC_PassedPercentThreshold(float Threshold, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.PassedPercentThreshold");
		
		UGbxProgressBar_PassedPercentThreshold_Params params {};
		params.Threshold = Threshold;
		params.OldValue = OldValue;
		params.CurrentValue = CurrentValue;
		params.bIncreasing = bIncreasing;
		params.bDecreasing = bDecreasing;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2FAB0
	 * 		Name   -> Function GbxUI.GbxProgressBar.IsInterpolating
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGbxProgressBar::IsInterpolating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.IsInterpolating");
		
		UGbxProgressBar_IsInterpolating_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2F9A0
	 * 		Name   -> Function GbxUI.GbxProgressBar.InterpolateToPercentWithInterpolator
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InPercent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxProgressBarInterpolator                 Interpolator                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxProgressBar::InterpolateToPercentWithInterpolator(float InPercent, const struct FGbxProgressBarInterpolator& Interpolator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.InterpolateToPercentWithInterpolator");
		
		UGbxProgressBar_InterpolateToPercentWithInterpolator_Params params {};
		params.InPercent = InPercent;
		params.Interpolator = Interpolator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2F920
	 * 		Name   -> Function GbxUI.GbxProgressBar.InterpolateToPercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InPercent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProgressBar::InterpolateToPercent(float InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.InterpolateToPercent");
		
		UGbxProgressBar_InterpolateToPercent_Params params {};
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxProgressBar.HandleShowDeltaEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Effect                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OldValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurrentValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProgressBar::HandleShowDeltaEffect(class UWidget* Effect, float OldValue, float CurrentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.HandleShowDeltaEffect");
		
		UGbxProgressBar_HandleShowDeltaEffect_Params params {};
		params.Effect = Effect;
		params.OldValue = OldValue;
		params.CurrentValue = CurrentValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxProgressBar.HandlePercentChanged
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		float                                              OldValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurrentValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsInterpolating                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxProgressBarInterpolator                 ActiveInterpolator                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxProgressBar::HandlePercentChanged(float OldValue, float CurrentValue, bool bIsInterpolating, const struct FGbxProgressBarInterpolator& ActiveInterpolator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.HandlePercentChanged");
		
		UGbxProgressBar_HandlePercentChanged_Params params {};
		params.OldValue = OldValue;
		params.CurrentValue = CurrentValue;
		params.bIsInterpolating = bIsInterpolating;
		params.ActiveInterpolator = ActiveInterpolator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxUI.GbxProgressBar.HandleEnterPercentRange
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        RangeName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProgressBar::HandleEnterPercentRange(const class FName& RangeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.HandleEnterPercentRange");
		
		UGbxProgressBar_HandleEnterPercentRange_Params params {};
		params.RangeName = RangeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2F8F0
	 * 		Name   -> Function GbxUI.GbxProgressBar.GetShear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGbxProgressBar::GetShear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.GetShear");
		
		UGbxProgressBar_GetShear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2F8C0
	 * 		Name   -> Function GbxUI.GbxProgressBar.GetPercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGbxProgressBar::GetPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.GetPercent");
		
		UGbxProgressBar_GetPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxUI.GbxProgressBar.GbxProgressBarRangeEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		class FName                                        RangeName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProgressBar::GbxProgressBarRangeEvent__DelegateSignature(const class FName& RangeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxUI.GbxProgressBar.GbxProgressBarRangeEvent__DelegateSignature");
		
		UGbxProgressBar_GbxProgressBarRangeEvent__DelegateSignature_Params params {};
		params.RangeName = RangeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxUI.GbxProgressBar.GbxProgressBarEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void UGbxProgressBar::GbxProgressBarEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxUI.GbxProgressBar.GbxProgressBarEvent__DelegateSignature");
		
		UGbxProgressBar_GbxProgressBarEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F241E0
	 * 		Name   -> Function GbxUI.GbxProgressBar.EnteredPercentRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              RangeMin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeMax                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OldValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurrentValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncreasing                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDecreasing                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxProgressBar::STATIC_EnteredPercentRange(float RangeMin, float RangeMax, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxProgressBar.EnteredPercentRange");
		
		UGbxProgressBar_EnteredPercentRange_Params params {};
		params.RangeMin = RangeMin;
		params.RangeMax = RangeMax;
		params.OldValue = OldValue;
		params.CurrentValue = CurrentValue;
		params.bIncreasing = bIncreasing;
		params.bDecreasing = bDecreasing;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxProgressBar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxProgressBar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxProgressBar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxRetainerBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxRetainerBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxRetainerBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxRichTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxRichTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxRichTextBlock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxScrollBoxList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxScrollBoxList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxScrollBoxList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F30300
	 * 		Name   -> Function GbxUI.GbxSpinner.SpinRight
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class UGbxGFxButton*                               PressedButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxSpinner::SpinRight(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxSpinner.SpinRight");
		
		UGbxSpinner_SpinRight_Params params {};
		params.PressedButton = PressedButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxUI.GbxSpinner.SpinnerValueUpdatedEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void UGbxSpinner::SpinnerValueUpdatedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxUI.GbxSpinner.SpinnerValueUpdatedEvent__DelegateSignature");
		
		UGbxSpinner_SpinnerValueUpdatedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F301B0
	 * 		Name   -> Function GbxUI.GbxSpinner.SpinLeft
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class UGbxGFxButton*                               PressedButton                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxMenuInputEvent                          InputInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGbxSpinner::SpinLeft(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxSpinner.SpinLeft");
		
		UGbxSpinner_SpinLeft_Params params {};
		params.PressedButton = PressedButton;
		params.InputInfo = InputInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxSpinner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxSpinner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxSpinner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2FB00
	 * 		Name   -> Function GbxUI.GbxTextField.OnScrollBarPositionUpdated
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              SliderPercentage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxTextField::OnScrollBarPositionUpdated(float SliderPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxTextField.OnScrollBarPositionUpdated");
		
		UGbxTextField_OnScrollBarPositionUpdated_Params params {};
		params.SliderPercentage = SliderPercentage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxTextField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxTextField::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxTextField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIAccessors.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIAccessors::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.UIAccessors");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F352C0
	 * 		Name   -> Function GbxUI.GbxUILocalization.PlatformToText
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Platform                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UGbxUILocalization::STATIC_PlatformToText(const class FName& Platform, class AGbxPlayerController* pc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.PlatformToText");
		
		UGbxUILocalization_PlatformToText_Params params {};
		params.Platform = Platform;
		params.pc = pc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F35180
	 * 		Name   -> Function GbxUI.GbxUILocalization.PlatformToRichText
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Platform                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   GlyphSize                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UGbxUILocalization::STATIC_PlatformToRichText(const class FName& Platform, class AGbxPlayerController* pc, const struct FVector2D& GlyphSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.PlatformToRichText");
		
		UGbxUILocalization_PlatformToRichText_Params params {};
		params.Platform = Platform;
		params.pc = pc;
		params.GlyphSize = GlyphSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F35010
	 * 		Name   -> Function GbxUI.GbxUILocalization.PlatformToGlyph
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Platform                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSlateBrush UGbxUILocalization::STATIC_PlatformToGlyph(const class FName& Platform, class AGbxPlayerController* pc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.PlatformToGlyph");
		
		UGbxUILocalization_PlatformToGlyph_Params params {};
		params.Platform = Platform;
		params.pc = pc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34E70
	 * 		Name   -> Function GbxUI.GbxUILocalization.PlatformToGFxHTMLText
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Platform                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GlyphHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VSpace                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UGbxUILocalization::STATIC_PlatformToGFxHTMLText(const class FName& Platform, class AGbxPlayerController* pc, float GlyphHeight, int32_t VSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.PlatformToGFxHTMLText");
		
		UGbxUILocalization_PlatformToGFxHTMLText_Params params {};
		params.Platform = Platform;
		params.pc = pc;
		params.GlyphHeight = GlyphHeight;
		params.VSpace = VSpace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F348E0
	 * 		Name   -> Function GbxUI.GbxUILocalization.IsPlatformGlyphAvailable
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Platform                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxUILocalization::STATIC_IsPlatformGlyphAvailable(const class FName& Platform, class AGbxPlayerController* pc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.IsPlatformGlyphAvailable");
		
		UGbxUILocalization_IsPlatformGlyphAvailable_Params params {};
		params.Platform = Platform;
		params.pc = pc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F347F0
	 * 		Name   -> Function GbxUI.GbxUILocalization.IsInputActionGlyphAvailable
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGbxActionToTextType                               GlyphType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxUILocalization::STATIC_IsInputActionGlyphAvailable(const class FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.IsInputActionGlyphAvailable");
		
		UGbxUILocalization_IsInputActionGlyphAvailable_Params params {};
		params.ActionName = ActionName;
		params.pc = pc;
		params.GlyphType = GlyphType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34670
	 * 		Name   -> Function GbxUI.GbxUILocalization.InputActionToText
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGbxActionToTextType                               GlyphType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UGbxUILocalization::STATIC_InputActionToText(const class FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.InputActionToText");
		
		UGbxUILocalization_InputActionToText_Params params {};
		params.ActionName = ActionName;
		params.pc = pc;
		params.GlyphType = GlyphType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F344E0
	 * 		Name   -> Function GbxUI.GbxUILocalization.InputActionToRichText
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGbxActionToTextType                               GlyphType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   GlyphSize                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UGbxUILocalization::STATIC_InputActionToRichText(const class FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType, const struct FVector2D& GlyphSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.InputActionToRichText");
		
		UGbxUILocalization_InputActionToRichText_Params params {};
		params.ActionName = ActionName;
		params.pc = pc;
		params.GlyphType = GlyphType;
		params.GlyphSize = GlyphSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34330
	 * 		Name   -> Function GbxUI.GbxUILocalization.InputActionToGlyph
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGbxActionToTextType                               GlyphType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSlateBrush UGbxUILocalization::STATIC_InputActionToGlyph(const class FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.InputActionToGlyph");
		
		UGbxUILocalization_InputActionToGlyph_Params params {};
		params.ActionName = ActionName;
		params.pc = pc;
		params.GlyphType = GlyphType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34150
	 * 		Name   -> Function GbxUI.GbxUILocalization.InputActionToGFxHTMLText
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGbxActionToTextType                               GlyphType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GlyphHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VSpace                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UGbxUILocalization::STATIC_InputActionToGFxHTMLText(const class FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType, float GlyphHeight, int32_t VSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.InputActionToGFxHTMLText");
		
		UGbxUILocalization_InputActionToGFxHTMLText_Params params {};
		params.ActionName = ActionName;
		params.pc = pc;
		params.GlyphType = GlyphType;
		params.GlyphHeight = GlyphHeight;
		params.VSpace = VSpace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F33D00
	 * 		Name   -> Function GbxUI.GbxUILocalization.FKeyToGFxHTMLText
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGbxPlayerController*                        pc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGbxActionToTextType                               GlyphType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GlyphHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UGbxUILocalization::STATIC_FKeyToGFxHTMLText(const struct FKey& Key, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType, float GlyphHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUILocalization.FKeyToGFxHTMLText");
		
		UGbxUILocalization_FKeyToGFxHTMLText_Params params {};
		params.Key = Key;
		params.pc = pc;
		params.GlyphType = GlyphType;
		params.GlyphHeight = GlyphHeight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxUILocalization.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxUILocalization::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxUILocalization");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputToGlyphMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputToGlyphMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxInputToGlyphMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxPlatformToGlyphMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxPlatformToGlyphMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxPlatformToGlyphMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F34D00
	 * 		Name   -> Function GbxUI.GbxUISpinnerWidget.MoveToNumber
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		unsigned char                                      NewNumber                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGbxSpinnerWidgetGoToMethod                        GoToMethod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UGbxUISpinnerWidget::MoveToNumber(unsigned char NewNumber, EGbxSpinnerWidgetGoToMethod GoToMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxUISpinnerWidget.MoveToNumber");
		
		UGbxUISpinnerWidget_MoveToNumber_Params params {};
		params.NewNumber = NewNumber;
		params.GoToMethod = GoToMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxUISpinnerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxUISpinnerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxUISpinnerWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F35E20
	 * 		Name   -> Function GbxUI.GbxWidgetComponent.Setup
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      NewWidgetClass                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGbxPlayerController*                        NewTrackedPlayer                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             ParentComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWidgetSpace                                       WidgetSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewLayerZOrder                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        CollisionProfile                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxWidgetComponent::Setup(class UClass* NewWidgetClass, class AGbxPlayerController* NewTrackedPlayer, class USceneComponent* ParentComponent, EWidgetSpace WidgetSpace, int32_t NewLayerZOrder, const class FName& CollisionProfile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxWidgetComponent.Setup");
		
		UGbxWidgetComponent_Setup_Params params {};
		params.NewWidgetClass = NewWidgetClass;
		params.NewTrackedPlayer = NewTrackedPlayer;
		params.ParentComponent = ParentComponent;
		params.WidgetSpace = WidgetSpace;
		params.NewLayerZOrder = NewLayerZOrder;
		params.CollisionProfile = CollisionProfile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F35850
	 * 		Name   -> Function GbxUI.GbxWidgetComponent.SetDistanceScaleCurve
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCurveFloat*                                 NewDistanceScaleCurve                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxWidgetComponent::SetDistanceScaleCurve(class UCurveFloat* NewDistanceScaleCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxWidgetComponent.SetDistanceScaleCurve");
		
		UGbxWidgetComponent_SetDistanceScaleCurve_Params params {};
		params.NewDistanceScaleCurve = NewDistanceScaleCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F357D0
	 * 		Name   -> Function GbxUI.GbxWidgetComponent.SetDistanceAlphaCurve
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCurveFloat*                                 NewDistanceAlphaCurve                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxWidgetComponent::SetDistanceAlphaCurve(class UCurveFloat* NewDistanceAlphaCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxWidgetComponent.SetDistanceAlphaCurve");
		
		UGbxWidgetComponent_SetDistanceAlphaCurve_Params params {};
		params.NewDistanceAlphaCurve = NewDistanceAlphaCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F35750
	 * 		Name   -> Function GbxUI.GbxWidgetComponent.SetDistanceAlphaBorder
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBorder*                                     NewDistanceAlphaBorder                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxWidgetComponent::SetDistanceAlphaBorder(class UBorder* NewDistanceAlphaBorder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxWidgetComponent.SetDistanceAlphaBorder");
		
		UGbxWidgetComponent_SetDistanceAlphaBorder_Params params {};
		params.NewDistanceAlphaBorder = NewDistanceAlphaBorder;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxWidgetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxWidgetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxWidgetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxWidgetFocusManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxWidgetFocusManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxWidgetFocusManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F365B0
	 * 		Name   -> Function GbxUI.GbxWorldSpaceProxyWidget.GetWorldLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 */
	struct FVector UGbxWorldSpaceProxyWidget::GetWorldLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.GbxWorldSpaceProxyWidget.GetWorldLocation");
		
		UGbxWorldSpaceProxyWidget_GetWorldLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxWorldSpaceProxyWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxWorldSpaceProxyWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.GbxWorldSpaceProxyWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F36670
	 * 		Name   -> Function GbxUI.InWorldDamageNumber.OnWentOffscreen
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UInWorldDamageNumber::OnWentOffscreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.InWorldDamageNumber.OnWentOffscreen");
		
		UInWorldDamageNumber_OnWentOffscreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F365F0
	 * 		Name   -> Function GbxUI.InWorldDamageNumber.ImpulseAnimationCompleted
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UUserWidget*                                 AssociatedWidget                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInWorldDamageNumber::ImpulseAnimationCompleted(class UUserWidget* AssociatedWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxUI.InWorldDamageNumber.ImpulseAnimationCompleted");
		
		UInWorldDamageNumber_ImpulseAnimationCompleted_Params params {};
		params.AssociatedWidget = AssociatedWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInWorldDamageNumber.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInWorldDamageNumber::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxUI.InWorldDamageNumber");
		return ptr;
	}

}


