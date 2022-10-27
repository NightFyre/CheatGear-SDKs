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
	 * 		RVA    -> 0x031F2FC0
	 * 		Name   -> Function Maths.AngleMaths.CalculateEulerAngle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              FromAngle                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ToAngle                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UAngleMaths::STATIC_CalculateEulerAngle(float FromAngle, float ToAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.AngleMaths.CalculateEulerAngle");
		
		UAngleMaths_CalculateEulerAngle_Params params {};
		params.FromAngle = FromAngle;
		params.ToAngle = ToAngle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F2980
	 * 		Name   -> Function Maths.AngleMaths.AngleMoveTowardsMod180
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Angle                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TargetAngle                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rate                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UAngleMaths::STATIC_AngleMoveTowardsMod180(float Angle, float TargetAngle, float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.AngleMaths.AngleMoveTowardsMod180");
		
		UAngleMaths_AngleMoveTowardsMod180_Params params {};
		params.Angle = Angle;
		params.TargetAngle = TargetAngle;
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F2900
	 * 		Name   -> Function Maths.AngleMaths.AngleMod360
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Angle                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UAngleMaths::STATIC_AngleMod360(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.AngleMaths.AngleMod360");
		
		UAngleMaths_AngleMod360_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F2880
	 * 		Name   -> Function Maths.AngleMaths.AngleMod180
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Angle                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UAngleMaths::STATIC_AngleMod180(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.AngleMaths.AngleMod180");
		
		UAngleMaths_AngleMod180_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F2770
	 * 		Name   -> Function Maths.AngleMaths.AngleLerpShortest
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UAngleMaths::STATIC_AngleLerpShortest(float Start, float End, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.AngleMaths.AngleLerpShortest");
		
		UAngleMaths_AngleLerpShortest_Params params {};
		params.Start = Start;
		params.End = End;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAngleMaths.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAngleMaths::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.AngleMaths");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F33E0
	 * 		Name   -> Function Maths.BuoyancyMaths.CalculateMagnitude
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              InSubmersedVolume                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InFluidDensity                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InGravity                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UBuoyancyMaths::STATIC_CalculateMagnitude(float InSubmersedVolume, float InFluidDensity, float InGravity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.BuoyancyMaths.CalculateMagnitude");
		
		UBuoyancyMaths_CalculateMagnitude_Params params {};
		params.InSubmersedVolume = InSubmersedVolume;
		params.InFluidDensity = InFluidDensity;
		params.InGravity = InGravity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F2E10
	 * 		Name   -> Function Maths.BuoyancyMaths.CalcBlendedProbeCurveBuoyancy
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCurveFloat*                                 PrimaryBuoyancyCurve                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCurveFloat*                                 SecondaryBuoyancyCurve                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCurveFloat*                                 TertiaryBuoyancyCurve                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              UnaryDistUnderwater                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Blend                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBuoyancyBlend                                     BlendType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UBuoyancyMaths::STATIC_CalcBlendedProbeCurveBuoyancy(class UCurveFloat* PrimaryBuoyancyCurve, class UCurveFloat* SecondaryBuoyancyCurve, class UCurveFloat* TertiaryBuoyancyCurve, float UnaryDistUnderwater, float Blend, EBuoyancyBlend BlendType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.BuoyancyMaths.CalcBlendedProbeCurveBuoyancy");
		
		UBuoyancyMaths_CalcBlendedProbeCurveBuoyancy_Params params {};
		params.PrimaryBuoyancyCurve = PrimaryBuoyancyCurve;
		params.SecondaryBuoyancyCurve = SecondaryBuoyancyCurve;
		params.TertiaryBuoyancyCurve = TertiaryBuoyancyCurve;
		params.UnaryDistUnderwater = UnaryDistUnderwater;
		params.Blend = Blend;
		params.BlendType = BlendType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBuoyancyMaths.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuoyancyMaths::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.BuoyancyMaths");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F3640
	 * 		Name   -> Function Maths.CircleMaths.ConvertAngleToCircleSectorIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              AngleInDegrees                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumberOfSectors                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              IgnoredFraction                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UCircleMaths::STATIC_ConvertAngleToCircleSectorIndex(float AngleInDegrees, int32_t NumberOfSectors, float IgnoredFraction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.CircleMaths.ConvertAngleToCircleSectorIndex");
		
		UCircleMaths_ConvertAngleToCircleSectorIndex_Params params {};
		params.AngleInDegrees = AngleInDegrees;
		params.NumberOfSectors = NumberOfSectors;
		params.IgnoredFraction = IgnoredFraction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F2BC0
	 * 		Name   -> Function Maths.CircleMaths.Area
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              InRadius                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UCircleMaths::STATIC_Area(float InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.CircleMaths.Area");
		
		UCircleMaths_Area_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCircleMaths.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCircleMaths::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.CircleMaths");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F4A70
	 * 		Name   -> Function Maths.CurveMaths.GetDistanceSquaredToCurve
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     WorldSpacePos                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USplineComponent*                            Spline                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UCurveMaths::STATIC_GetDistanceSquaredToCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.CurveMaths.GetDistanceSquaredToCurve");
		
		UCurveMaths_GetDistanceSquaredToCurve_Params params {};
		params.WorldSpacePos = WorldSpacePos;
		params.Spline = Spline;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F48E0
	 * 		Name   -> Function Maths.CurveMaths.GetClosestTimeOnCurve
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     WorldSpacePos                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USplineComponent*                            Spline                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UCurveMaths::STATIC_GetClosestTimeOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.CurveMaths.GetClosestTimeOnCurve");
		
		UCurveMaths_GetClosestTimeOnCurve_Params params {};
		params.WorldSpacePos = WorldSpacePos;
		params.Spline = Spline;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F4800
	 * 		Name   -> Function Maths.CurveMaths.GetClosestPositionOnCurve
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     WorldSpacePos                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USplineComponent*                            Spline                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UCurveMaths::STATIC_GetClosestPositionOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.CurveMaths.GetClosestPositionOnCurve");
		
		UCurveMaths_GetClosestPositionOnCurve_Params params {};
		params.WorldSpacePos = WorldSpacePos;
		params.Spline = Spline;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F4730
	 * 		Name   -> Function Maths.CurveMaths.GetClosestPointOnCurve
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     WorldSpacePos                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USplineComponent*                            Spline                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UCurveMaths::STATIC_GetClosestPointOnCurve(const struct FVector& WorldSpacePos, class USplineComponent* Spline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.CurveMaths.GetClosestPointOnCurve");
		
		UCurveMaths_GetClosestPointOnCurve_Params params {};
		params.WorldSpacePos = WorldSpacePos;
		params.Spline = Spline;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F46A0
	 * 		Name   -> Function Maths.CurveMaths.GetCentre
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class USplineComponent*                            Spline                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UCurveMaths::STATIC_GetCentre(class USplineComponent* Spline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.CurveMaths.GetCentre");
		
		UCurveMaths_GetCentre_Params params {};
		params.Spline = Spline;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCurveMaths.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCurveMaths::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.CurveMaths");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F67A0
	 * 		Name   -> Function Maths.Density.Water
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UDensity::STATIC_Water()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.Density.Water");
		
		UDensity_Water_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F61E0
	 * 		Name   -> Function Maths.Density.SeaWater
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UDensity::STATIC_SeaWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.Density.SeaWater");
		
		UDensity_SeaWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F5C50
	 * 		Name   -> Function Maths.Density.Min
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UDensity::STATIC_Min()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.Density.Min");
		
		UDensity_Min_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F5BF0
	 * 		Name   -> Function Maths.Density.Max
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UDensity::STATIC_Max()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.Density.Max");
		
		UDensity_Max_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F5310
	 * 		Name   -> Function Maths.Density.IsValid
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              InValue                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UDensity::STATIC_IsValid(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.Density.IsValid");
		
		UDensity_IsValid_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F2740
	 * 		Name   -> Function Maths.Density.Air
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UDensity::STATIC_Air()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.Density.Air");
		
		UDensity_Air_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDensity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDensity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.Density");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F6210
	 * 		Name   -> Function Maths.DragCoefficients.Sphere
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UDragCoefficients::STATIC_Sphere()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.Sphere");
		
		UDragCoefficients_Sphere_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F5E30
	 * 		Name   -> Function Maths.DragCoefficients.PlanePerpendicularToFlow
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UDragCoefficients::STATIC_PlanePerpendicularToFlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.PlanePerpendicularToFlow");
		
		UDragCoefficients_PlanePerpendicularToFlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F5E00
	 * 		Name   -> Function Maths.DragCoefficients.PlaneParallelToFlow
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UDragCoefficients::STATIC_PlaneParallelToFlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.PlaneParallelToFlow");
		
		UDragCoefficients_PlaneParallelToFlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F5C80
	 * 		Name   -> Function Maths.DragCoefficients.Min
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UDragCoefficients::STATIC_Min()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.Min");
		
		UDragCoefficients_Min_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F5C20
	 * 		Name   -> Function Maths.DragCoefficients.Max
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UDragCoefficients::STATIC_Max()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.Max");
		
		UDragCoefficients_Max_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F5390
	 * 		Name   -> Function Maths.DragCoefficients.IsValid
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UDragCoefficients::STATIC_IsValid(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.IsValid");
		
		UDragCoefficients_IsValid_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F38E0
	 * 		Name   -> Function Maths.DragCoefficients.Cube
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UDragCoefficients::STATIC_Cube()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.DragCoefficients.Cube");
		
		UDragCoefficients_Cube_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDragCoefficients.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDragCoefficients::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.DragCoefficients");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F34F0
	 * 		Name   -> Function Maths.DragMaths.CalculateMagnitude
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              InSurfaceArea                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InSpeedReltaiveToFluid                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InDragCoefficient                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InFluidDensity                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UDragMaths::STATIC_CalculateMagnitude(float InSurfaceArea, float InSpeedReltaiveToFluid, float InDragCoefficient, float InFluidDensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.DragMaths.CalculateMagnitude");
		
		UDragMaths_CalculateMagnitude_Params params {};
		params.InSurfaceArea = InSurfaceArea;
		params.InSpeedReltaiveToFluid = InSpeedReltaiveToFluid;
		params.InDragCoefficient = InDragCoefficient;
		params.InFluidDensity = InFluidDensity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDragMaths.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDragMaths::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.DragMaths");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F69A0
	 * 		Name   -> Function Maths.FloatMaths.WrapToRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Input                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LowerLimit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              UpperLimit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UFloatMaths::STATIC_WrapToRange(float Input, float LowerLimit, float UpperLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.WrapToRange");
		
		UFloatMaths_WrapToRange_Params params {};
		params.Input = Input;
		params.LowerLimit = LowerLimit;
		params.UpperLimit = UpperLimit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F68E0
	 * 		Name   -> Function Maths.FloatMaths.WrapToPositiveRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Input                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              UpperLimit                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UFloatMaths::STATIC_WrapToPositiveRange(float Input, float UpperLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.WrapToPositiveRange");
		
		UFloatMaths_WrapToPositiveRange_Params params {};
		params.Input = Input;
		params.UpperLimit = UpperLimit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F67D0
	 * 		Name   -> Function Maths.FloatMaths.WrapAroundPivot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Input                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Pivot                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Range                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UFloatMaths::STATIC_WrapAroundPivot(float Input, float Pivot, float Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.WrapAroundPivot");
		
		UFloatMaths_WrapAroundPivot_Params params {};
		params.Input = Input;
		params.Pivot = Pivot;
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F5CB0
	 * 		Name   -> Function Maths.FloatMaths.MoveTowards
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              From                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              To                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Speed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UFloatMaths::STATIC_MoveTowards(float From, float To, float Speed, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.MoveTowards");
		
		UFloatMaths_MoveTowards_Params params {};
		params.From = From;
		params.To = To;
		params.Speed = Speed;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F5A20
	 * 		Name   -> Function Maths.FloatMaths.Map
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              ValueToMapFrom                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FromRangeStart                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FromRangeEnd                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ToRangeStart                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ToRangeEnd                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Clamp                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UFloatMaths::STATIC_Map(float ValueToMapFrom, float FromRangeStart, float FromRangeEnd, float ToRangeStart, float ToRangeEnd, bool Clamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.Map");
		
		UFloatMaths_Map_Params params {};
		params.ValueToMapFrom = ValueToMapFrom;
		params.FromRangeStart = FromRangeStart;
		params.FromRangeEnd = FromRangeEnd;
		params.ToRangeStart = ToRangeStart;
		params.ToRangeEnd = ToRangeEnd;
		params.Clamp = Clamp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F4EA0
	 * 		Name   -> Function Maths.FloatMaths.IncrementCounter
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Counter                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Delta                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CounterMax                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UFloatMaths::STATIC_IncrementCounter(float* Counter, float Delta, float CounterMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.IncrementCounter");
		
		UFloatMaths_IncrementCounter_Params params {};
		params.Delta = Delta;
		params.CounterMax = CounterMax;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Counter != nullptr)
			*Counter = params.Counter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F4C10
	 * 		Name   -> Function Maths.FloatMaths.GetShortestSignedDistanceBetweenPointsInWrappedRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              FromValue                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ToValue                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LowerLimit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              UpperLimit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UFloatMaths::STATIC_GetShortestSignedDistanceBetweenPointsInWrappedRange(float FromValue, float ToValue, float LowerLimit, float UpperLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.GetShortestSignedDistanceBetweenPointsInWrappedRange");
		
		UFloatMaths_GetShortestSignedDistanceBetweenPointsInWrappedRange_Params params {};
		params.FromValue = FromValue;
		params.ToValue = ToValue;
		params.LowerLimit = LowerLimit;
		params.UpperLimit = UpperLimit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F3FD0
	 * 		Name   -> Function Maths.FloatMaths.FindMidpointInWrappedRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value1                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value2                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LowerLimit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              UpperLimit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UFloatMaths::STATIC_FindMidpointInWrappedRange(float Value1, float Value2, float LowerLimit, float UpperLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.FindMidpointInWrappedRange");
		
		UFloatMaths_FindMidpointInWrappedRange_Params params {};
		params.Value1 = Value1;
		params.Value2 = Value2;
		params.LowerLimit = LowerLimit;
		params.UpperLimit = UpperLimit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F2D00
	 * 		Name   -> Function Maths.FloatMaths.Bound
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              ValueToBound                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Bound1                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Bound2                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UFloatMaths::STATIC_Bound(float ValueToBound, float Bound1, float Bound2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.FloatMaths.Bound");
		
		UFloatMaths_Bound_Params params {};
		params.ValueToBound = ValueToBound;
		params.Bound1 = Bound1;
		params.Bound2 = Bound2;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFloatMaths.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFloatMaths::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.FloatMaths");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F3A00
	 * 		Name   -> Function Maths.Gravity.Earth
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UGravity::STATIC_Earth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.Gravity.Earth");
		
		UGravity_Earth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGravity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGravity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.Gravity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F4B40
	 * 		Name   -> Function Maths.OrientedPointBlueprintFunctionLibrary.GetPointAsTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FOrientedPoint                              Point                                                      (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	struct FTransform UOrientedPointBlueprintFunctionLibrary::STATIC_GetPointAsTransform(const struct FOrientedPoint& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.OrientedPointBlueprintFunctionLibrary.GetPointAsTransform");
		
		UOrientedPointBlueprintFunctionLibrary_GetPointAsTransform_Params params {};
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrientedPointBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrientedPointBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.OrientedPointBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F4460
	 * 		Name   -> Function Maths.PoissonDiscSampling.GeneratePoissonDiscDistributionAcrossPlane
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InCenter                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FQuat                                       InOrientation                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              InWidth                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InHeight                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InMinDistance                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InRNGSeed                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<struct FVector> UPoissonDiscSampling::STATIC_GeneratePoissonDiscDistributionAcrossPlane(const struct FVector& InCenter, const struct FQuat& InOrientation, float InWidth, float InHeight, float InMinDistance, int32_t InRNGSeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.PoissonDiscSampling.GeneratePoissonDiscDistributionAcrossPlane");
		
		UPoissonDiscSampling_GeneratePoissonDiscDistributionAcrossPlane_Params params {};
		params.InCenter = InCenter;
		params.InOrientation = InOrientation;
		params.InWidth = InWidth;
		params.InHeight = InHeight;
		params.InMinDistance = InMinDistance;
		params.InRNGSeed = InRNGSeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPoissonDiscSampling.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPoissonDiscSampling::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.PoissonDiscSampling");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F5E60
	 * 		Name   -> Function Maths.ProjectileMaths.PredictProjectileFlightTime
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Speed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Gravity                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Pitch                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UProjectileMaths::STATIC_PredictProjectileFlightTime(float Speed, float Gravity, float Pitch, float Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.ProjectileMaths.PredictProjectileFlightTime");
		
		UProjectileMaths_PredictProjectileFlightTime_Params params {};
		params.Speed = Speed;
		params.Gravity = Gravity;
		params.Pitch = Pitch;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F4120
	 * 		Name   -> Function Maths.ProjectileMaths.FindProjectileSpeedModifierToHitTarget
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     From                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Target                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              Pitch                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ProjectileSpeed                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Gravity                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UProjectileMaths::STATIC_FindProjectileSpeedModifierToHitTarget(const struct FVector& From, const struct FVector& Target, float Pitch, float ProjectileSpeed, float Gravity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.ProjectileMaths.FindProjectileSpeedModifierToHitTarget");
		
		UProjectileMaths_FindProjectileSpeedModifierToHitTarget_Params params {};
		params.From = From;
		params.Target = Target;
		params.Pitch = Pitch;
		params.ProjectileSpeed = ProjectileSpeed;
		params.Gravity = Gravity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F3A30
	 * 		Name   -> Function Maths.ProjectileMaths.FindAimDirectionToHitTarget
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    OutAimDirection                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     From                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Target                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              ProjectileSpeed                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Gravity                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PreferHigherAngles                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UProjectileMaths::STATIC_FindAimDirectionToHitTarget(struct FRotator* OutAimDirection, const struct FVector& From, const struct FVector& Target, float ProjectileSpeed, float Gravity, bool PreferHigherAngles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.ProjectileMaths.FindAimDirectionToHitTarget");
		
		UProjectileMaths_FindAimDirectionToHitTarget_Params params {};
		params.From = From;
		params.Target = Target;
		params.ProjectileSpeed = ProjectileSpeed;
		params.Gravity = Gravity;
		params.PreferHigherAngles = PreferHigherAngles;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAimDirection != nullptr)
			*OutAimDirection = params.OutAimDirection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F3140
	 * 		Name   -> Function Maths.ProjectileMaths.CalculateLaunchVelocity
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     OutLaunchVelocty                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutFlightTime                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     From                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Target                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetVelocity                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              ProjectileSpeed                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Gravity                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PreferHigherAngles                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UProjectileMaths::STATIC_CalculateLaunchVelocity(struct FVector* OutLaunchVelocty, float* OutFlightTime, const struct FVector& From, const struct FVector& Target, const struct FVector& TargetVelocity, float ProjectileSpeed, float Gravity, bool PreferHigherAngles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.ProjectileMaths.CalculateLaunchVelocity");
		
		UProjectileMaths_CalculateLaunchVelocity_Params params {};
		params.From = From;
		params.Target = Target;
		params.TargetVelocity = TargetVelocity;
		params.ProjectileSpeed = ProjectileSpeed;
		params.Gravity = Gravity;
		params.PreferHigherAngles = PreferHigherAngles;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLaunchVelocty != nullptr)
			*OutLaunchVelocty = params.OutLaunchVelocty;
		if (OutFlightTime != nullptr)
			*OutFlightTime = params.OutFlightTime;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProjectileMaths.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectileMaths::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.ProjectileMaths");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F62C0
	 * 		Name   -> Function Maths.RotationMaths.TransformAroundArbitraryPivot
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  TargetTransform                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  BaseTransform                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  TransformToApply                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               LockFinalOrientation                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FTransform URotationMaths::STATIC_TransformAroundArbitraryPivot(const struct FTransform& TargetTransform, const struct FTransform& BaseTransform, const struct FTransform& TransformToApply, bool LockFinalOrientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.RotationMaths.TransformAroundArbitraryPivot");
		
		URotationMaths_TransformAroundArbitraryPivot_Params params {};
		params.TargetTransform = TargetTransform;
		params.BaseTransform = BaseTransform;
		params.TransformToApply = TransformToApply;
		params.LockFinalOrientation = LockFinalOrientation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F6140
	 * 		Name   -> Function Maths.RotationMaths.RotatorToQuat
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FQuat URotationMaths::STATIC_RotatorToQuat(const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.RotationMaths.RotatorToQuat");
		
		URotationMaths_RotatorToQuat_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F5FB0
	 * 		Name   -> Function Maths.RotationMaths.RotateDirectionInterpConstantTo
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     CurrentDirectionNormalised                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetDirectionNormalised                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InterpSpeedRadPerSec                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector URotationMaths::STATIC_RotateDirectionInterpConstantTo(const struct FVector& CurrentDirectionNormalised, const struct FVector& TargetDirectionNormalised, float DeltaTime, float InterpSpeedRadPerSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.RotationMaths.RotateDirectionInterpConstantTo");
		
		URotationMaths_RotateDirectionInterpConstantTo_Params params {};
		params.CurrentDirectionNormalised = CurrentDirectionNormalised;
		params.TargetDirectionNormalised = TargetDirectionNormalised;
		params.DeltaTime = DeltaTime;
		params.InterpSpeedRadPerSec = InterpSpeedRadPerSec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F42E0
	 * 		Name   -> Function Maths.RotationMaths.FindRotationAxisAndRadAngleBetweenVectors
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     FromVectorNormalised                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ToVectorNormalised                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutRotationAxis                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutRotationAngleRadians                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URotationMaths::STATIC_FindRotationAxisAndRadAngleBetweenVectors(const struct FVector& FromVectorNormalised, const struct FVector& ToVectorNormalised, struct FVector* OutRotationAxis, float* OutRotationAngleRadians)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.RotationMaths.FindRotationAxisAndRadAngleBetweenVectors");
		
		URotationMaths_FindRotationAxisAndRadAngleBetweenVectors_Params params {};
		params.FromVectorNormalised = FromVectorNormalised;
		params.ToVectorNormalised = ToVectorNormalised;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRotationAxis != nullptr)
			*OutRotationAxis = params.OutRotationAxis;
		if (OutRotationAngleRadians != nullptr)
			*OutRotationAngleRadians = params.OutRotationAngleRadians;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F2A90
	 * 		Name   -> Function Maths.RotationMaths.AreRotatorsTheSameRotation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    Rotator1                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotator2                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              ErrorTolerance                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool URotationMaths::STATIC_AreRotatorsTheSameRotation(const struct FRotator& Rotator1, const struct FRotator& Rotator2, float ErrorTolerance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.RotationMaths.AreRotatorsTheSameRotation");
		
		URotationMaths_AreRotatorsTheSameRotation_Params params {};
		params.Rotator1 = Rotator1;
		params.Rotator2 = Rotator2;
		params.ErrorTolerance = ErrorTolerance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F25A0
	 * 		Name   -> Function Maths.RotationMaths.AdvanceRotationBySpinAndTiltSynced
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    StartRotation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    TargetRotation                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              RotationRateDegrees                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FRotationUpdateResult URotationMaths::STATIC_AdvanceRotationBySpinAndTiltSynced(const struct FRotator& StartRotation, const struct FRotator& TargetRotation, float RotationRateDegrees, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.RotationMaths.AdvanceRotationBySpinAndTiltSynced");
		
		URotationMaths_AdvanceRotationBySpinAndTiltSynced_Params params {};
		params.StartRotation = StartRotation;
		params.TargetRotation = TargetRotation;
		params.RotationRateDegrees = RotationRateDegrees;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URotationMaths.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URotationMaths::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.RotationMaths");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F5240
	 * 		Name   -> Function Maths.ShapeMathsBlueprintLibrary.IsPointOnOrWithinABox
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBoxComponent*                               BoxComponent                                               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldSpaceReferencePoint                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	bool UShapeMathsBlueprintLibrary::STATIC_IsPointOnOrWithinABox(class UBoxComponent* BoxComponent, const struct FVector& WorldSpaceReferencePoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.ShapeMathsBlueprintLibrary.IsPointOnOrWithinABox");
		
		UShapeMathsBlueprintLibrary_IsPointOnOrWithinABox_Params params {};
		params.BoxComponent = BoxComponent;
		params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F3EF0
	 * 		Name   -> Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinASphere
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class USphereComponent*                            SphereComponent                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldSpaceReferencePoint                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector UShapeMathsBlueprintLibrary::STATIC_FindClosestPointWithinASphere(class USphereComponent* SphereComponent, const struct FVector& WorldSpaceReferencePoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinASphere");
		
		UShapeMathsBlueprintLibrary_FindClosestPointWithinASphere_Params params {};
		params.SphereComponent = SphereComponent;
		params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F3E10
	 * 		Name   -> Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACylinder
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UCapsuleComponent*                           CylinderComponent                                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldSpaceReferencePoint                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector UShapeMathsBlueprintLibrary::STATIC_FindClosestPointWithinACylinder(class UCapsuleComponent* CylinderComponent, const struct FVector& WorldSpaceReferencePoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACylinder");
		
		UShapeMathsBlueprintLibrary_FindClosestPointWithinACylinder_Params params {};
		params.CylinderComponent = CylinderComponent;
		params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F3D30
	 * 		Name   -> Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACapsule
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UCapsuleComponent*                           CapsuleComponent                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldSpaceReferencePoint                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector UShapeMathsBlueprintLibrary::STATIC_FindClosestPointWithinACapsule(class UCapsuleComponent* CapsuleComponent, const struct FVector& WorldSpaceReferencePoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinACapsule");
		
		UShapeMathsBlueprintLibrary_FindClosestPointWithinACapsule_Params params {};
		params.CapsuleComponent = CapsuleComponent;
		params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F3C50
	 * 		Name   -> Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinABox
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBoxComponent*                               BoxComponent                                               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldSpaceReferencePoint                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector UShapeMathsBlueprintLibrary::STATIC_FindClosestPointWithinABox(class UBoxComponent* BoxComponent, const struct FVector& WorldSpaceReferencePoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.ShapeMathsBlueprintLibrary.FindClosestPointWithinABox");
		
		UShapeMathsBlueprintLibrary_FindClosestPointWithinABox_Params params {};
		params.BoxComponent = BoxComponent;
		params.WorldSpaceReferencePoint = WorldSpaceReferencePoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShapeMathsBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShapeMathsBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.ShapeMathsBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F6720
	 * 		Name   -> Function Maths.SphereMaths.VolumeFromRadius
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              InRadius                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float USphereMaths::STATIC_VolumeFromRadius(float InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.SphereMaths.VolumeFromRadius");
		
		USphereMaths_VolumeFromRadius_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F6240
	 * 		Name   -> Function Maths.SphereMaths.SurfaceAreaFromRadius
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              InRadius                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float USphereMaths::STATIC_SurfaceAreaFromRadius(float InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.SphereMaths.SurfaceAreaFromRadius");
		
		USphereMaths_SurfaceAreaFromRadius_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USphereMaths.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USphereMaths::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.SphereMaths");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F6660
	 * 		Name   -> Function Maths.SphericalCapMaths.Volume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              InRadius                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InHeight                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float USphericalCapMaths::STATIC_Volume(float InRadius, float InHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.SphericalCapMaths.Volume");
		
		USphericalCapMaths_Volume_Params params {};
		params.InRadius = InRadius;
		params.InHeight = InHeight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F3080
	 * 		Name   -> Function Maths.SphericalCapMaths.CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              InRadius                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InHeight                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float USphericalCapMaths::STATIC_CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid(float InRadius, float InHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.SphericalCapMaths.CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid");
		
		USphericalCapMaths_CalculateGeometricCentroidOffsetRelativeToBoundingSphereCentroid_Params params {};
		params.InRadius = InRadius;
		params.InHeight = InHeight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F2C40
	 * 		Name   -> Function Maths.SphericalCapMaths.BaseRadius
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              InRadius                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InHeight                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float USphericalCapMaths::STATIC_BaseRadius(float InRadius, float InHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.SphericalCapMaths.BaseRadius");
		
		USphericalCapMaths_BaseRadius_Params params {};
		params.InRadius = InRadius;
		params.InHeight = InHeight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USphericalCapMaths.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USphericalCapMaths::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.SphericalCapMaths");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatisticsMaths.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatisticsMaths::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.StatisticsMaths");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F6530
	 * 		Name   -> Function Maths.TimedBufferFunctionLibrary.UpdateInterval
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FTimedBuffer                                TimedBuffer                                                (Parm, OutParm, ReferenceParm)
	 * 		float                                              DeltaTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimedBufferFunctionLibrary::STATIC_UpdateInterval(struct FTimedBuffer* TimedBuffer, float DeltaTime, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.TimedBufferFunctionLibrary.UpdateInterval");
		
		UTimedBufferFunctionLibrary_UpdateInterval_Params params {};
		params.DeltaTime = DeltaTime;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimedBuffer != nullptr)
			*TimedBuffer = params.TimedBuffer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F4D60
	 * 		Name   -> Function Maths.TimedBufferFunctionLibrary.GetValueRange
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTimedBuffer                                TimedBuffer                                                (Parm, OutParm, ReferenceParm)
	 * 		float                                              MinWindowLength                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ValueRange                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UTimedBufferFunctionLibrary::STATIC_GetValueRange(struct FTimedBuffer* TimedBuffer, float MinWindowLength, float* ValueRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.TimedBufferFunctionLibrary.GetValueRange");
		
		UTimedBufferFunctionLibrary_GetValueRange_Params params {};
		params.MinWindowLength = MinWindowLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimedBuffer != nullptr)
			*TimedBuffer = params.TimedBuffer;
		if (ValueRange != nullptr)
			*ValueRange = params.ValueRange;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F3740
	 * 		Name   -> Function Maths.TimedBufferFunctionLibrary.CreateTimedBuffer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              WindowLength                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTimedBuffer UTimedBufferFunctionLibrary::STATIC_CreateTimedBuffer(float WindowLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.TimedBufferFunctionLibrary.CreateTimedBuffer");
		
		UTimedBufferFunctionLibrary_CreateTimedBuffer_Params params {};
		params.WindowLength = WindowLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimedBufferFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimedBufferFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.TimedBufferFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F49B0
	 * 		Name   -> Function Maths.TimeMaths.GetDifference
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDateTime                                   A                                                          (Parm, ZeroConstructor)
	 * 		struct FDateTime                                   B                                                          (Parm, ZeroConstructor)
	 */
	struct FTimespan UTimeMaths::STATIC_GetDifference(const struct FDateTime& A, const struct FDateTime& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.TimeMaths.GetDifference");
		
		UTimeMaths_GetDifference_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeMaths.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeMaths::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.TimeMaths");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F5860
	 * 		Name   -> Function Maths.VectorMaths.LineIntersectsSphere
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     LineStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LineDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     SphereCentre                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              SphereRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ClosestIntersectionPoint                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UVectorMaths::STATIC_LineIntersectsSphere(const struct FVector& LineStart, const struct FVector& LineDir, const struct FVector& SphereCentre, float SphereRadius, struct FVector* ClosestIntersectionPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.VectorMaths.LineIntersectsSphere");
		
		UVectorMaths_LineIntersectsSphere_Params params {};
		params.LineStart = LineStart;
		params.LineDir = LineDir;
		params.SphereCentre = SphereCentre;
		params.SphereRadius = SphereRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestIntersectionPoint != nullptr)
			*ClosestIntersectionPoint = params.ClosestIntersectionPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F5600
	 * 		Name   -> Function Maths.VectorMaths.LineIntersectsCircleWithExitPoint
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector2D                                   LineOrigin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   LineDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   CircleOrigin                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CircleRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   OutClosestIntersectionPoint                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   OutSecondaryIntersectionPoint                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutClosestIntersectionDistance                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutSecondaryIntersectionDistance                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UVectorMaths::STATIC_LineIntersectsCircleWithExitPoint(const struct FVector2D& LineOrigin, const struct FVector2D& LineDir, const struct FVector2D& CircleOrigin, float CircleRadius, struct FVector2D* OutClosestIntersectionPoint, struct FVector2D* OutSecondaryIntersectionPoint, float* OutClosestIntersectionDistance, float* OutSecondaryIntersectionDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.VectorMaths.LineIntersectsCircleWithExitPoint");
		
		UVectorMaths_LineIntersectsCircleWithExitPoint_Params params {};
		params.LineOrigin = LineOrigin;
		params.LineDir = LineDir;
		params.CircleOrigin = CircleOrigin;
		params.CircleRadius = CircleRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutClosestIntersectionPoint != nullptr)
			*OutClosestIntersectionPoint = params.OutClosestIntersectionPoint;
		if (OutSecondaryIntersectionPoint != nullptr)
			*OutSecondaryIntersectionPoint = params.OutSecondaryIntersectionPoint;
		if (OutClosestIntersectionDistance != nullptr)
			*OutClosestIntersectionDistance = params.OutClosestIntersectionDistance;
		if (OutSecondaryIntersectionDistance != nullptr)
			*OutSecondaryIntersectionDistance = params.OutSecondaryIntersectionDistance;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F5410
	 * 		Name   -> Function Maths.VectorMaths.LineIntersectsCircle
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector2D                                   LineOrigin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   LineDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   CircleOrigin                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CircleRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   OutClosestIntersectionPoint                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutIntersectionDistance                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UVectorMaths::STATIC_LineIntersectsCircle(const struct FVector2D& LineOrigin, const struct FVector2D& LineDir, const struct FVector2D& CircleOrigin, float CircleRadius, struct FVector2D* OutClosestIntersectionPoint, float* OutIntersectionDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.VectorMaths.LineIntersectsCircle");
		
		UVectorMaths_LineIntersectsCircle_Params params {};
		params.LineOrigin = LineOrigin;
		params.LineDir = LineDir;
		params.CircleOrigin = CircleOrigin;
		params.CircleRadius = CircleRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutClosestIntersectionPoint != nullptr)
			*OutClosestIntersectionPoint = params.OutClosestIntersectionPoint;
		if (OutIntersectionDistance != nullptr)
			*OutIntersectionDistance = params.OutIntersectionDistance;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F4FB0
	 * 		Name   -> Function Maths.VectorMaths.IntersectLineSegmentWithPlane
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     LineStart                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     LineEnd                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     PlanePos                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     PlaneNormal                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              PlaneThickness                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     IntersectionPos                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NormalisedIntersectionTOnLineSegment                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EPlaneLineIntersectionType UVectorMaths::STATIC_IntersectLineSegmentWithPlane(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlanePos, const struct FVector& PlaneNormal, float PlaneThickness, struct FVector* IntersectionPos, float* NormalisedIntersectionTOnLineSegment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.VectorMaths.IntersectLineSegmentWithPlane");
		
		UVectorMaths_IntersectLineSegmentWithPlane_Params params {};
		params.LineStart = LineStart;
		params.LineEnd = LineEnd;
		params.PlanePos = PlanePos;
		params.PlaneNormal = PlaneNormal;
		params.PlaneThickness = PlaneThickness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IntersectionPos != nullptr)
			*IntersectionPos = params.IntersectionPos;
		if (NormalisedIntersectionTOnLineSegment != nullptr)
			*NormalisedIntersectionTOnLineSegment = params.NormalisedIntersectionTOnLineSegment;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F3910
	 * 		Name   -> Function Maths.VectorMaths.Distance
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     A                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     B                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	float UVectorMaths::STATIC_Distance(const struct FVector& A, const struct FVector& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.VectorMaths.Distance");
		
		UVectorMaths_Distance_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031F3830
	 * 		Name   -> Function Maths.VectorMaths.Cross_Vector2DVector2D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector2D                                   A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UVectorMaths::STATIC_Cross_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Maths.VectorMaths.Cross_Vector2DVector2D");
		
		UVectorMaths_Cross_Vector2DVector2D_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVectorMaths.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVectorMaths::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Maths.VectorMaths");
		return ptr;
	}

}


