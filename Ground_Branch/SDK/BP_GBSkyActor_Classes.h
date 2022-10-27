#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_GBSkyActor.BP_GBSkyActor_C
	 * Size -> 0x0068 (FullSize[0x0358] - InheritedSize[0x02F0])
	 */
	class ABP_GBSkyActor_C : public AGBSky
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnTimeSpanChanged;                                       // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TMap<class FName, float>                                   NVGMultiplierMap;                                        // 0x0308(0x0050) Edit, BlueprintVisible

	public:
		void GetNVGMultiplier(float* OutMultiplier);
		void UserConstructionScript();
		void OnTimeSpanChangeEvent();
		void InternalOnTimeSpanChanged();
		void ExecuteUbergraph_BP_GBSkyActor(int32_t EntryPoint);
		void OnTimeSpanChanged__DelegateSignature(const class FName& Timespan);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
