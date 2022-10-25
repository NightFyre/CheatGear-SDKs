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
	 * 		Name   -> Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedbackForAllAtLocation
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_FeedbackSize                                  Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_FeedbackStrength                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_FeedbackDuration                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     SourceContext                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFeedbackData*                               Feedback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_Feedback_C::STATIC_PerformBasicFeedbackForAllAtLocation(const struct FVector& Location, Enum_FeedbackSize Size, Enum_FeedbackStrength Strength, Enum_FeedbackDuration Duration, class UObject* SourceContext, class UObject* __WorldContext, class UFeedbackData** Feedback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedbackForAllAtLocation");
		
		UFunctionLibrary_Feedback_C_PerformBasicFeedbackForAllAtLocation_Params params {};
		params.Location = Location;
		params.Size = Size;
		params.Strength = Strength;
		params.Duration = Duration;
		params.SourceContext = SourceContext;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Feedback != nullptr)
			*Feedback = params.Feedback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.GetBasicFeedbackForLocation
	 * 		Flags  -> (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_FeedbackStrength                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_FeedbackDuration                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_FeedbackSize                                  Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFeedbackData*                               Feedback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_Feedback_C::STATIC_GetBasicFeedbackForLocation(Enum_FeedbackStrength Strength, Enum_FeedbackDuration Duration, Enum_FeedbackSize Size, class UObject* __WorldContext, class UFeedbackData** Feedback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.GetBasicFeedbackForLocation");
		
		UFunctionLibrary_Feedback_C_GetBasicFeedbackForLocation_Params params {};
		params.Strength = Strength;
		params.Duration = Duration;
		params.Size = Size;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Feedback != nullptr)
			*Feedback = params.Feedback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedbackForAll
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_FeedbackStrength                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_FeedbackDuration                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     SourceContext                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFeedbackData*                               FeedbackData                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_Feedback_C::STATIC_PerformBasicFeedbackForAll(Enum_FeedbackStrength Strength, Enum_FeedbackDuration Duration, class UObject* SourceContext, class UObject* __WorldContext, class UFeedbackData** FeedbackData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedbackForAll");
		
		UFunctionLibrary_Feedback_C_PerformBasicFeedbackForAll_Params params {};
		params.Strength = Strength;
		params.Duration = Duration;
		params.SourceContext = SourceContext;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FeedbackData != nullptr)
			*FeedbackData = params.FeedbackData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedback
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_FeedbackStrength                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_FeedbackDuration                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     SourceContext                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFeedbackData*                               FeedbackData                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_Feedback_C::STATIC_PerformBasicFeedback(class APlayerController* Controller, Enum_FeedbackStrength Strength, Enum_FeedbackDuration Duration, class UObject* SourceContext, class UObject* __WorldContext, class UFeedbackData** FeedbackData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedback");
		
		UFunctionLibrary_Feedback_C_PerformBasicFeedback_Params params {};
		params.Controller = Controller;
		params.Strength = Strength;
		params.Duration = Duration;
		params.SourceContext = SourceContext;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FeedbackData != nullptr)
			*FeedbackData = params.FeedbackData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.GetBasicFeedback
	 * 		Flags  -> (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_FeedbackStrength                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_FeedbackDuration                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFeedbackData*                               FeedbackData                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_Feedback_C::STATIC_GetBasicFeedback(Enum_FeedbackStrength Strength, Enum_FeedbackDuration Duration, class UObject* __WorldContext, class UFeedbackData** FeedbackData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.GetBasicFeedback");
		
		UFunctionLibrary_Feedback_C_GetBasicFeedback_Params params {};
		params.Strength = Strength;
		params.Duration = Duration;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FeedbackData != nullptr)
			*FeedbackData = params.FeedbackData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedbackAtLocation
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_FeedbackSize                                  Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_FeedbackStrength                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Enum_FeedbackDuration                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     SourceContext                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFeedbackData*                               Feedback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_Feedback_C::STATIC_PerformBasicFeedbackAtLocation(class APlayerController* Controller, const struct FVector& Location, Enum_FeedbackSize Size, Enum_FeedbackStrength Strength, Enum_FeedbackDuration Duration, class UObject* SourceContext, class UObject* __WorldContext, class UFeedbackData** Feedback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Feedback.FunctionLibrary_Feedback_C.PerformBasicFeedbackAtLocation");
		
		UFunctionLibrary_Feedback_C_PerformBasicFeedbackAtLocation_Params params {};
		params.Controller = Controller;
		params.Location = Location;
		params.Size = Size;
		params.Strength = Strength;
		params.Duration = Duration;
		params.SourceContext = SourceContext;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Feedback != nullptr)
			*Feedback = params.Feedback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFunctionLibrary_Feedback_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFunctionLibrary_Feedback_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FunctionLibrary_Feedback.FunctionLibrary_Feedback_C");
		return ptr;
	}

}


