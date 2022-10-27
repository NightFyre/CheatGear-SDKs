/**
 * Name: The_Complex
 * Version: 9349459
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
	 * 		Name   -> PredefinedFunction UChaosClothConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosClothConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosCloth.ChaosClothConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosClothSharedSimConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosClothSharedSimConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosCloth.ChaosClothSharedSimConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosClothingSimulationFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosClothingSimulationFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosCloth.ChaosClothingSimulationFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012E3C80
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetWind
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   Drag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Lift                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AirDensity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WindVelocity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosClothingInteractor::SetWind(const struct FVector2D& Drag, const struct FVector2D& Lift, float AirDensity, const struct FVector& WindVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetWind");
		
		UChaosClothingInteractor_SetWind_Params params {};
		params.Drag = Drag;
		params.Lift = Lift;
		params.AirDensity = AirDensity;
		params.WindVelocity = WindVelocity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012E3B50
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     LinearVelocityScale                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AngularVelocityScale                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FictitiousAngularScale                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosClothingInteractor::SetVelocityScale(const struct FVector& LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale");
		
		UChaosClothingInteractor_SetVelocityScale_Params params {};
		params.LinearVelocityScale = LinearVelocityScale;
		params.AngularVelocityScale = AngularVelocityScale;
		params.FictitiousAngularScale = FictitiousAngularScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012E3A30
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              EdgeStiffness                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BendingStiffness                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AreaStiffness                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosClothingInteractor::SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear");
		
		UChaosClothingInteractor_SetMaterialLinear_Params params {};
		params.EdgeStiffness = EdgeStiffness;
		params.BendingStiffness = BendingStiffness;
		params.AreaStiffness = AreaStiffness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012E3910
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetMaterial
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   EdgeStiffness                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   BendingStiffness                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   AreaStiffness                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosClothingInteractor::SetMaterial(const struct FVector2D& EdgeStiffness, const struct FVector2D& BendingStiffness, const struct FVector2D& AreaStiffness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetMaterial");
		
		UChaosClothingInteractor_SetMaterial_Params params {};
		params.EdgeStiffness = EdgeStiffness;
		params.BendingStiffness = BendingStiffness;
		params.AreaStiffness = AreaStiffness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012E3840
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              TetherStiffness                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TetherScale                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosClothingInteractor::SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear");
		
		UChaosClothingInteractor_SetLongRangeAttachmentLinear_Params params {};
		params.TetherStiffness = TetherStiffness;
		params.TetherScale = TetherScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012E3770
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   TetherStiffness                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   TetherScale                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosClothingInteractor::SetLongRangeAttachment(const struct FVector2D& TetherStiffness, const struct FVector2D& TetherScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment");
		
		UChaosClothingInteractor_SetLongRangeAttachment_Params params {};
		params.TetherStiffness = TetherStiffness;
		params.TetherScale = TetherScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012E3630
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetGravity
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              GravityScale                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsGravityOverridden                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     GravityOverride                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosClothingInteractor::SetGravity(float GravityScale, bool bIsGravityOverridden, const struct FVector& GravityOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetGravity");
		
		UChaosClothingInteractor_SetGravity_Params params {};
		params.GravityScale = GravityScale;
		params.bIsGravityOverridden = bIsGravityOverridden;
		params.GravityOverride = GravityOverride;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012E35B0
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetDamping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DampingCoefficient                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosClothingInteractor::SetDamping(float DampingCoefficient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetDamping");
		
		UChaosClothingInteractor_SetDamping_Params params {};
		params.DampingCoefficient = DampingCoefficient;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012E3440
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetCollision
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              CollisionThickness                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FrictionCoefficient                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseCCD                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SelfCollisionThickness                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosClothingInteractor::SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetCollision");
		
		UChaosClothingInteractor_SetCollision_Params params {};
		params.CollisionThickness = CollisionThickness;
		params.FrictionCoefficient = FrictionCoefficient;
		params.bUseCCD = bUseCCD;
		params.SelfCollisionThickness = SelfCollisionThickness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012E33B0
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetBackstop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosClothingInteractor::SetBackstop(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetBackstop");
		
		UChaosClothingInteractor_SetBackstop_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012E3330
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              AnimDriveStiffness                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosClothingInteractor::SetAnimDriveLinear(float AnimDriveStiffness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear");
		
		UChaosClothingInteractor_SetAnimDriveLinear_Params params {};
		params.AnimDriveStiffness = AnimDriveStiffness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012E3260
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   AnimDriveStiffness                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   AnimDriveDamping                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosClothingInteractor::SetAnimDrive(const struct FVector2D& AnimDriveStiffness, const struct FVector2D& AnimDriveDamping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive");
		
		UChaosClothingInteractor_SetAnimDrive_Params params {};
		params.AnimDriveStiffness = AnimDriveStiffness;
		params.AnimDriveDamping = AnimDriveDamping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012E3130
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DragCoefficient                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LiftCoefficient                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WindVelocity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosClothingInteractor::SetAerodynamics(float DragCoefficient, float LiftCoefficient, const struct FVector& WindVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics");
		
		UChaosClothingInteractor_SetAerodynamics_Params params {};
		params.DragCoefficient = DragCoefficient;
		params.LiftCoefficient = LiftCoefficient;
		params.WindVelocity = WindVelocity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012E3060
	 * 		Name   -> Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bReset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChaosClothingInteractor::ResetAndTeleport(bool bReset, bool bTeleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport");
		
		UChaosClothingInteractor_ResetAndTeleport_Params params {};
		params.bReset = bReset;
		params.bTeleport = bTeleport;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosClothingInteractor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosClothingInteractor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosCloth.ChaosClothingInteractor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaosClothingSimulationInteractor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaosClothingSimulationInteractor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ChaosCloth.ChaosClothingSimulationInteractor");
		return ptr;
	}

}


