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
	 * 		Name   -> PredefinedFunction UBTTask_BroadcastOceanCrawlerAbilityAudioEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_BroadcastOceanCrawlerAbilityAudioEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OceanCrawlers.BTTask_BroadcastOceanCrawlerAbilityAudioEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOceanCrawlerAudioParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOceanCrawlerAudioParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OceanCrawlers.OceanCrawlerAudioParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01456730
	 * 		Name   -> Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayBuffAudio
	 * 		Flags  -> (Final, Net, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		struct FEventOceanCrawlerAIBuffAudioRequest        InRequest                                                  (ConstParm, Parm, ReferenceParm)
	 */
	void UOceanCrawlerAudioBroadcaster::Multicast_PlayBuffAudio(const struct FEventOceanCrawlerAIBuffAudioRequest& InRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayBuffAudio");
		
		UOceanCrawlerAudioBroadcaster_Multicast_PlayBuffAudio_Params params {};
		params.InRequest = InRequest;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01456670
	 * 		Name   -> Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayAudio
	 * 		Flags  -> (Final, Net, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		EOceanCrawlerAbilityAudioKey                       InAudioKey                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAudioDelay                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOceanCrawlerAudioBroadcaster::Multicast_PlayAudio(EOceanCrawlerAbilityAudioKey InAudioKey, float InAudioDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanCrawlers.OceanCrawlerAudioBroadcaster.Multicast_PlayAudio");
		
		UOceanCrawlerAudioBroadcaster_Multicast_PlayAudio_Params params {};
		params.InAudioKey = InAudioKey;
		params.InAudioDelay = InAudioDelay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOceanCrawlerAudioBroadcaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOceanCrawlerAudioBroadcaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OceanCrawlers.OceanCrawlerAudioBroadcaster");
		return ptr;
	}

}


