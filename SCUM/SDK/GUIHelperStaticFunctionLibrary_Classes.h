#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGUIHelperStaticFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void ShowErrorDialog(const class FText& Message, class UCanvasPanel* Canvas, class UWidget* widgetToDisable, class UObject* __WorldContext, class UUI_ErrorMessage_C** messageWidget);
		void LinearCoordinatesToString(const struct FVector& Coordinates, class UObject* __WorldContext, class FString* coordinatesString);
		void HealthToString(float health, class UObject* __WorldContext, class FString* healthString);
		void ValueToDescriptionString(const class FString& preLabel, float Value, const class FString& postLabel, class UObject* __WorldContext, class FString* descriptionString);
		void ValueToString(float Value, class UObject* __WorldContext, class FString* valueString);
		void LinearVectorDistanceToString(const struct FVector& Acceleration, class UObject* __WorldContext, class FString* accelerationString);
		void VelocityToString(const struct FVector& Velocity, class UObject* __WorldContext, class FString* velocityString);
		void AccelerationToString(float Acceleration, class UObject* __WorldContext, class FString* accelerationString);
		void StringToDescriptionString(const class FString& preLabel, const class FString& valueString, const class FString& postLabel, class UObject* __WorldContext, class FString* descriptionString);
		void LinearValueToString(float Value, class UObject* __WorldContext, class FString* valueString);
		void CoordinatesToString(const struct FVector& Coordinates, class UObject* __WorldContext, class FString* coordinatesString);
		void VectorToString(const struct FVector& Vector, class UObject* __WorldContext, class FString* vectorString);
		void RotationToString(const struct FRotator& Rotation, class UObject* __WorldContext, class FString* rotationString);
		void LinearValueToDescriptionString(const class FString& preLabel, float Value, const class FString& postLabel, class UObject* __WorldContext, class FString* descriptionString);
		void FloatToStringWithPrecision(float floatNum, int32_t Precision, class UObject* __WorldContext, class FString* floatAsString);
		void EmovementPaceToText(EPrisonerMovementPace movementPace, class UObject* __WorldContext, class FText* movementPaceText);
		void SortSkills(TArray<class USkill*>* skillArrayRef, class UObject* __WorldContext);
		void SkilLevelToSkillPercentage(ESkillLevel Selection, class UObject* __WorldContext, float* MaxValue);
		class FText FloatToTextFormatted(float floatNum, class UObject* __WorldContext);
		void SkilLevelToMaxSkillValue(ESkillLevel Selection, class UObject* __WorldContext, float* MaxValue);
		void SkilLevelToMaxSkillValueText(ESkillLevel Selection, class UObject* __WorldContext, class FText* MaxValue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
