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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxPerfScopeOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxPerfScopeOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxPerfScope.GbxPerfScopeOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E0AE0
	 * 		Name   -> Function GbxPerfScope.GbxPerfScopePerfSampleData.GetMapGPUHotspots
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumSamples                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxPerfScopePerfSampleData::GetMapGPUHotspots(class UObject* WorldContext, int32_t NumSamples, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxPerfScope.GbxPerfScopePerfSampleData.GetMapGPUHotspots");
		
		UGbxPerfScopePerfSampleData_GetMapGPUHotspots_Params params {};
		params.WorldContext = WorldContext;
		params.NumSamples = NumSamples;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxPerfScopePerfSampleData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxPerfScopePerfSampleData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxPerfScope.GbxPerfScopePerfSampleData");
		return ptr;
	}

}


