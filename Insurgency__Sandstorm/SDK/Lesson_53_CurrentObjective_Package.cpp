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
	 * 		RVA    -> 0x04FDFB60
	 * 		Name   -> Function Lesson_53_CurrentObjective.Lesson_53_CurrentObjective_C.OnPlayerSpawned
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Player__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_53_CurrentObjective_C::OnPlayerSpawned(class AINSSoldier* bpp__Player__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_53_CurrentObjective.Lesson_53_CurrentObjective_C.OnPlayerSpawned");
		
		ULesson_53_CurrentObjective_C_OnPlayerSpawned_Params params {};
		params.bpp__Player__pf = bpp__Player__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FDAAC0
	 * 		Name   -> Function Lesson_53_CurrentObjective.Lesson_53_CurrentObjective_C.BlueprintOnInitialized
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AINSBasePlayerController*                    bpp__NewOwningPlayerController__pf                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AINSPlayerState*                             bpp__NewPlayer__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_53_CurrentObjective_C::BlueprintOnInitialized(class AINSBasePlayerController* bpp__NewOwningPlayerController__pf, class AINSPlayerState* bpp__NewPlayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lesson_53_CurrentObjective.Lesson_53_CurrentObjective_C.BlueprintOnInitialized");
		
		ULesson_53_CurrentObjective_C_BlueprintOnInitialized_Params params {};
		params.bpp__NewOwningPlayerController__pf = bpp__NewOwningPlayerController__pf;
		params.bpp__NewPlayer__pf = bpp__NewPlayer__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction Lesson_53_CurrentObjective.Lesson_53_CurrentObjective_C.OnPlayerEventDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Player__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULesson_53_CurrentObjective_C::OnPlayerEventDelegate__DelegateSignature(class AINSSoldier* bpp__Player__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Lesson_53_CurrentObjective.Lesson_53_CurrentObjective_C.OnPlayerEventDelegate__DelegateSignature");
		
		ULesson_53_CurrentObjective_C_OnPlayerEventDelegate__DelegateSignature_Params params {};
		params.bpp__Player__pf = bpp__Player__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULesson_53_CurrentObjective_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULesson_53_CurrentObjective_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Lesson_53_CurrentObjective.Lesson_53_CurrentObjective_C");
		return ptr;
	}

}


