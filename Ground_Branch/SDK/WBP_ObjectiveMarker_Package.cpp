/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function WBP_ObjectiveMarker.WBP_ObjectiveMarker_C.ParseObjectiveNameForModifier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ObjectiveName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      CleanObjectiveName                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  ModifierSprite                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DisplayStaircaseIcon                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DisplayLevelNumberText                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            LevelNumber                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ModifierSpriteRotation                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ObjectiveMarker_C::ParseObjectiveNameForModifier(const class FString& ObjectiveName, class FString* CleanObjectiveName, class UTexture2D** ModifierSprite, bool* DisplayStaircaseIcon, bool* DisplayLevelNumberText, int32_t* LevelNumber, float* ModifierSpriteRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMarker.WBP_ObjectiveMarker_C.ParseObjectiveNameForModifier");
		
		UWBP_ObjectiveMarker_C_ParseObjectiveNameForModifier_Params params {};
		params.ObjectiveName = ObjectiveName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CleanObjectiveName != nullptr)
			*CleanObjectiveName = params.CleanObjectiveName;
		if (ModifierSprite != nullptr)
			*ModifierSprite = params.ModifierSprite;
		if (DisplayStaircaseIcon != nullptr)
			*DisplayStaircaseIcon = params.DisplayStaircaseIcon;
		if (DisplayLevelNumberText != nullptr)
			*DisplayLevelNumberText = params.DisplayLevelNumberText;
		if (LevelNumber != nullptr)
			*LevelNumber = params.LevelNumber;
		if (ModifierSpriteRotation != nullptr)
			*ModifierSpriteRotation = params.ModifierSpriteRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ObjectiveMarker.WBP_ObjectiveMarker_C.GetBackground_Border
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UWBP_ObjectiveMarker_C::GetBackground_Border()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMarker.WBP_ObjectiveMarker_C.GetBackground_Border");
		
		UWBP_ObjectiveMarker_C_GetBackground_Border_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ObjectiveMarker.WBP_ObjectiveMarker_C.CalcPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   OutCanvasPosition                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ObjectiveMarker_C::CalcPosition(const struct FVector& InLocation, struct FVector2D* OutCanvasPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMarker.WBP_ObjectiveMarker_C.CalcPosition");
		
		UWBP_ObjectiveMarker_C_CalcPosition_Params params {};
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCanvasPosition != nullptr)
			*OutCanvasPosition = params.OutCanvasPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ObjectiveMarker.WBP_ObjectiveMarker_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_ObjectiveMarker_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMarker.WBP_ObjectiveMarker_C.Construct");
		
		UWBP_ObjectiveMarker_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ObjectiveMarker.WBP_ObjectiveMarker_C.ExecuteUbergraph_WBP_ObjectiveMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ObjectiveMarker_C::ExecuteUbergraph_WBP_ObjectiveMarker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMarker.WBP_ObjectiveMarker_C.ExecuteUbergraph_WBP_ObjectiveMarker");
		
		UWBP_ObjectiveMarker_C_ExecuteUbergraph_WBP_ObjectiveMarker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ObjectiveMarker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ObjectiveMarker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ObjectiveMarker.WBP_ObjectiveMarker_C");
		return ptr;
	}

}


