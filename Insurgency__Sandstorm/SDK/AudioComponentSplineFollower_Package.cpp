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
	 * 		RVA    -> 0x04DB3EA0
	 * 		Name   -> Function AudioComponentSplineFollower.AudioComponentSplineFollower_C.UserConstructionScript
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void AAudioComponentSplineFollower_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioComponentSplineFollower.AudioComponentSplineFollower_C.UserConstructionScript");
		
		AAudioComponentSplineFollower_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DE8B10
	 * 		Name   -> Function AudioComponentSplineFollower.AudioComponentSplineFollower_C.ReceiveTick
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		float                                              bpp__DeltaSeconds__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAudioComponentSplineFollower_C::ReceiveTick(float bpp__DeltaSeconds__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioComponentSplineFollower.AudioComponentSplineFollower_C.ReceiveTick");
		
		AAudioComponentSplineFollower_C_ReceiveTick_Params params {};
		params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3DC0
	 * 		Name   -> Function AudioComponentSplineFollower.AudioComponentSplineFollower_C.ReceiveBeginPlay
	 * 		Flags  -> (Native, Event, Public)
	 */
	void AAudioComponentSplineFollower_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioComponentSplineFollower.AudioComponentSplineFollower_C.ReceiveBeginPlay");
		
		AAudioComponentSplineFollower_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAudioComponentSplineFollower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAudioComponentSplineFollower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass AudioComponentSplineFollower.AudioComponentSplineFollower_C");
		return ptr;
	}

}


