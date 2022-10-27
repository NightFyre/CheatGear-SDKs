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
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_GetType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_PetLoader_Variations                          LoaderType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PetLoader_C::PetLoader_GetType(Enum_PetLoader_Variations* LoaderType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_GetType");
		
		UBPI_PetLoader_C_PetLoader_GetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LoaderType != nullptr)
			*LoaderType = params.LoaderType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_SetImmuneToPhaselock
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsImmune                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PetLoader_C::PetLoader_SetImmuneToPhaselock(bool bIsImmune)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_SetImmuneToPhaselock");
		
		UBPI_PetLoader_C_PetLoader_SetImmuneToPhaselock_Params params {};
		params.bIsImmune = bIsImmune;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StartLaserCharge
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoader_StartLaserCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StartLaserCharge");
		
		UBPI_PetLoader_C_PetLoader_StartLaserCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ShieldHit
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoaderRIOT_ShieldHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ShieldHit");
		
		UBPI_PetLoader_C_PetLoaderRIOT_ShieldHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_IsUnboxSpawning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsUnboxing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PetLoader_C::PetLoader_IsUnboxSpawning(bool IsUnboxing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_IsUnboxSpawning");
		
		UBPI_PetLoader_C_PetLoader_IsUnboxSpawning_Params params {};
		params.IsUnboxing = IsUnboxing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderBadass_AnticipateLaserBall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoaderBadass_AnticipateLaserBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderBadass_AnticipateLaserBall");
		
		UBPI_PetLoader_C_PetLoaderBadass_AnticipateLaserBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderBadass_ThrowLaserBall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoaderBadass_ThrowLaserBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderBadass_ThrowLaserBall");
		
		UBPI_PetLoader_C_PetLoaderBadass_ThrowLaserBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_ToggleHandGrip
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PetLoader_C::PetLoader_ToggleHandGrip(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_ToggleHandGrip");
		
		UBPI_PetLoader_C_PetLoader_ToggleHandGrip_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_isSpawningSurveyor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSpawningSurveyor                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PetLoader_C::PetLoader_isSpawningSurveyor(bool* IsSpawningSurveyor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_isSpawningSurveyor");
		
		UBPI_PetLoader_C_PetLoader_isSpawningSurveyor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSpawningSurveyor != nullptr)
			*IsSpawningSurveyor = params.IsSpawningSurveyor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StopSpawningSurveyor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FinishedWithSuccess                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PetLoader_C::PetLoader_StopSpawningSurveyor(bool FinishedWithSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StopSpawningSurveyor");
		
		UBPI_PetLoader_C_PetLoader_StopSpawningSurveyor_Params params {};
		params.FinishedWithSuccess = FinishedWithSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StartSpawningSurveyor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoader_StartSpawningSurveyor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StartSpawningSurveyor");
		
		UBPI_PetLoader_C_PetLoader_StartSpawningSurveyor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderBadass_LaserGround
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoaderBadass_LaserGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderBadass_LaserGround");
		
		UBPI_PetLoader_C_PetLoaderBadass_LaserGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ChargeEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoaderRIOT_ChargeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ChargeEnd");
		
		UBPI_PetLoader_C_PetLoaderRIOT_ChargeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ChargeStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoaderRIOT_ChargeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ChargeStart");
		
		UBPI_PetLoader_C_PetLoaderRIOT_ChargeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRPG_ShootMissile
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoaderRPG_ShootMissile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRPG_ShootMissile");
		
		UBPI_PetLoader_C_PetLoaderRPG_ShootMissile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRPG_isMissileBarrageDone
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isDone                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PetLoader_C::PetLoaderRPG_isMissileBarrageDone(bool* isDone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRPG_isMissileBarrageDone");
		
		UBPI_PetLoader_C_PetLoaderRPG_isMissileBarrageDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isDone != nullptr)
			*isDone = params.isDone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ShieldDestroyed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoaderRIOT_ShieldDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ShieldDestroyed");
		
		UBPI_PetLoader_C_PetLoaderRIOT_ShieldDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ThrowShield
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoaderRIOT_ThrowShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderRIOT_ThrowShield");
		
		UBPI_PetLoader_C_PetLoaderRIOT_ThrowShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_SetProjectedIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_PetLoader_ProjectedIcons                      Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PetLoader_C::PetLoader_SetProjectedIcon(Enum_PetLoader_ProjectedIcons Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_SetProjectedIcon");
		
		UBPI_PetLoader_C_PetLoader_SetProjectedIcon_Params params {};
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderEXP_SelfDestruct
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoaderEXP_SelfDestruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderEXP_SelfDestruct");
		
		UBPI_PetLoader_C_PetLoaderEXP_SelfDestruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderEXP_Explode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoaderEXP_Explode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoaderEXP_Explode");
		
		UBPI_PetLoader_C_PetLoaderEXP_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StartLaser
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoader_StartLaser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_StartLaser");
		
		UBPI_PetLoader_C_PetLoader_StartLaser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_EnterCrawlingState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoader_EnterCrawlingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_EnterCrawlingState");
		
		UBPI_PetLoader_C_PetLoader_EnterCrawlingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_JumpEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoader_JumpEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_JumpEnd");
		
		UBPI_PetLoader_C_PetLoader_JumpEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_JumpStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_PetLoader_C::PetLoader_JumpStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PetLoader.BPI_PetLoader_C.PetLoader_JumpStart");
		
		UBPI_PetLoader_C_PetLoader_JumpStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_PetLoader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_PetLoader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PetLoader.BPI_PetLoader_C");
		return ptr;
	}

}


