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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterSlideParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterSlideParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WaterSlide.WaterSlideParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04278230
	 * 		Name   -> Function WaterSlide.WaterSlide.SetEntranceCollisionComponent
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InEntranceCollisionComponent                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWaterSlide::SetEntranceCollisionComponent(class UPrimitiveComponent* InEntranceCollisionComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterSlide.WaterSlide.SetEntranceCollisionComponent");
		
		AWaterSlide_SetEntranceCollisionComponent_Params params {};
		params.InEntranceCollisionComponent = InEntranceCollisionComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04278060
	 * 		Name   -> Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class AActor*                                      InOtherActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         InOtherComp                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InOtherBodyIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InFromSweep                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  InSweepResult                                              (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void AWaterSlide::ComponentBeginOverlapCallBack(class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int32_t InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack");
		
		AWaterSlide_ComponentBeginOverlapCallBack_Params params {};
		params.InOtherActor = InOtherActor;
		params.InOtherComp = InOtherComp;
		params.InOtherBodyIndex = InOtherBodyIndex;
		params.InFromSweep = InFromSweep;
		params.InSweepResult = InSweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterSlide.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterSlide::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WaterSlide.WaterSlide");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterSlideActionStateId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterSlideActionStateId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WaterSlide.WaterSlideActionStateId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterSlideAudioParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterSlideAudioParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WaterSlide.WaterSlideAudioParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterSlideInputComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterSlideInputComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WaterSlide.WaterSlideInputComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterSlidePlayerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterSlidePlayerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WaterSlide.WaterSlidePlayerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterSlidePlayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterSlidePlayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WaterSlide.WaterSlidePlayerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterSlideVeeringAnalogInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterSlideVeeringAnalogInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WaterSlide.WaterSlideVeeringAnalogInputId");
		return ptr;
	}

}


