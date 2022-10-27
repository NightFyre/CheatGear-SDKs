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
	 * 		Name   -> Function TheCurviestCurve.CurveCurviestBlueprintUtils.GetValueFromCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCurveBase*                                  Curve                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UCurveCurviestBlueprintUtils::GetValueFromCurve(class UCurveBase* Curve, const class FName& Name, float InTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheCurviestCurve.CurveCurviestBlueprintUtils.GetValueFromCurve");
		
		UCurveCurviestBlueprintUtils_GetValueFromCurve_Params params {};
		params.Curve = Curve;
		params.Name = Name;
		params.InTime = InTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCurveCurviestBlueprintUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCurveCurviestBlueprintUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheCurviestCurve.CurveCurviestBlueprintUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TheCurviestCurve.CurveCurviest.GetFloatValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UCurveCurviest::GetFloatValue(const class FName& Name, float InTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheCurviestCurve.CurveCurviest.GetFloatValue");
		
		UCurveCurviest_GetFloatValue_Params params {};
		params.Name = Name;
		params.InTime = InTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCurveCurviest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCurveCurviest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TheCurviestCurve.CurveCurviest");
		return ptr;
	}

}


