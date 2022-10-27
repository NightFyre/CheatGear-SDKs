/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ShowErrorDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UCanvasPanel*                                Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     widgetToDisable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_ErrorMessage_C*                          messageWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::ShowErrorDialog(const class FText& Message, class UCanvasPanel* Canvas, class UWidget* widgetToDisable, class UObject* __WorldContext, class UUI_ErrorMessage_C** messageWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ShowErrorDialog");
		
		UGUIHelperStaticFunctionLibrary_C_ShowErrorDialog_Params params {};
		params.Message = Message;
		params.Canvas = Canvas;
		params.widgetToDisable = widgetToDisable;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (messageWidget != nullptr)
			*messageWidget = params.messageWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearCoordinatesToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Coordinates                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      coordinatesString                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::LinearCoordinatesToString(const struct FVector& Coordinates, class UObject* __WorldContext, class FString* coordinatesString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearCoordinatesToString");
		
		UGUIHelperStaticFunctionLibrary_C_LinearCoordinatesToString_Params params {};
		params.Coordinates = Coordinates;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (coordinatesString != nullptr)
			*coordinatesString = params.coordinatesString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.HealthToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      healthString                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::HealthToString(float health, class UObject* __WorldContext, class FString* healthString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.HealthToString");
		
		UGUIHelperStaticFunctionLibrary_C_HealthToString_Params params {};
		params.health = health;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (healthString != nullptr)
			*healthString = params.healthString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ValueToDescriptionString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      preLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      postLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      descriptionString                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::ValueToDescriptionString(const class FString& preLabel, float Value, const class FString& postLabel, class UObject* __WorldContext, class FString* descriptionString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ValueToDescriptionString");
		
		UGUIHelperStaticFunctionLibrary_C_ValueToDescriptionString_Params params {};
		params.preLabel = preLabel;
		params.Value = Value;
		params.postLabel = postLabel;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (descriptionString != nullptr)
			*descriptionString = params.descriptionString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ValueToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      valueString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::ValueToString(float Value, class UObject* __WorldContext, class FString* valueString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ValueToString");
		
		UGUIHelperStaticFunctionLibrary_C_ValueToString_Params params {};
		params.Value = Value;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (valueString != nullptr)
			*valueString = params.valueString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearVectorDistanceToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Acceleration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      accelerationString                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::LinearVectorDistanceToString(const struct FVector& Acceleration, class UObject* __WorldContext, class FString* accelerationString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearVectorDistanceToString");
		
		UGUIHelperStaticFunctionLibrary_C_LinearVectorDistanceToString_Params params {};
		params.Acceleration = Acceleration;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (accelerationString != nullptr)
			*accelerationString = params.accelerationString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.VelocityToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      velocityString                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::VelocityToString(const struct FVector& Velocity, class UObject* __WorldContext, class FString* velocityString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.VelocityToString");
		
		UGUIHelperStaticFunctionLibrary_C_VelocityToString_Params params {};
		params.Velocity = Velocity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (velocityString != nullptr)
			*velocityString = params.velocityString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.AccelerationToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Acceleration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      accelerationString                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::AccelerationToString(float Acceleration, class UObject* __WorldContext, class FString* accelerationString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.AccelerationToString");
		
		UGUIHelperStaticFunctionLibrary_C_AccelerationToString_Params params {};
		params.Acceleration = Acceleration;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (accelerationString != nullptr)
			*accelerationString = params.accelerationString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.StringToDescriptionString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      preLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      valueString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      postLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      descriptionString                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::StringToDescriptionString(const class FString& preLabel, const class FString& valueString, const class FString& postLabel, class UObject* __WorldContext, class FString* descriptionString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.StringToDescriptionString");
		
		UGUIHelperStaticFunctionLibrary_C_StringToDescriptionString_Params params {};
		params.preLabel = preLabel;
		params.valueString = valueString;
		params.postLabel = postLabel;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (descriptionString != nullptr)
			*descriptionString = params.descriptionString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearValueToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      valueString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::LinearValueToString(float Value, class UObject* __WorldContext, class FString* valueString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearValueToString");
		
		UGUIHelperStaticFunctionLibrary_C_LinearValueToString_Params params {};
		params.Value = Value;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (valueString != nullptr)
			*valueString = params.valueString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.CoordinatesToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Coordinates                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      coordinatesString                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::CoordinatesToString(const struct FVector& Coordinates, class UObject* __WorldContext, class FString* coordinatesString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.CoordinatesToString");
		
		UGUIHelperStaticFunctionLibrary_C_CoordinatesToString_Params params {};
		params.Coordinates = Coordinates;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (coordinatesString != nullptr)
			*coordinatesString = params.coordinatesString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.VectorToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Vector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      vectorString                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::VectorToString(const struct FVector& Vector, class UObject* __WorldContext, class FString* vectorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.VectorToString");
		
		UGUIHelperStaticFunctionLibrary_C_VectorToString_Params params {};
		params.Vector = Vector;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (vectorString != nullptr)
			*vectorString = params.vectorString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.RotationToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      rotationString                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::RotationToString(const struct FRotator& Rotation, class UObject* __WorldContext, class FString* rotationString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.RotationToString");
		
		UGUIHelperStaticFunctionLibrary_C_RotationToString_Params params {};
		params.Rotation = Rotation;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (rotationString != nullptr)
			*rotationString = params.rotationString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearValueToDescriptionString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      preLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      postLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      descriptionString                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::LinearValueToDescriptionString(const class FString& preLabel, float Value, const class FString& postLabel, class UObject* __WorldContext, class FString* descriptionString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearValueToDescriptionString");
		
		UGUIHelperStaticFunctionLibrary_C_LinearValueToDescriptionString_Params params {};
		params.preLabel = preLabel;
		params.Value = Value;
		params.postLabel = postLabel;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (descriptionString != nullptr)
			*descriptionString = params.descriptionString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.FloatToStringWithPrecision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              floatNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Precision                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      floatAsString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::FloatToStringWithPrecision(float floatNum, int32_t Precision, class UObject* __WorldContext, class FString* floatAsString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.FloatToStringWithPrecision");
		
		UGUIHelperStaticFunctionLibrary_C_FloatToStringWithPrecision_Params params {};
		params.floatNum = floatNum;
		params.Precision = Precision;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (floatAsString != nullptr)
			*floatAsString = params.floatAsString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.EmovementPaceToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPrisonerMovementPace                              movementPace                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        movementPaceText                                           (Parm, OutParm)
	 */
	void UGUIHelperStaticFunctionLibrary_C::EmovementPaceToText(EPrisonerMovementPace movementPace, class UObject* __WorldContext, class FText* movementPaceText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.EmovementPaceToText");
		
		UGUIHelperStaticFunctionLibrary_C_EmovementPaceToText_Params params {};
		params.movementPace = movementPace;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (movementPaceText != nullptr)
			*movementPaceText = params.movementPaceText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SortSkills
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkill*>                              skillArrayRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::SortSkills(TArray<class USkill*>* skillArrayRef, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SortSkills");
		
		UGUIHelperStaticFunctionLibrary_C_SortSkills_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (skillArrayRef != nullptr)
			*skillArrayRef = params.skillArrayRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToSkillPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillLevel                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::SkilLevelToSkillPercentage(ESkillLevel Selection, class UObject* __WorldContext, float* MaxValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToSkillPercentage");
		
		UGUIHelperStaticFunctionLibrary_C_SkilLevelToSkillPercentage_Params params {};
		params.Selection = Selection;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxValue != nullptr)
			*MaxValue = params.MaxValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.FloatToTextFormatted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              floatNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UGUIHelperStaticFunctionLibrary_C::FloatToTextFormatted(float floatNum, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.FloatToTextFormatted");
		
		UGUIHelperStaticFunctionLibrary_C_FloatToTextFormatted_Params params {};
		params.floatNum = floatNum;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToMaxSkillValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillLevel                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGUIHelperStaticFunctionLibrary_C::SkilLevelToMaxSkillValue(ESkillLevel Selection, class UObject* __WorldContext, float* MaxValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToMaxSkillValue");
		
		UGUIHelperStaticFunctionLibrary_C_SkilLevelToMaxSkillValue_Params params {};
		params.Selection = Selection;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxValue != nullptr)
			*MaxValue = params.MaxValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToMaxSkillValueText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillLevel                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        MaxValue                                                   (Parm, OutParm)
	 */
	void UGUIHelperStaticFunctionLibrary_C::SkilLevelToMaxSkillValueText(ESkillLevel Selection, class UObject* __WorldContext, class FText* MaxValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToMaxSkillValueText");
		
		UGUIHelperStaticFunctionLibrary_C_SkilLevelToMaxSkillValueText_Params params {};
		params.Selection = Selection;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxValue != nullptr)
			*MaxValue = params.MaxValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGUIHelperStaticFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGUIHelperStaticFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C");
		return ptr;
	}

}


