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
	 * 		Name   -> Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDetonate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_AIStolenProj_C::AIStolenProj_AttemptDetonate(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDetonate");
		
		UBPI_AIStolenProj_C_AIStolenProj_AttemptDetonate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_GetElementalTypeFromStolenProjectile
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakElementalType                                  StolenProjectileElement                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_AIStolenProj_C::AIStolenProj_GetElementalTypeFromStolenProjectile(EOakElementalType* StolenProjectileElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_GetElementalTypeFromStolenProjectile");
		
		UBPI_AIStolenProj_C_AIStolenProj_GetElementalTypeFromStolenProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StolenProjectileElement != nullptr)
			*StolenProjectileElement = params.StolenProjectileElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptLerpToSocket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SocketToLerpTo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LerpDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_AIStolenProj_C::AIStolenProj_AttemptLerpToSocket(const class FName& SocketToLerpTo, float LerpDuration, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptLerpToSocket");
		
		UBPI_AIStolenProj_C_AIStolenProj_AttemptLerpToSocket_Params params {};
		params.SocketToLerpTo = SocketToLerpTo;
		params.LerpDuration = LerpDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptReturnTo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_AIThrowAtStyle                                ReturnTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        TargetSocket                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxPrediction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AnglePercent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    DirectionOffset                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      SpecifiedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_AIStolenProj_C::AIStolenProj_AttemptReturnTo(Enum_AIThrowAtStyle ReturnTo, const class FName& TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& TargetOffset, class AActor* SpecifiedActor, const struct FVector& WorldLocation, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptReturnTo");
		
		UBPI_AIStolenProj_C_AIStolenProj_AttemptReturnTo_Params params {};
		params.ReturnTo = ReturnTo;
		params.TargetSocket = TargetSocket;
		params.MaxPrediction = MaxPrediction;
		params.Speed = Speed;
		params.AnglePercent = AnglePercent;
		params.DirectionOffset = DirectionOffset;
		params.TargetOffset = TargetOffset;
		params.SpecifiedActor = SpecifiedActor;
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptAttach
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_AIStolenProj_C::AIStolenProj_AttemptAttach(const class FName& SocketName, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptAttach");
		
		UBPI_AIStolenProj_C_AIStolenProj_AttemptAttach_Params params {};
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDestroy
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_AIStolenProj_C::AIStolenProj_AttemptDestroy(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDestroy");
		
		UBPI_AIStolenProj_C_AIStolenProj_AttemptDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDisarm
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_AIStolenProj_C::AIStolenProj_AttemptDisarm(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDisarm");
		
		UBPI_AIStolenProj_C_AIStolenProj_AttemptDisarm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_AIStolenProj_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_AIStolenProj_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_AIStolenProj.BPI_AIStolenProj_C");
		return ptr;
	}

}


