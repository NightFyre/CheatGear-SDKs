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
	 * 		RVA    -> 0x05011100
	 * 		Name   -> Function Tagline_TenaciousD.Tagline_TenaciousD_C.OnRoundOver
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ERoundConclusion                                   bpp__RoundEndReason__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      bpp__WinningTeam__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTagline_TenaciousD_C::OnRoundOver(ERoundConclusion bpp__RoundEndReason__pf, unsigned char bpp__WinningTeam__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tagline_TenaciousD.Tagline_TenaciousD_C.OnRoundOver");
		
		UTagline_TenaciousD_C_OnRoundOver_Params params {};
		params.bpp__RoundEndReason__pf = bpp__RoundEndReason__pf;
		params.bpp__WinningTeam__pf = bpp__WinningTeam__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050110E0
	 * 		Name   -> Function Tagline_TenaciousD.Tagline_TenaciousD_C.OnLastStand
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UTagline_TenaciousD_C::OnLastStand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tagline_TenaciousD.Tagline_TenaciousD_C.OnLastStand");
		
		UTagline_TenaciousD_C_OnLastStand_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F35FD0
	 * 		Name   -> Function Tagline_TenaciousD.Tagline_TenaciousD_C.BlueprintOnRoundReset
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UTagline_TenaciousD_C::BlueprintOnRoundReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tagline_TenaciousD.Tagline_TenaciousD_C.BlueprintOnRoundReset");
		
		UTagline_TenaciousD_C_BlueprintOnRoundReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F95A30
	 * 		Name   -> Function Tagline_TenaciousD.Tagline_TenaciousD_C.BlueprintInit
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AINSGameMode*                                bpp__GameMode__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTagline_TenaciousD_C::BlueprintInit(class AINSGameMode* bpp__GameMode__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tagline_TenaciousD.Tagline_TenaciousD_C.BlueprintInit");
		
		UTagline_TenaciousD_C_BlueprintInit_Params params {};
		params.bpp__GameMode__pf = bpp__GameMode__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction Tagline_TenaciousD.Tagline_TenaciousD_C.OnRoundOverDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		ERoundConclusion                                   bpp__RoundEndReason__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      bpp__WinningTeam__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTagline_TenaciousD_C::OnRoundOverDelegate__DelegateSignature(ERoundConclusion bpp__RoundEndReason__pf, unsigned char bpp__WinningTeam__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Tagline_TenaciousD.Tagline_TenaciousD_C.OnRoundOverDelegate__DelegateSignature");
		
		UTagline_TenaciousD_C_OnRoundOverDelegate__DelegateSignature_Params params {};
		params.bpp__RoundEndReason__pf = bpp__RoundEndReason__pf;
		params.bpp__WinningTeam__pf = bpp__WinningTeam__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction Tagline_TenaciousD.Tagline_TenaciousD_C.OnLastStandDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void UTagline_TenaciousD_C::OnLastStandDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Tagline_TenaciousD.Tagline_TenaciousD_C.OnLastStandDelegate__DelegateSignature");
		
		UTagline_TenaciousD_C_OnLastStandDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTagline_TenaciousD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTagline_TenaciousD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Tagline_TenaciousD.Tagline_TenaciousD_C");
		return ptr;
	}

}


