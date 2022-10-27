#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Audio_Play_Wwise_Event_Function.BP_Audio_Play_Wwise_Event_Function_C
	 * Size -> 0x0040 (FullSize[0x0408] - InheritedSize[0x03C8])
	 */
	class ABP_Audio_Play_Wwise_Event_Function_C : public AActor
	{
	public:
		class UWwiseEmitterComponent*                              AudioComp;                                               // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		TArray<class UWwiseEvent*>                                 WwisePlayEvents;                                         // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FName                                                Wwise_Game_Parameter;                                    // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Wwise_Game_Parameter_Value;                              // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QQLT[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseObjectPoolWrapper*                             Wwise_Object_Pool_Wrapper;                               // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UWwiseEvent*>                                 WwiseStopEvents;                                         // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		void StopAudio();
		void PlayAudio();
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
