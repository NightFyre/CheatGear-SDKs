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
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.OnFireStartTester__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void ABP_VH_TechnicalLarge_DShK_C::OnFireStartTester__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.OnFireStartTester__DelegateSignature");
		
		ABP_VH_TechnicalLarge_DShK_C_OnFireStartTester__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.OnFireEndTester__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void ABP_VH_TechnicalLarge_DShK_C::OnFireEndTester__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.OnFireEndTester__DelegateSignature");
		
		ABP_VH_TechnicalLarge_DShK_C_OnFireEndTester__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F23890
	 * 		Name   -> Function BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.ReceiveEndPlay
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		EEndPlayReason                                     bpp__EndPlayReason__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_VH_TechnicalLarge_DShK_C::ReceiveEndPlay(EEndPlayReason bpp__EndPlayReason__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.ReceiveEndPlay");
		
		ABP_VH_TechnicalLarge_DShK_C_ReceiveEndPlay_Params params {};
		params.bpp__EndPlayReason__pf = bpp__EndPlayReason__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB51A0
	 * 		Name   -> Function BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.ReceiveBeginPlay
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_VH_TechnicalLarge_DShK_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.ReceiveBeginPlay");
		
		ABP_VH_TechnicalLarge_DShK_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E20840
	 * 		Name   -> Function BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AActor*                                      bpp__OtherActor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_VH_TechnicalLarge_DShK_C::ReceiveActorBeginOverlap(class AActor* bpp__OtherActor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.ReceiveActorBeginOverlap");
		
		ABP_VH_TechnicalLarge_DShK_C_ReceiveActorBeginOverlap_Params params {};
		params.bpp__OtherActor__pf = bpp__OtherActor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4CE0
	 * 		Name   -> Function BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.InitMountedGunVisualLogic
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_VH_TechnicalLarge_DShK_C::InitMountedGunVisualLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.InitMountedGunVisualLogic");
		
		ABP_VH_TechnicalLarge_DShK_C_InitMountedGunVisualLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB52E0
	 * 		Name   -> Function BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.InitMountedGunGameLogic
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_VH_TechnicalLarge_DShK_C::InitMountedGunGameLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.InitMountedGunGameLogic");
		
		ABP_VH_TechnicalLarge_DShK_C_InitMountedGunGameLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4D60
	 * 		Name   -> Function BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.BndEvt__TurretGunner_K2Node_ComponentBoundEvent_1_VehicleSeat_EventDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 */
	void ABP_VH_TechnicalLarge_DShK_C::BndEvt__TurretGunner_K2Node_ComponentBoundEvent_1_VehicleSeat_EventDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.BndEvt__TurretGunner_K2Node_ComponentBoundEvent_1_VehicleSeat_EventDelegate__DelegateSignature");
		
		ABP_VH_TechnicalLarge_DShK_C_BndEvt__TurretGunner_K2Node_ComponentBoundEvent_1_VehicleSeat_EventDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5400
	 * 		Name   -> Function BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_Engine_BlowUpDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 */
	void ABP_VH_TechnicalLarge_DShK_C::BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_Engine_BlowUpDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_Engine_BlowUpDelegate__DelegateSignature");
		
		ABP_VH_TechnicalLarge_DShK_C_BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_Engine_BlowUpDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_VH_TechnicalLarge_DShK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VH_TechnicalLarge_DShK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_VH_TechnicalLarge_DShK.BP_VH_TechnicalLarge_DShK_C");
		return ptr;
	}

}


