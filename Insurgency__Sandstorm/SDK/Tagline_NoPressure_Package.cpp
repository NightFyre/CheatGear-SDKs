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
	 * 		RVA    -> 0x04FDAC20
	 * 		Name   -> Function Tagline_NoPressure.Tagline_NoPressure_C.OnHeroCapture
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSPlayerState*                             bpp__HeroPlayer__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTagline_NoPressure_C::OnHeroCapture(class AINSPlayerState* bpp__HeroPlayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tagline_NoPressure.Tagline_NoPressure_C.OnHeroCapture");
		
		UTagline_NoPressure_C_OnHeroCapture_Params params {};
		params.bpp__HeroPlayer__pf = bpp__HeroPlayer__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDFBF0
	 * 		Name   -> Function Tagline_NoPressure.Tagline_NoPressure_C.BlueprintInit
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AINSGameMode*                                bpp__GameMode__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTagline_NoPressure_C::BlueprintInit(class AINSGameMode* bpp__GameMode__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tagline_NoPressure.Tagline_NoPressure_C.BlueprintInit");
		
		UTagline_NoPressure_C_BlueprintInit_Params params {};
		params.bpp__GameMode__pf = bpp__GameMode__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction Tagline_NoPressure.Tagline_NoPressure_C.OnHeroCaptureDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class AINSPlayerState*                             bpp__HeroPlayer__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTagline_NoPressure_C::OnHeroCaptureDelegate__DelegateSignature(class AINSPlayerState* bpp__HeroPlayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Tagline_NoPressure.Tagline_NoPressure_C.OnHeroCaptureDelegate__DelegateSignature");
		
		UTagline_NoPressure_C_OnHeroCaptureDelegate__DelegateSignature_Params params {};
		params.bpp__HeroPlayer__pf = bpp__HeroPlayer__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTagline_NoPressure_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTagline_NoPressure_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Tagline_NoPressure.Tagline_NoPressure_C");
		return ptr;
	}

}


