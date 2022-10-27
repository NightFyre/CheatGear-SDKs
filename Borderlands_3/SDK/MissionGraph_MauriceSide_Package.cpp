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
	 * 		Name   -> Function MissionGraph_MauriceSide.MissionGraph_MauriceSide_C.[Saurian Not Saurian]
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMissionGraph_MauriceSide_C::Saurian_Not_Saurian()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_MauriceSide.MissionGraph_MauriceSide_C.[Saurian Not Saurian]");
		
		UMissionGraph_MauriceSide_C_Saurian_Not_Saurian_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MissionGraph_MauriceSide.MissionGraph_MauriceSide_C.ExecuteUbergraph_MissionGraph_MauriceSide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionGraph_MauriceSide_C::ExecuteUbergraph_MissionGraph_MauriceSide(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_MauriceSide.MissionGraph_MauriceSide_C.ExecuteUbergraph_MissionGraph_MauriceSide");
		
		UMissionGraph_MauriceSide_C_ExecuteUbergraph_MissionGraph_MauriceSide_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionGraph_MauriceSide_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionGraph_MauriceSide_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionGraph_MauriceSide.MissionGraph_MauriceSide_C");
		return ptr;
	}

}


