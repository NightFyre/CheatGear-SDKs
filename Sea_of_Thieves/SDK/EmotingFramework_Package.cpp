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
	 * 		Name   -> PredefinedFunction UEmoteCameraInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmoteCameraInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmotingFramework.EmoteCameraInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEmoteCard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEmoteCard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmotingFramework.EmoteCard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEmoteCoin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEmoteCoin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmotingFramework.EmoteCoin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmotePropData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmotePropData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmotingFramework.EmotePropData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmoteRandomFromListAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmoteRandomFromListAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmotingFramework.EmoteRandomFromListAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmotePropDiceData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmotePropDiceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmotingFramework.EmotePropDiceData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function EmotingFramework.EmoteDice.SetDiceMesh
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDiceType                                          DiceType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEmoteDice::SetDiceMesh(EDiceType DiceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotingFramework.EmoteDice.SetDiceMesh");
		
		AEmoteDice_SetDiceMesh_Params params {};
		params.DiceType = DiceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03426D50
	 * 		Name   -> Function EmotingFramework.EmoteDice.SendTelemetryData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  OrientationUsed                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RollNumber                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDiceType                                          DiceType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEmoteDice::SendTelemetryData(const struct FTransform& OrientationUsed, int32_t RollNumber, EDiceType DiceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotingFramework.EmoteDice.SendTelemetryData");
		
		AEmoteDice_SendTelemetryData_Params params {};
		params.OrientationUsed = OrientationUsed;
		params.RollNumber = RollNumber;
		params.DiceType = DiceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03426C80
	 * 		Name   -> Function EmotingFramework.EmoteDice.RollDice
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RollNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDiceType                                          DiceType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEmoteDice::RollDice(int32_t RollNumber, EDiceType DiceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotingFramework.EmoteDice.RollDice");
		
		AEmoteDice_RollDice_Params params {};
		params.RollNumber = RollNumber;
		params.DiceType = DiceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEmoteDice.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEmoteDice::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmotingFramework.EmoteDice");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmoteIdListingAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmoteIdListingAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmotingFramework.EmoteIdListingAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmotePropRandomObjectData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmotePropRandomObjectData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmotingFramework.EmotePropRandomObjectData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEmoteRandomObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEmoteRandomObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmotingFramework.EmoteRandomObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmoteSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmoteSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmotingFramework.EmoteSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmoteZoomInAnalogInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmoteZoomInAnalogInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmotingFramework.EmoteZoomInAnalogInputId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmoteZoomMouseAnalogInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmoteZoomMouseAnalogInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmotingFramework.EmoteZoomMouseAnalogInputId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmoteZoomOutAnalogInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmoteZoomOutAnalogInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmotingFramework.EmoteZoomOutAnalogInputId");
		return ptr;
	}

}


