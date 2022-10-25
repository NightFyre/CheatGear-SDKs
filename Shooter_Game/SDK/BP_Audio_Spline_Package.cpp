/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * 		Name   -> Function BP_Audio_Spline.BP_Audio_Spline_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Audio_Spline_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_Spline.BP_Audio_Spline_C.ReceiveBeginPlay");
		
		ABP_Audio_Spline_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Audio_Spline.BP_Audio_Spline_C.Find Closest Point
	 * 		Flags  -> ()
	 */
	void ABP_Audio_Spline_C::Find_Closest_Point()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_Spline.BP_Audio_Spline_C.Find Closest Point");
		
		ABP_Audio_Spline_C_Find_Closest_Point_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Audio_Spline.BP_Audio_Spline_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Audio_Spline_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_Spline.BP_Audio_Spline_C.ReceiveTick");
		
		ABP_Audio_Spline_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Audio_Spline.BP_Audio_Spline_C.ExecuteUbergraph_BP_Audio_Spline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Audio_Spline_C::ExecuteUbergraph_BP_Audio_Spline(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_Spline.BP_Audio_Spline_C.ExecuteUbergraph_BP_Audio_Spline");
		
		ABP_Audio_Spline_C_ExecuteUbergraph_BP_Audio_Spline_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Audio_Spline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Audio_Spline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Audio_Spline.BP_Audio_Spline_C");
		return ptr;
	}

}


