/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UOceanCrawlerAnimationData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOceanCrawlerAnimationData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OceanCrawlersAnimation.OceanCrawlerAnimationData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0145C220
	 * 		Name   -> Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.ClearActiveAttack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UOceanCrawlerAnimationInstance::ClearActiveAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.ClearActiveAttack");
		
		UOceanCrawlerAnimationInstance_ClearActiveAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0145C200
	 * 		Name   -> Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.BeginNewAttack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UOceanCrawlerAnimationInstance::BeginNewAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.BeginNewAttack");
		
		UOceanCrawlerAnimationInstance_BeginNewAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOceanCrawlerAnimationInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOceanCrawlerAnimationInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OceanCrawlersAnimation.OceanCrawlerAnimationInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOceanCrawlerAnimationServerData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOceanCrawlerAnimationServerData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OceanCrawlersAnimation.OceanCrawlerAnimationServerData");
		return ptr;
	}

}


