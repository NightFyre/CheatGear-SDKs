#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * BlueprintGeneratedClass FunctionLibrary_Feedback.FunctionLibrary_Feedback_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFunctionLibrary_Feedback_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_PerformBasicFeedbackForAllAtLocation(const struct FVector& Location, Enum_FeedbackSize Size, Enum_FeedbackStrength Strength, Enum_FeedbackDuration Duration, class UObject* SourceContext, class UObject* __WorldContext, class UFeedbackData** Feedback);
		void STATIC_GetBasicFeedbackForLocation(Enum_FeedbackStrength Strength, Enum_FeedbackDuration Duration, Enum_FeedbackSize Size, class UObject* __WorldContext, class UFeedbackData** Feedback);
		void STATIC_PerformBasicFeedbackForAll(Enum_FeedbackStrength Strength, Enum_FeedbackDuration Duration, class UObject* SourceContext, class UObject* __WorldContext, class UFeedbackData** FeedbackData);
		void STATIC_PerformBasicFeedback(class APlayerController* Controller, Enum_FeedbackStrength Strength, Enum_FeedbackDuration Duration, class UObject* SourceContext, class UObject* __WorldContext, class UFeedbackData** FeedbackData);
		void STATIC_GetBasicFeedback(Enum_FeedbackStrength Strength, Enum_FeedbackDuration Duration, class UObject* __WorldContext, class UFeedbackData** FeedbackData);
		void STATIC_PerformBasicFeedbackAtLocation(class APlayerController* Controller, const struct FVector& Location, Enum_FeedbackSize Size, Enum_FeedbackStrength Strength, Enum_FeedbackDuration Duration, class UObject* SourceContext, class UObject* __WorldContext, class UFeedbackData** Feedback);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
