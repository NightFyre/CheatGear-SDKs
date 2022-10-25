/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x050099A0
	 * 		Name   -> Function Tagline_DesoyedFuelTruck.Tagline_DesoyedFuelTruck_C.On Objective Destroyed
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AObjectiveDestructible*                      bpp__Objective__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      bpp__OldOwners__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      bpp__NewOwners__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AINSPlayerState*>                     bpp__Attackers__pf__const                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTagline_DesoyedFuelTruck_C::On_Objective_Destroyed(class AObjectiveDestructible* bpp__Objective__pf, unsigned char bpp__OldOwners__pf, unsigned char bpp__NewOwners__pf, TArray<class AINSPlayerState*> bpp__Attackers__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tagline_DesoyedFuelTruck.Tagline_DesoyedFuelTruck_C.On Objective Destroyed");
		
		UTagline_DesoyedFuelTruck_C_On_Objective_Destroyed_Params params {};
		params.bpp__Objective__pf = bpp__Objective__pf;
		params.bpp__OldOwners__pf = bpp__OldOwners__pf;
		params.bpp__NewOwners__pf = bpp__NewOwners__pf;
		params.bpp__Attackers__pf__const = bpp__Attackers__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDFBF0
	 * 		Name   -> Function Tagline_DesoyedFuelTruck.Tagline_DesoyedFuelTruck_C.BlueprintInit
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AINSGameMode*                                bpp__GameMode__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTagline_DesoyedFuelTruck_C::BlueprintInit(class AINSGameMode* bpp__GameMode__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tagline_DesoyedFuelTruck.Tagline_DesoyedFuelTruck_C.BlueprintInit");
		
		UTagline_DesoyedFuelTruck_C_BlueprintInit_Params params {};
		params.bpp__GameMode__pf = bpp__GameMode__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction Tagline_DesoyedFuelTruck.Tagline_DesoyedFuelTruck_C.ObjectiveDestroyedEventDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		class AObjectiveDestructible*                      bpp__Objective__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      bpp__OldOwners__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      bpp__NewOwners__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AINSPlayerState*>                     bpp__Attackers__pf                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTagline_DesoyedFuelTruck_C::ObjectiveDestroyedEventDelegate__DelegateSignature(class AObjectiveDestructible* bpp__Objective__pf, unsigned char bpp__OldOwners__pf, unsigned char bpp__NewOwners__pf, TArray<class AINSPlayerState*> bpp__Attackers__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Tagline_DesoyedFuelTruck.Tagline_DesoyedFuelTruck_C.ObjectiveDestroyedEventDelegate__DelegateSignature");
		
		UTagline_DesoyedFuelTruck_C_ObjectiveDestroyedEventDelegate__DelegateSignature_Params params {};
		params.bpp__Objective__pf = bpp__Objective__pf;
		params.bpp__OldOwners__pf = bpp__OldOwners__pf;
		params.bpp__NewOwners__pf = bpp__NewOwners__pf;
		params.bpp__Attackers__pf = bpp__Attackers__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTagline_DesoyedFuelTruck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTagline_DesoyedFuelTruck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Tagline_DesoyedFuelTruck.Tagline_DesoyedFuelTruck_C");
		return ptr;
	}

}


