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
	 * 		Name   -> PredefinedFunction UAutoMoveInputComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutoMoveInputComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaInputMkII.AutoMoveInputComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaCharacterBaseInputComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaCharacterBaseInputComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaInputMkII.AthenaCharacterBaseInputComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaCharacterBaseInputComponentWithInterference.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaCharacterBaseInputComponentWithInterference::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaInputMkII.AthenaCharacterBaseInputComponentWithInterference");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULookingAtWieldableInputComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULookingAtWieldableInputComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaInputMkII.LookingAtWieldableInputComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovementInterferenceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovementInterferenceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaInputMkII.MovementInterferenceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClampedFreelookXAnalogInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClampedFreelookXAnalogInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaInputMkII.ClampedFreelookXAnalogInputId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClampedFreelookYAnalogInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClampedFreelookYAnalogInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaInputMkII.ClampedFreelookYAnalogInputId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClampedFreelookMouseXInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClampedFreelookMouseXInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaInputMkII.ClampedFreelookMouseXInputId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClampedFreelookMouseYInputId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClampedFreelookMouseYInputId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaInputMkII.ClampedFreelookMouseYInputId");
		return ptr;
	}

}


