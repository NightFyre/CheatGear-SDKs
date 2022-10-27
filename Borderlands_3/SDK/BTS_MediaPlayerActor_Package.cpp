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
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-setShowSlideTextures
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABTS_MediaPlayerActor_C::slideShow_setShowSlideTextures(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-setShowSlideTextures");
		
		ABTS_MediaPlayerActor_C_slideShow_setShowSlideTextures_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-SetLoadingSpinnerVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABTS_MediaPlayerActor_C::slideShow_SetLoadingSpinnerVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-SetLoadingSpinnerVisibility");
		
		ABTS_MediaPlayerActor_C_slideShow_SetLoadingSpinnerVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.getWrappedIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            arrayLength                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t ABTS_MediaPlayerActor_C::getWrappedIndex(int32_t Index, int32_t arrayLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.getWrappedIndex");
		
		ABTS_MediaPlayerActor_C_getWrappedIndex_Params params {};
		params.Index = Index;
		params.arrayLength = arrayLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-HandleLoadedSlide
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABTS_MediaPlayerActor_C::slideShow_HandleLoadedSlide(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-HandleLoadedSlide");
		
		ABTS_MediaPlayerActor_C_slideShow_HandleLoadedSlide_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.getItemWrapped
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABTS_MediaPlayerActor_C::getItemWrapped(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.getItemWrapped");
		
		ABTS_MediaPlayerActor_C_getItemWrapped_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.IsAssetLoaded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABTS_MediaPlayerActor_C::IsAssetLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.IsAssetLoaded");
		
		ABTS_MediaPlayerActor_C_IsAssetLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.video-seekComplete
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::video_seekComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.video-seekComplete");
		
		ABTS_MediaPlayerActor_C_video_seekComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-IncrementActiveSlide
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            activeSlideIndex                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABTS_MediaPlayerActor_C::slideShow_IncrementActiveSlide(int32_t* activeSlideIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-IncrementActiveSlide");
		
		ABTS_MediaPlayerActor_C_slideShow_IncrementActiveSlide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (activeSlideIndex != nullptr)
			*activeSlideIndex = params.activeSlideIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.SetProgressBarProgress
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentFrame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumberOfFrames                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABTS_MediaPlayerActor_C::SetProgressBarProgress(float Progress, int32_t CurrentFrame, int32_t NumberOfFrames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.SetProgressBarProgress");
		
		ABTS_MediaPlayerActor_C_SetProgressBarProgress_Params params {};
		params.Progress = Progress;
		params.CurrentFrame = CurrentFrame;
		params.NumberOfFrames = NumberOfFrames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-SetSlideA
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABTS_MediaPlayerActor_C::slideShow_SetSlideA(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-SetSlideA");
		
		ABTS_MediaPlayerActor_C_slideShow_SetSlideA_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-SetSlideB
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABTS_MediaPlayerActor_C::slideShow_SetSlideB(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-SetSlideB");
		
		ABTS_MediaPlayerActor_C_slideShow_SetSlideB_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.video-SeekForward
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::video_SeekForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.video-SeekForward");
		
		ABTS_MediaPlayerActor_C_video_SeekForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.video-SeekBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::video_SeekBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.video-SeekBack");
		
		ABTS_MediaPlayerActor_C_video_SeekBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.video-applyPendingSeek
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::video_applyPendingSeek()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.video-applyPendingSeek");
		
		ABTS_MediaPlayerActor_C_video_applyPendingSeek_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-GetTextureMaterialParams
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture2D                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                LinearColor                                                (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABTS_MediaPlayerActor_C::slideShow_GetTextureMaterialParams(class UTexture2D* Texture2D, struct FLinearColor* LinearColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-GetTextureMaterialParams");
		
		ABTS_MediaPlayerActor_C_slideShow_GetTextureMaterialParams_Params params {};
		params.Texture2D = Texture2D;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinearColor != nullptr)
			*LinearColor = params.LinearColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.UserConstructionScript");
		
		ABTS_MediaPlayerActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.timer-PlaySlide__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::timer_PlaySlide__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.timer-PlaySlide__FinishedFunc");
		
		ABTS_MediaPlayerActor_C_timer_PlaySlide__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.timer-PlaySlide__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::timer_PlaySlide__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.timer-PlaySlide__UpdateFunc");
		
		ABTS_MediaPlayerActor_C_timer_PlaySlide__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.videoPlaybackProgressBarUpdate__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::videoPlaybackProgressBarUpdate__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.videoPlaybackProgressBarUpdate__FinishedFunc");
		
		ABTS_MediaPlayerActor_C_videoPlaybackProgressBarUpdate__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.videoPlaybackProgressBarUpdate__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::videoPlaybackProgressBarUpdate__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.videoPlaybackProgressBarUpdate__UpdateFunc");
		
		ABTS_MediaPlayerActor_C_videoPlaybackProgressBarUpdate__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.videoPlaybackProgressBarUpdate__Restarted__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::videoPlaybackProgressBarUpdate__Restarted__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.videoPlaybackProgressBarUpdate__Restarted__EventFunc");
		
		ABTS_MediaPlayerActor_C_videoPlaybackProgressBarUpdate__Restarted__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.TransitionToNextSlide__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::TransitionToNextSlide__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.TransitionToNextSlide__FinishedFunc");
		
		ABTS_MediaPlayerActor_C_TransitionToNextSlide__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.TransitionToNextSlide__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::TransitionToNextSlide__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.TransitionToNextSlide__UpdateFunc");
		
		ABTS_MediaPlayerActor_C_TransitionToNextSlide__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.powerUp__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::powerUp__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.powerUp__FinishedFunc");
		
		ABTS_MediaPlayerActor_C_powerUp__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.powerUp__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::powerUp__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.powerUp__UpdateFunc");
		
		ABTS_MediaPlayerActor_C_powerUp__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.powerUp__showProgressBar__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::powerUp__showProgressBar__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.powerUp__showProgressBar__EventFunc");
		
		ABTS_MediaPlayerActor_C_powerUp__showProgressBar__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.OnLoaded_6DDD94D74468A1C216FF6D94153E88FE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABTS_MediaPlayerActor_C::OnLoaded_6DDD94D74468A1C216FF6D94153E88FE(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.OnLoaded_6DDD94D74468A1C216FF6D94153E88FE");
		
		ABTS_MediaPlayerActor_C_OnLoaded_6DDD94D74468A1C216FF6D94153E88FE_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.OnLoaded_DA904FD24F2D4211A168D5A4EC5B640D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABTS_MediaPlayerActor_C::OnLoaded_DA904FD24F2D4211A168D5A4EC5B640D(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.OnLoaded_DA904FD24F2D4211A168D5A4EC5B640D");
		
		ABTS_MediaPlayerActor_C_OnLoaded_DA904FD24F2D4211A168D5A4EC5B640D_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.OnLoaded_F066C206415E813533E292AEFC61AEDE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABTS_MediaPlayerActor_C::OnLoaded_F066C206415E813533E292AEFC61AEDE(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.OnLoaded_F066C206415E813533E292AEFC61AEDE");
		
		ABTS_MediaPlayerActor_C_OnLoaded_F066C206415E813533E292AEFC61AEDE_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.OnLoaded_93832F504C7DE28ABB9EDA930136527A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABTS_MediaPlayerActor_C::OnLoaded_93832F504C7DE28ABB9EDA930136527A(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.OnLoaded_93832F504C7DE28ABB9EDA930136527A");
		
		ABTS_MediaPlayerActor_C_OnLoaded_93832F504C7DE28ABB9EDA930136527A_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesContentSelected
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UBehindTheScenesMediaContainer*              MediaContainer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABTS_MediaPlayerActor_C::BehindTheScenesContentSelected(class UBehindTheScenesMediaContainer* MediaContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesContentSelected");
		
		ABTS_MediaPlayerActor_C_BehindTheScenesContentSelected_Params params {};
		params.MediaContainer = MediaContainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesMenuOpened
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::BehindTheScenesMenuOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesMenuOpened");
		
		ABTS_MediaPlayerActor_C_BehindTheScenesMenuOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesMenuClosed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::BehindTheScenesMenuClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesMenuClosed");
		
		ABTS_MediaPlayerActor_C_BehindTheScenesMenuClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesMenuPlayPauseMovie
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::BehindTheScenesMenuPlayPauseMovie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesMenuPlayPauseMovie");
		
		ABTS_MediaPlayerActor_C_BehindTheScenesMenuPlayPauseMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesMenuFastForwardMovie
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::BehindTheScenesMenuFastForwardMovie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesMenuFastForwardMovie");
		
		ABTS_MediaPlayerActor_C_BehindTheScenesMenuFastForwardMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesMenuRewindMovie
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::BehindTheScenesMenuRewindMovie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesMenuRewindMovie");
		
		ABTS_MediaPlayerActor_C_BehindTheScenesMenuRewindMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-PausePressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::slideShow_PausePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-PausePressed");
		
		ABTS_MediaPlayerActor_C_slideShow_PausePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-SkipBackPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::slideShow_SkipBackPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-SkipBackPressed");
		
		ABTS_MediaPlayerActor_C_slideShow_SkipBackPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-SkipForwardPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::slideShow_SkipForwardPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-SkipForwardPressed");
		
		ABTS_MediaPlayerActor_C_slideShow_SkipForwardPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-PlayTransition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::slideShow_PlayTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-PlayTransition");
		
		ABTS_MediaPlayerActor_C_slideShow_PlayTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-PlayPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::slideShow_PlayPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-PlayPressed");
		
		ABTS_MediaPlayerActor_C_slideShow_PlayPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.showplaybackWindow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::showplaybackWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.showplaybackWindow");
		
		ABTS_MediaPlayerActor_C_showplaybackWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-playSlide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::slideShow_playSlide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-playSlide");
		
		ABTS_MediaPlayerActor_C_slideShow_playSlide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.loadMedia
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::loadMedia()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.loadMedia");
		
		ABTS_MediaPlayerActor_C_loadMedia_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.ReceiveBeginPlay");
		
		ABTS_MediaPlayerActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.LoadAdjacentTextures
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::LoadAdjacentTextures()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.LoadAdjacentTextures");
		
		ABTS_MediaPlayerActor_C_LoadAdjacentTextures_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.loadNextTexture
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::loadNextTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.loadNextTexture");
		
		ABTS_MediaPlayerActor_C_loadNextTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.ce-slideshow-TransitionToNextSlide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::ce_slideshow_TransitionToNextSlide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.ce-slideshow-TransitionToNextSlide");
		
		ABTS_MediaPlayerActor_C_ce_slideshow_TransitionToNextSlide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.ce-slideshow-transitionToPreviousSlide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::ce_slideshow_transitionToPreviousSlide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.ce-slideshow-transitionToPreviousSlide");
		
		ABTS_MediaPlayerActor_C_ce_slideshow_transitionToPreviousSlide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.EndOfVideoReached
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::EndOfVideoReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.EndOfVideoReached");
		
		ABTS_MediaPlayerActor_C_EndOfVideoReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-playSlideFromStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::slideShow_playSlideFromStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-playSlideFromStart");
		
		ABTS_MediaPlayerActor_C_slideShow_playSlideFromStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.TracksChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::TracksChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.TracksChanged");
		
		ABTS_MediaPlayerActor_C_TracksChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.mediaRestart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::mediaRestart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.mediaRestart");
		
		ABTS_MediaPlayerActor_C_mediaRestart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.MediaClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABTS_MediaPlayerActor_C::MediaClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.MediaClosed");
		
		ABTS_MediaPlayerActor_C_MediaClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.ExecuteUbergraph_BTS_MediaPlayerActor
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABTS_MediaPlayerActor_C::ExecuteUbergraph_BTS_MediaPlayerActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.ExecuteUbergraph_BTS_MediaPlayerActor");
		
		ABTS_MediaPlayerActor_C_ExecuteUbergraph_BTS_MediaPlayerActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABTS_MediaPlayerActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABTS_MediaPlayerActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTS_MediaPlayerActor.BTS_MediaPlayerActor_C");
		return ptr;
	}

}


