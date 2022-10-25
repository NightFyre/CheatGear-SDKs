/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.resetLockIconVis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CarouselCam_C::resetLockIconVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.resetLockIconVis");
		
		ABP_CarouselCam_C_resetLockIconVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.fadeLockIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CharID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IconFadeDone                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::fadeLockIcon(int32_t CharID, bool* IconFadeDone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.fadeLockIcon");
		
		ABP_CarouselCam_C_fadeLockIcon_Params params {};
		params.CharID = CharID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IconFadeDone != nullptr)
			*IconFadeDone = params.IconFadeDone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.toggleLockIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CharID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::toggleLockIcon(int32_t CharID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.toggleLockIcon");
		
		ABP_CarouselCam_C_toggleLockIcon_Params params {};
		params.CharID = CharID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.resetCamLoc
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CarouselCam_C::resetCamLoc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.resetCamLoc");
		
		ABP_CarouselCam_C_resetCamLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.initLights
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CarouselCam_C::initLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.initLights");
		
		ABP_CarouselCam_C_initLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.camAnimViaCurves
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCameraComponent*                            Camera                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UCurveVector*                                Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UCurveVector*                                Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UCurveFloat*                                 FOV                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Reverse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               done                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     cameraLoc                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::camAnimViaCurves(class UCameraComponent* Camera, class UCurveVector* Location, class UCurveVector* Rotation, class UCurveFloat* FOV, float Time, bool Reverse, float PlayRate, bool* done, float* DeltaTime, struct FVector* cameraLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.camAnimViaCurves");
		
		ABP_CarouselCam_C_camAnimViaCurves_Params params {};
		params.Camera = Camera;
		params.Location = Location;
		params.Rotation = Rotation;
		params.FOV = FOV;
		params.Time = Time;
		params.Reverse = Reverse;
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (done != nullptr)
			*done = params.done;
		if (DeltaTime != nullptr)
			*DeltaTime = params.DeltaTime;
		if (cameraLoc != nullptr)
			*cameraLoc = params.cameraLoc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.setLightSector
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            sectorID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotator                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::setLightSector(int32_t sectorID, struct FRotator* Rotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.setLightSector");
		
		ABP_CarouselCam_C_setLightSector_Params params {};
		params.sectorID = sectorID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rotator != nullptr)
			*Rotator = params.Rotator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.lightSwitch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               onLights                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               offLights                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Timespan                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class ULightComponent*>                     LightSet                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<float>                                      LightSetIntensity                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABP_CarouselCam_C::lightSwitch(bool onLights, bool offLights, float Timespan, TArray<class ULightComponent*>* LightSet, TArray<float>* LightSetIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.lightSwitch");
		
		ABP_CarouselCam_C_lightSwitch_Params params {};
		params.onLights = onLights;
		params.offLights = offLights;
		params.Timespan = Timespan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LightSet != nullptr)
			*LightSet = params.LightSet;
		if (LightSetIntensity != nullptr)
			*LightSetIntensity = params.LightSetIntensity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.getSectorID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            sectorID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Remainder                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::getSectorID(int32_t* sectorID, float* Remainder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.getSectorID");
		
		ABP_CarouselCam_C_getSectorID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (sectorID != nullptr)
			*sectorID = params.sectorID;
		if (Remainder != nullptr)
			*Remainder = params.Remainder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.getCamIdleTime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              IdleTime                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxIdleTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               idleStatus                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::getCamIdleTime(float Time, float* IdleTime, float* MaxIdleTime, bool* idleStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.getCamIdleTime");
		
		ABP_CarouselCam_C_getCamIdleTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IdleTime != nullptr)
			*IdleTime = params.IdleTime;
		if (MaxIdleTime != nullptr)
			*MaxIdleTime = params.MaxIdleTime;
		if (idleStatus != nullptr)
			*idleStatus = params.idleStatus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.getCamRotDelta
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              rotDelta                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::getCamRotDelta(float* rotDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.getCamRotDelta");
		
		ABP_CarouselCam_C_getCamRotDelta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (rotDelta != nullptr)
			*rotDelta = params.rotDelta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.zeroTest
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Float                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::zeroTest(float Float, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.zeroTest");
		
		ABP_CarouselCam_C_zeroTest_Params params {};
		params.Float = Float;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.zoomCam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               zoomInTrigger                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               zoomOutTrigger                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               selectedZoomTrigger                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               zoomInDone                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               zoomOutDone                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::zoomCam(float Time, bool zoomInTrigger, bool zoomOutTrigger, bool selectedZoomTrigger, bool* zoomInDone, bool* zoomOutDone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.zoomCam");
		
		ABP_CarouselCam_C_zoomCam_Params params {};
		params.Time = Time;
		params.zoomInTrigger = zoomInTrigger;
		params.zoomOutTrigger = zoomOutTrigger;
		params.selectedZoomTrigger = selectedZoomTrigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (zoomInDone != nullptr)
			*zoomInDone = params.zoomInDone;
		if (zoomOutDone != nullptr)
			*zoomOutDone = params.zoomOutDone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.getCamLoc
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             CameraRef                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CamLoc                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::getCamLoc(class USceneComponent* CameraRef, struct FVector* CamLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.getCamLoc");
		
		ABP_CarouselCam_C_getCamLoc_Params params {};
		params.CameraRef = CameraRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CamLoc != nullptr)
			*CamLoc = params.CamLoc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.matchRotPerChar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               rotMatch                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::matchRotPerChar(bool* rotMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.matchRotPerChar");
		
		ABP_CarouselCam_C_matchRotPerChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (rotMatch != nullptr)
			*rotMatch = params.rotMatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.set_timeSpan
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Timespan                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::set_timeSpan(float StartTime, float* Timespan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.set_timeSpan");
		
		ABP_CarouselCam_C_set_timeSpan_Params params {};
		params.StartTime = StartTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Timespan != nullptr)
			*Timespan = params.Timespan;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.matchTimespan
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               timesup                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::matchTimespan(bool* timesup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.matchTimespan");
		
		ABP_CarouselCam_C_matchTimespan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (timesup != nullptr)
			*timesup = params.timesup;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.set_camAimRot
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              YawValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Timespan                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Continuous                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ResultYawValue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               rotSnapDone                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::set_camAimRot(float YawValue, float Timespan, bool Continuous, float* ResultYawValue, bool* rotSnapDone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.set_camAimRot");
		
		ABP_CarouselCam_C_set_camAimRot_Params params {};
		params.YawValue = YawValue;
		params.Timespan = Timespan;
		params.Continuous = Continuous;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultYawValue != nullptr)
			*ResultYawValue = params.ResultYawValue;
		if (rotSnapDone != nullptr)
			*rotSnapDone = params.rotSnapDone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.get_camAimRot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::get_camAimRot(struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.get_camAimRot");
		
		ABP_CarouselCam_C_get_camAimRot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.set_maxTimespan
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              cameraMoveTime                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::set_maxTimespan(float* cameraMoveTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.set_maxTimespan");
		
		ABP_CarouselCam_C_set_maxTimespan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (cameraMoveTime != nullptr)
			*cameraMoveTime = params.cameraMoveTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.Reset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               lockIconVis                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Continuous                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Stop                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              initTime                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::Reset(bool lockIconVis, bool Continuous, bool Stop, float* initTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.Reset");
		
		ABP_CarouselCam_C_Reset_Params params {};
		params.lockIconVis = lockIconVis;
		params.Continuous = Continuous;
		params.Stop = Stop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (initTime != nullptr)
			*initTime = params.initTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.moveCam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               rotTrigger                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              rotFactor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Continuous                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               rotSnap                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Mouse                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            sectorID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               atDefaultZoom                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               rotSnapDone                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    sectorRotator                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::moveCam(float Time, bool rotTrigger, float rotFactor, bool Continuous, bool rotSnap, bool Mouse, int32_t* sectorID, bool* atDefaultZoom, bool* rotSnapDone, struct FRotator* sectorRotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.moveCam");
		
		ABP_CarouselCam_C_moveCam_Params params {};
		params.Time = Time;
		params.rotTrigger = rotTrigger;
		params.rotFactor = rotFactor;
		params.Continuous = Continuous;
		params.rotSnap = rotSnap;
		params.Mouse = Mouse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (sectorID != nullptr)
			*sectorID = params.sectorID;
		if (atDefaultZoom != nullptr)
			*atDefaultZoom = params.atDefaultZoom;
		if (rotSnapDone != nullptr)
			*rotSnapDone = params.rotSnapDone;
		if (sectorRotator != nullptr)
			*sectorRotator = params.sectorRotator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CarouselCam_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.UserConstructionScript");
		
		ABP_CarouselCam_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_CarouselCam_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.ReceiveBeginPlay");
		
		ABP_CarouselCam_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.ReceiveTick");
		
		ABP_CarouselCam_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_CarouselCam.BP_CarouselCam_C.ExecuteUbergraph_BP_CarouselCam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CarouselCam_C::ExecuteUbergraph_BP_CarouselCam(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.ExecuteUbergraph_BP_CarouselCam");
		
		ABP_CarouselCam_C_ExecuteUbergraph_BP_CarouselCam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CarouselCam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CarouselCam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CarouselCam.BP_CarouselCam_C");
		return ptr;
	}

}


